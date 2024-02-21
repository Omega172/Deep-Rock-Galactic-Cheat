#include "pch.h"

ESP::ESP() {};

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Show Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Show Distance" },
		{ HASH("ESP_HEALTH_BAR"), "Health Bar" },
		{ HASH("ESP_INVINCIBLE_FLAG"), "Invincible Flag" },
		{ HASH("ESP_INVINCIBLE_FLAG_TEXT"), "lnvuln" }
	};
	Cheat::localization->AddToLocale("ENG", EnglishLocale);

	std::vector<LocaleData> GermanLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Distance" },
	};
	Cheat::localization->AddToLocale("GER", GermanLocale);

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

void ESP::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), ImGuiChildFlags_Border);
	{
		ImGui::Text(Cheat::localization->Get("ESP").c_str());

		ImGui::Checkbox(Cheat::localization->Get("ESP_ENABLE").c_str(), &bEnabled);
		if (bEnabled)
		{
			ImGui::SameLine();
			if (ImGui::BeginCombo(Cheat::localization->Get("ESP_FLAGS").c_str(), "", ImGuiComboFlags_NoPreview))
			{
				ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_NAME").c_str(), &bBoxName);
				ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_DISTANCE").c_str(), &bBoxDistance);
				ImGui::Selectable(Cheat::localization->Get("ESP_HEALTH_BAR").c_str(), &bBoxHealthBar);
				ImGui::Selectable(Cheat::localization->Get("ESP_INVINCIBLE_FLAG").c_str(), &bInvincibleFlag);

				ImGui::EndCombo();
			}

			ImGui::SliderInt(Cheat::localization->Get("ESP_MAX_DISTANCE").c_str(), &iESPMaxDistance, 0, 1000);
		}
	}
	ImGui::EndChild();
}

void ESP::Render()
{
	if (!bEnabled)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::ABP_PlayerCharacter_C* pDRGPlayer = reinterpret_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	std::vector<CG::AFSDPawn*> apUnsortedActors = Cheat::unreal->GetActors<CG::AFSDPawn>();
	std::vector<CG::AFSDPawn*> apActors = Cheat::unreal->SortActorsByDistance<CG::AFSDPawn*>(apUnsortedActors);

	for (CG::AFSDPawn* pActor : apActors)
	{
		if (!IsValidObjectPtr(pActor))
			continue;

		if (pActor->GetAttitude() != CG::EPawnAttitude::Hostile)
			continue;

		CG::UEnemyHealthComponent* pHealthComponent = reinterpret_cast<CG::UEnemyHealthComponent*>(pActor->GetHealthComponent());
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
			continue;

		CG::FVector Origin, BoxExtent;
		pActor->GetActorBounds(true, &Origin, &BoxExtent, false);

		int iDistance = static_cast<int>(pDRGPlayer->K2_GetActorLocation().DistanceMeter(Origin));
		if (iESPMaxDistance && iDistance > iESPMaxDistance)
			continue;

		CG::FVector2D HeadPos = pUnreal->W2S({ Origin.X, Origin.Y, Origin.Z + BoxExtent.Z });
		CG::FVector2D FeetPos = pUnreal->W2S({ Origin.X, Origin.Y, Origin.Z - BoxExtent.Z });

		if (HeadPos.IsValid() || FeetPos.IsValid())
			continue;

		const float Height = abs(FeetPos.Y - HeadPos.Y);
		const float Width = Height * 0.6f;

		CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
		CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

		float h = DownRight.Y - TopLeft.Y;
		float w = DownRight.X - TopLeft.X;

		CG::FVector2D TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);
		CG::FVector2D DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);

		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Black, 0.f, ImDrawFlags_None, 3.f);
		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Cyan);

		std::string sName = pActor->Name.GetName();
		ImVec2 TextSize = ImGui::CalcTextSize(sName.c_str());

		if (bBoxName)
		{
			float val = TopLeft.X - TopRight.X;
			ImVec2 Pos = CG::FVector2D(TopRight.X + (val / 2), TopLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y - 17.f; // TextSize.y = 14.f

			ImGui::OutlinedText(Pos, White, sName);
		}

		if (bBoxDistance)
		{
			std::stringstream ssDistance;
			ssDistance << "[ " << std::to_string(iDistance) << "m ]";

			std::string sDistance = ssDistance.str();
			ImVec2 TextSize = ImGui::CalcTextSize(sDistance.c_str());

			float val = DownLeft.X - DownRight.X;
			ImVec2 Pos = CG::FVector2D(DownRight.X + (val / 2), DownLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y + 2.f; // TextSize.y = 14.f

			ImGui::OutlinedText(Pos, White, sDistance.c_str());
		}

		if (bBoxHealthBar)
		{
			float MaxHealth = pHealthComponent->GetMaxHealth();
			float CurrentHealth = pHealthComponent->GetHealth();
			float Height = DownRight.Y - (TopRight.Y + 1);

			float g = CurrentHealth / MaxHealth;
			float r = 1.f - g;

			// Outline
			ImGui::GetBackgroundDrawList()->AddRect({ DownRight.X + 10, DownRight.Y + 1 }, { TopRight.X + 5, TopRight.Y }, Black);

			// Health Bar
			ImGui::GetBackgroundDrawList()->AddRectFilled({ DownRight.X + 9, DownRight.Y }, { DownRight.X + 6, DownRight.Y - (Height * (CurrentHealth / MaxHealth)) }, ImGui::ColorConvertFloat4ToU32({ r, g, 0.f, 1.f }));
		}

		// Flags
		ImVec2 Pos = TopRight;
		Pos.x = Pos.x + 5.f;

		if (bInvincibleFlag && !pHealthComponent->canTakeDamage)
		{
			ImGui::OutlinedText(Pos, Green, "Invuln");
			Pos.y += 16.f;
		}
	}
}

void ESP::Run() {}

void ESP::SaveConfig()
{
	Cheat::config->PushEntry("ESP_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("ESP_MAX_DISTANCE", "int", std::to_string(iESPMaxDistance));
	Cheat::config->PushEntry("ESP_BOX_SHOW_NAME", "bool", std::to_string(bBoxName));
	Cheat::config->PushEntry("ESP_BOX_SHOW_DISTANCE", "bool", std::to_string(bBoxDistance));
	Cheat::config->PushEntry("ESP_HEALTH_BAR", "bool", std::to_string(bBoxHealthBar));
	Cheat::config->PushEntry("ESP_INVINCIBLE_FLAG", "bool", std::to_string(bInvincibleFlag));
}

void ESP::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("ESP_ENABLED");
	if (entry.Name == "ESP_ENABLED")
		bEnabled = std::stoi(entry.Value);

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

	entry = Cheat::config->GetEntryByName("ESP_INVINCIBLE_FLAG");
	if (entry.Name == "ESP_INVINCIBLE_FLAG")
		bInvincibleFlag = std::stoi(entry.Value);
}