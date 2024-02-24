#include "pch.h"

ESP::ESP() {};

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_ENEMY_COLOR"), "Enemies Color" },
		{ HASH("ESP_ENEMY_ENABLE"), "Enemies" },
		{ HASH("ESP_FRIENDLY_COLOR"), "Friendlies Color" },
		{ HASH("ESP_FRIENDLY_ENABLE"), "Friendlies" },
		{ HASH("ESP_ACCURATE_BOX"), "Accurate Box" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_DEBUG"), "Debug ESP" },
		{ HASH("ESP_DEBUG_COLOR"), "Debug Color" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Show Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Show Distance" },
		{ HASH("ESP_HEALTH_BAR"), "Health Bar" },
		{ HASH("ESP_ARMOR_BAR"), "Armor Bar" },
		{ HASH("ESP_INVINCIBLE_FLAG"), "Invincible Flag" },
		{ HASH("ESP_INVINCIBLE_FLAG_TEXT"), "lnvuln" }
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishLocale))
		return false;

	std::vector<LocaleData> GermanLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "ESP Aktivieren" },
		{ HASH("ESP_MAX_DISTANCE"), "Maximale Entfernung"}
	};
	if (!Cheat::localization->AddToLocale("GER", GermanLocale))
		return false;

	std::vector<LocaleData> PolishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Włacz ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Maksymalny Dystans" },
		{ HASH("ESP_FLAGS"), "Flagi" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Nazwa" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Dystans" },
	};
	if (!Cheat::localization->AddToLocale("POL", PolishLocale))
		return false;

	Cheat::localization->UpdateLocale();

	Root = CG::FName("Root");

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Initialized");

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

		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_ENEMY_COLOR").c_str(), clrEnemies, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel));
		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ENEMY_ENABLE"), &bEnemies), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_FRIENDLY_COLOR").c_str(), clrFriendlies, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel));
		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_FRIENDLY_ENABLE"), &bFriendlies), true, 2.f);

		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ACCURATE_BOX"), &bAccurateBox));
		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_MAX_DISTANCE"), &iESPMaxDistance, 0, 5000));


		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_DEBUG"), &iDebug, 0, 2000));
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_DEBUG_COLOR").c_str(), clrDebug, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel));
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

	ImU32 uiEnemiesColor = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrEnemies));
	ImU32 uiFriendliesColor = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrFriendlies));
	ImU32 uiDebugColor = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrDebug));

	std::cout << uiFriendliesColor << ' ' << uiDebugColor << '\n';

	for (FNames::ActorInfo_t stInfo : pUnreal->ActorList) {
		switch (stInfo.iLookupIndex) {
		case FNames::ENE_JellyBreeder_Normal_C:
		case FNames::ENE_Butterfly_C:
		case FNames::ENE_Spider_Grunt_Guard_C:
		case FNames::ENE_Bomber_Fire_C:
		case FNames::ENE_FlyingCritterBase_C:
		case FNames::ENE_Spider_Grunt_Guard_Radioactive_C:
		case FNames::ENE_Spider_Spitter_C:
		case FNames::ENE_FacilityTurret_Spinning_C:
		case FNames::ENE_Spider_ExploderTank_Ghost_C:
		case FNames::ENE_Spider_Grunt_Guard_Ice_C:
		case FNames::ENE_FacilityTurret_Burst_C:
		case FNames::ENE_Spider_Drone_C:
		case FNames::ENE_Spider_Shooter_Ground_C:
		case FNames::ENE_Spider_Grunt_Normal_C:
		case FNames::ENE_Spider_Exploding_C:
		case FNames::ENE_Spider_Tank_Amber_C:
		case FNames::ENE_HydraWeed_Core_C:
		case FNames::ENE_JellyBreeder_Base_C:
		case FNames::ENE_Spider_Amber_Shooter_C:
		case FNames::ENE_Spider_Tank_Ice_C:
		case FNames::ENE_Jelly_Passive_C:
		case FNames::ENE_Spider_Boss_TwinA_C:
		case FNames::ENE_ShootingPlant_Small_C:
		case FNames::ENE_Jelly_Swarmer_C:
		case FNames::ENE_Prospector_C:
		case FNames::ENE_FacilityTentacle_End_C:
		case FNames::ENE_Spider_Tank_Rock_C:
		case FNames::ENE_Spider_ExploderTank_King_C:
		case FNames::ENE_Harvester_C:
		case FNames::ENE_Spider_Exploding_Rockpox_Plague_C:
		case FNames::ENE_Bomber_Rockpox_Plague_C:
		case FNames::ENE_Spider_ShieldTank_C:
		case FNames::ENE_FacilityTurret_Sniper_C:
		case FNames::ENE_Spider_Shooter_C:
		case FNames::ENE_Spider_Swarmer_Radioactive_C:
		case FNames::ENE_Spider_RapidShooter_Elite_C:
		case FNames::ENE_Bomber_Child_C:
		case FNames::ENE_Spider_Charger_C:
		case FNames::ENE_Spider_Swarmer_Pheromoned_C:
		case FNames::ENE_PlagueLarva_C:
		case FNames::ENE_Jelly_Swarmer_Child_C:
		case FNames::ENE_Jelly_Spawn_Child_C:
		case FNames::ENE_FacilityTentacle_Burrowing_C:
		case FNames::ENE_SpiderSpawner_C:
		case FNames::ENE_Spider_Shooter_Normal_Elite_C:
		case FNames::ENE_Spider_Exploding_Warning_Radioactive_C:
		case FNames::ENE_Spider_Tank_Radioactive_C:
		case FNames::ENE_Grabber_C:
		case FNames::ENE_Spider_Boss_HeavySpawn_C:
		case FNames::ENE_BoughWasp_Nest_Medium2_C:
		case FNames::ENE_Spider_Grunt_Attacker_Ice_C:
		case FNames::ENE_Shredder_C:
		case FNames::ENE_Spider_RapidShooter_C:
		case FNames::ENE_Spider_Tank_Generic_C:
		case FNames::ENE_Spider_Tank_Normal_C:
		case FNames::ENE_BoughWasp_Nest_Medium_C:
		case FNames::ENE_Spider_Boss_Base_C:
		case FNames::ENE_Spider_Boss_TwinBase_C:
		case FNames::ENE_BoughWasp_Swarm_C:
		case FNames::ENE_Spider_Exploding_Radioactive_C:
		case FNames::ENE_LootBug_C:
		case FNames::ENE_Spider_Tank_Base_C:
		case FNames::ENE_Mactera_TripleShooter_C:
		case FNames::ENE_TerminatorTentacle_C:
		case FNames::ENE_LootBug_Gold_C:
		case FNames::ENE_Spider_Grunt_Rock_C:
		case FNames::ENE_Terminator_C:
		case FNames::ENE_Spider_Grunt_Attacker_Radioactive_C:
		case FNames::ENE_Spider_Shooter_Rockpox_Plague_C:
		case FNames::ENE_Spider_Boss_TwinB_C:
		case FNames::ENE_Spider_ExploderTank_C:
		case FNames::ENE_Spider_Boss_Heavy_C:
		case FNames::ENE_GliderBeast_C:
		case FNames::ENE_Flea_C:
		case FNames::ENE_Spider_Grunt_Attacker_C:
		case FNames::ENE_ElectricPlantVThree_C:
		case FNames::ENE_Spider_Tank_Boss_C:
		case FNames::ENE_Spider_Grunt_Radioactive_C:
		case FNames::ENE_Spider_Stinger_C:
		case FNames::ENE_PF_SpiderBase_C:
		case FNames::ENE_Spider_Spawn_C:
		case FNames::ENE_Maggot_Red1_C:
		case FNames::ENE_StabberVines2_C:
		case FNames::ENE_Spider_Swarmer_C:
		case FNames::ENE_Spider_Buffer_C:
		case FNames::ENE_Mactera_Shooter_Normal_C:
		case FNames::ENE_Spider_Swarmer_Ice_C:
		case FNames::ENE_ShootingPlant_C:
		case FNames::ENE_Parasite_C:
		case FNames::ENE_Mactera_Amber_C:
		case FNames::ENE_InsectSwarm_Spawner_C:
		case FNames::ENE_Woodlouse_Youngling_C:
		case FNames::ENE_Bomber_Ice_C:
		case FNames::ENE_Spider_Grunt_Base_C:
		case FNames::ENE_BoughWasp_Nest_Medium3_C:
		case FNames::ENE_Bomber_C:
		case FNames::ENE_Maggot_C:
		case FNames::ENE_SmallShootingPlant_RegenPod_C:
		case FNames::ENE_Shredder_Base_C:
		case FNames::ENE_StabberVine_Tentacle_C:
		case FNames::ENE_InfestationLarva_C:
		case FNames::ENE_Woodlouse_C:
		case FNames::ENE_Shark_C:
		case FNames::ENE_Maggot_Normal_C:
		case FNames::ENE_FlyingSmartRock_C:
		case FNames::ENE_EnemySpawner_C:
		case FNames::ENE_Spider_Exploding_Warning_C:
		case FNames::ENE_Spider_Grunt_Ice_C:
		case FNames::ENE_FacilityTurret_Barrier_C:
		case FNames::ENE_FacilityTentacle_C:
		case FNames::ENE_Jelly_Passive_Mother_C:
		case FNames::ENE_InsectSwarm_C:
		case FNames::ENE_Maggot_Azure_C:
		case FNames::ENE_Spider_Shooter_Queen_C:
		case FNames::ENE_JellyBreeder_RockpoxPlague_C:
		case FNames::ENE_WalkingPlagueheart_C:
		case FNames::ENE_Spider_Hoarder_C:
		case FNames::ENE_StabberVines_C:
		case FNames::ENE_Spider_Tank_RockpoxPlague_C:
		case FNames::ENE_FacilityCaretaker_C:
		case FNames::ENE_InfectedMule_C:
		case FNames::ENE_Mactera_Shooter_Base_C:
		case FNames::ENE_Maggot_HollowBough_Grub_C:
		case FNames::ENE_Spider_Shooter_Normal_C:
		case FNames::ENE_Spider_Grunt_RockpoxPlague_C:
		case FNames::ENE_CaveLeech_C:
		case FNames::ENE_FacilityTurret_Base_C:
		case FNames::ENE_Maggot_Green1_C:
		case FNames::ENE_Maggot_SplineTrail_C:
		case FNames::ENE_Mactera_Shooter_HeavyVeteran_C:
		case FNames::ENE_PlagueShark_C:
		case FNames::ENE_Spider_Lobber_C:
		case FNames::ENE_PatrolBot_C:
		case FNames::ENE_PatrolBot_Caretaker_C:
		case FNames::ENE_SpiderBase_Large_C:
		case FNames::ENE_BoughWasp_Nest_Small_C:
		case FNames::ENE_Spider_Lobber_Base_C:
		{
			if (!IsValidObjectPtr(stInfo.pActor))
				break;

			CG::AFSDPawn* pPawn = reinterpret_cast<CG::AFSDPawn*>(stInfo.pActor);

			if (!IsValidObjectPtr(pPawn) || !stInfo.pActor->IsA(CG::AFSDPawn::StaticClass()))
				break;

			CG::UHealthComponent* pHealthComponent = reinterpret_cast<CG::UHealthComponent*>(pPawn->GetHealthComponent());
			if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
				break;

			if (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance)
				break;

			bool bIsEnemy = pPawn->GetAttitude() >= CG::EPawnAttitude::Hostile;
			if ((bIsEnemy && !bEnemies) || (!bIsEnemy && !bFriendlies))
				break;


			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox))
				break;

			ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Black, 0.f, ImDrawFlags_None, 3.f);
			ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, bIsEnemy ? uiEnemiesColor : uiFriendliesColor);

			if (bBoxName) {

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				size_t iLength = Utils::Strlen(szName);
				if (iLength > 3) {
					ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
					ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
				}
			}

			if (bBoxDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

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
				ImGui::OutlinedText(vecFlags, Red, "Invuln");
				vecFlags.y += 16.f;
			}


			break;
		}
		case FNames::Actor:
		{
			if (!IsValidObjectPtr(stInfo.pActor))
				break;

			CG::ACarriableItem* pPawn = reinterpret_cast<CG::ACarriableItem*>(stInfo.pActor);
			if (!IsValidObjectPtr(pPawn) || !stInfo.pActor->IsA(CG::ACarriableItem::StaticClass()))
				break;

			if (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance)
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox))
				break;

			ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Black, 0.f, ImDrawFlags_None, 3.f);
			ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Cyan);

			if (bBoxName) {

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				size_t iLength = Utils::Strlen(szName);
				if (iLength > 3) {
					ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
					ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
				}
			}

			if (bBoxDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			break;
		}

		default:
		{
			if (stInfo.flDistance > iDebug)
				break;

			if (!IsValidObjectPtr(stInfo.pActor))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			CG::FVector2D vecCenter;
			if (!pUnreal->WorldToScreen(vecLocation, vecCenter))
				break;

			char szName[64];
			szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

			ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
			ImGui::OutlinedText({ vecCenter.X - vecTextSize.x / 2, vecCenter.Y - 8.f }, uiDebugColor, szName);

			break;
		}}
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
	Cheat::config->PushEntry("ESP_ENEMY_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrEnemies))));
	Cheat::config->PushEntry("ESP_ENEMY_ENABLE", "bool", std::to_string(bEnemies));
	Cheat::config->PushEntry("ESP_FRIENDLY_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrFriendlies))));
	Cheat::config->PushEntry("ESP_FRIENDLY_ENABLE", "bool", std::to_string(bFriendlies));
	Cheat::config->PushEntry("ESP_ACCURATE_BOX", "bool", std::to_string(bAccurateBox));
	Cheat::config->PushEntry("ESP_MAX_DISTANCE", "int", std::to_string(iESPMaxDistance));
	Cheat::config->PushEntry("ESP_DEBUG_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrDebug))));
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

	entry = Cheat::config->GetEntryByName("ESP_ENEMY_COLOR");
	if (entry.Name == "ESP_ENEMY_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&clrEnemies[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&clrEnemies[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}

	entry = Cheat::config->GetEntryByName("ESP_ENEMY_ENABLE");
	if (entry.Name == "ESP_ENEMY_ENABLE")
		bEnemies = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLY_COLOR");
	if (entry.Name == "ESP_FRIENDLY_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&clrFriendlies[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&clrFriendlies[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLY_ENABLE");
	if (entry.Name == "ESP_FRIENDLY_ENABLE")
		bFriendlies = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ACCURATE_BOX");
	if (entry.Name == "ESP_ACCURATE_BOX")
		bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_MAX_DISTANCE");
	if (entry.Name == "ESP_MAX_DISTANCE")
		iESPMaxDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_DEBUG_COLOR");
	if (entry.Name == "ESP_DEBUG_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&clrDebug[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&clrDebug[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}

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