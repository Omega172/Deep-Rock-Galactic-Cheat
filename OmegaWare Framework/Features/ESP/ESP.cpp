#include "pch.h"

ESP::ESP() {};

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_ACCURATE_BOX"), "Accurate Box" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Show Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Show Distance" },
		{ HASH("ESP_HEALTH_BAR"), "Health Bar" },
		{ HASH("ESP_ARMOR_BAR"), "Armor Bar" },
		{ HASH("ESP_INVINCIBLE_FLAG"), "Invincible Flag" },
		{ HASH("ESP_INVINCIBLE_FLAG_TEXT"), "lnvuln" }
	};
	Cheat::localization->AddToLocale("ENG", EnglishLocale);

	std::vector<LocaleData> GermanLocale = {
	};
	Cheat::localization->AddToLocale("GER", GermanLocale);

	std::vector<LocaleData> PolishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Włacz ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Maksymalny Dystans" },
		{ HASH("ESP_FLAGS"), "Flagi" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Nazwa" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Dystans" },
	};
	Cheat::localization->AddToLocale("POL", PolishLocale);

	Cheat::localization->UpdateLocale();

	Root = CG::FName("Root");

	Initialized = true;
	return Initialized;
}

void ESP::Destroy()
{
	if (!Initialized)
		return;

	Initialized = false;
}

void ESP::HandleKeys() {}

void ESP::PopulateMenu()
{
	if (!Initialized)
		return;

	Child* ESP = new Child("ESP", []() { return ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y); }, ImGuiChildFlags_Border);
	ESP->AddElement(new Text(Cheat::localization->Get("ESP")));
	ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ENABLE"), &bEnabled));
	if (bEnabled)
	{
		ESP->AddElement(new Combo(Cheat::localization->Get("ESP_FLAGS"), "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_NAME").c_str(), &bBoxName);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_DISTANCE").c_str(), &bBoxDistance);
			ImGui::Selectable(Cheat::localization->Get("ESP_HEALTH_BAR").c_str(), &bBoxHealthBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_ARMOR_BAR").c_str(), &bBoxArmorBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_INVINCIBLE_FLAG").c_str(), &bInvincibleFlag);
		}), true);
		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ACCURATE_BOX"), &bAccurateBox));
		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_MAX_DISTANCE"), &iESPMaxDistance, 0, 1000));
	}

	Cheat::menu->AddElement(ESP, true);
}

void ESP::Render()
{
	if (!bEnabled)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::APawn* pDRGPlayer = pUnreal->GetAcknowledgedPawn();
	if (!pDRGPlayer)
		return;

	std::vector<CG::AFSDPawn*> apUnsortedActors = pUnreal->GetActors<CG::AFSDPawn>();
	std::vector<CG::AFSDPawn*> apActors = pUnreal->SortActorsByDistance<CG::AFSDPawn*>(apUnsortedActors);

	for (CG::AFSDPawn* pActor : apActors)
	{
		if (!IsValidObjectPtr(pActor))
			continue;

		static CG::FName Flea("ENE_Flea_C");
		if (pActor->GetAttitude() <= CG::EPawnAttitude::Neutral && pActor->Class->Name.ComparisonIndex != Flea.ComparisonIndex)
			continue;

		CG::UHealthComponent* pHealthComponent = reinterpret_cast<CG::UHealthComponent*>(pActor->GetHealthComponent());
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
			continue;

		CG::FVector vecLocation, vecExtent;
		pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

		int iDistance = static_cast<int>(pDRGPlayer->K2_GetActorLocation().DistanceMeter(vecLocation));
		if (iESPMaxDistance && iDistance > iESPMaxDistance)
			continue;

		ImRect rectBox{};
		if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox))
			continue;

		ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Black, 0.f, ImDrawFlags_None, 3.f);
		ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Cyan);

		if (bBoxName) {
			std::string sName = pActor->Name.GetName();
			ImVec2 vecTextSize = ImGui::CalcTextSize(sName.c_str());

			ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, sName);
		}
			

		if (bBoxDistance)
		{
			std::stringstream ssDistance;
			ssDistance << "[ " << std::to_string(iDistance) << "m ]";

			std::string sDistance = ssDistance.str();
			ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

			ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
		}

		ImVec2 vecFlags(rectBox.Max.x + 4.f, rectBox.Min.y);

		if (bBoxHealthBar)
		{
			float g = pHealthComponent->GetHealthPct();

			ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
			ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
			ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, ImGui::ColorConvertFloat4ToU32({ 1.f - g, g, 0.f, 1.f }));

			vecFlags.x += 7.f;
		}

		if (bBoxArmorBar && pHealthComponent->GetMaxArmor() > 0.f)
		{
			float g = pHealthComponent->GetArmorPct();

			ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
			ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
			ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, Cyan);

			vecFlags.x += 7.f;
		}

		if (bInvincibleFlag && !pHealthComponent->canTakeDamage)
		{
			ImGui::OutlinedText(vecFlags, Green, "Invuln");
			vecFlags.y += 16.f;
		}
	}
}

bool ESP::GetBoxFromBBox(CG::FVector & vecLocation, CG::FVector & vecExtent, ImRect & rectOut) {

	Unreal* pUnreal = Cheat::unreal.get();

	if (bAccurateBox) {
		CG::FVector2D v1, v2, v3, v4, v5, v6, v7, v8;
		if (!(
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z + vecExtent.Z }, v1) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z + vecExtent.Z }, v2) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z + vecExtent.Z }, v3) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z + vecExtent.Z }, v4) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z - vecExtent.Z }, v5) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z - vecExtent.Z }, v6) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z - vecExtent.Z }, v7) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z - vecExtent.Z }, v8)
			)) {
			return false;
		}

		rectOut.Min.x = std::min({ v1.X, v2.X, v3.X, v4.X, v5.X, v6.X, v7.X, v8.X });
		rectOut.Max.x = std::max({ v1.X, v2.X, v3.X, v4.X, v5.X, v6.X, v7.X, v8.X });

		rectOut.Min.y = std::min({ v1.Y, v2.Y, v3.Y, v4.Y, v5.Y, v6.Y, v7.Y, v8.Y });
		rectOut.Max.y = std::max({ v1.Y, v2.Y, v3.Y, v4.Y, v5.Y, v6.Y, v7.Y, v8.Y });

		return true;
	}

	CG::FVector2D v1, v2;
	if (!(
		pUnreal->WorldToScreen({ vecLocation.X, vecLocation.Y, vecLocation.Z + vecExtent.Z }, v1) &&
		pUnreal->WorldToScreen({ vecLocation.X, vecLocation.Y, vecLocation.Z - vecExtent.Z }, v2)
		)) {
		return false;
	}

	rectOut.Min.x = rectOut.Max.x = 0.f;
	
	rectOut.Min.y = std::min(v1.Y, v2.Y);
	rectOut.Max.y = std::max(v1.Y, v2.Y);

	float flHalfWidth = rectOut.GetHeight() * 0.3f;
	rectOut.Min.x = std::min(v1.X, v2.X) - flHalfWidth;
	rectOut.Max.x = std::max(v1.X, v2.X) + flHalfWidth;

	return true;
}

void ESP::Run() {}

void ESP::SaveConfig()
{
	Cheat::config->PushEntry("ESP_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("ESP_ACCURATE_BOX", "bool", std::to_string(bAccurateBox));
	Cheat::config->PushEntry("ESP_MAX_DISTANCE", "int", std::to_string(iESPMaxDistance));
	Cheat::config->PushEntry("ESP_BOX_SHOW_NAME", "bool", std::to_string(bBoxName));
	Cheat::config->PushEntry("ESP_BOX_SHOW_DISTANCE", "bool", std::to_string(bBoxDistance));
	Cheat::config->PushEntry("ESP_HEALTH_BAR", "bool", std::to_string(bBoxHealthBar));
	Cheat::config->PushEntry("ESP_ARMOR_BAR", "bool", std::to_string(bBoxArmorBar));
	Cheat::config->PushEntry("ESP_INVINCIBLE_FLAG", "bool", std::to_string(bInvincibleFlag));
}

void ESP::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("ESP_ENABLED");
	if (entry.Name == "ESP_ENABLED")
		bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ACCURATE_BOX");
	if (entry.Name == "ESP_ACCURATE_BOX")
		bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_MAX_DISTANCE");
	if (entry.Name == "ESP_MAX_DISTANCE")
		iESPMaxDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_BOX_SHOW_NAME");
	if (entry.Name == "ESP_BOX_SHOW_NAME")
		bBoxName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_BOX_SHOW_DISTANCE");
	if (entry.Name == "ESP_BOX_SHOW_DISTANCE")
		bBoxDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_HEALTH_BAR");
	if (entry.Name == "ESP_HEALTH_BAR")
		bBoxHealthBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ARMOR_BAR");
	if (entry.Name == "ESP_ARMOR_BAR")
		bBoxArmorBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_INVINCIBLE_FLAG");
	if (entry.Name == "ESP_INVINCIBLE_FLAG")
		bInvincibleFlag = std::stoi(entry.Value);
}