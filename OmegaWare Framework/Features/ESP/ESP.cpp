﻿#include "pch.h"

ESP::ESP() {};

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },

		{ HASH("ESP_ENABLE"), "Enable ESP" },

		{ HASH("ESP_ENEMIES"), "Enemies" },
		{ HASH("ESP_FRIENDLIES"), "Friendlies" },
		{ HASH("ESP_PLAYERS"), "Players" },
		{ HASH("ESP_OBJECTIVES"), "Objectives" },
		{ HASH("ESP_SPECIAL_STRUCTURES"), "Special Structures" },
		{ HASH("ESP_RESOURCE_CHUNKS"), "Resource Chunks" },

		{ HASH("ESP_ACCURATE_BOX"), "Accurate Box" },
		{ HASH("ESP_BOX"), "Box" },
		{ HASH("ESP_NAME"), "Name" },
		{ HASH("ESP_DISTANCE"), "Distance" },
		{ HASH("ESP_HEALTH_BAR"), "Health Bar" },
		{ HASH("ESP_ARMOR_BAR"), "Armor Bar" },
		{ HASH("ESP_FLAG_INVINCIBLE"), "Invincible Flag" },

		{ HASH("ESP_DEBUG"), "Debug ESP" },
		{ HASH("ESP_DEBUG_COLOR"), "Debug Color" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },

		{ HASH("ESP_INVINCIBLE_FLAG_TEXT"), "lnvuln" },

		{ HASH("PLAYER_LIST"), "PlayerList" }
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
	ESP->AddElement(new Checkbox(Cheat::localization->Get("PLAYER_LIST"), &bShowPlayerList));
	ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ENABLE"), &bEnabled));
	if (bEnabled)
	{
		ESP->AddElement(new Checkbox("##EnemiesCheckbox", &stEnemies.bEnabled));
		ESP->AddElement(new Combo("##EnemiesFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stEnemies.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stEnemies.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stEnemies.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stEnemies.bDistance);
			ImGui::Selectable(Cheat::localization->Get("ESP_HEALTH_BAR").c_str(), &stEnemies.bHealthBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_ARMOR_BAR").c_str(), &stEnemies.bArmorBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_FLAG_INVINCIBLE").c_str(), &stEnemies.bFlagInvincible);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_ENEMIES").c_str(), stEnemies.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new Checkbox("##FriendliesCheckbox", &stFriendlies.bEnabled));
		ESP->AddElement(new Combo("##FriendliesFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stFriendlies.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stFriendlies.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stFriendlies.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stFriendlies.bDistance);
			ImGui::Selectable(Cheat::localization->Get("ESP_HEALTH_BAR").c_str(), &stFriendlies.bHealthBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_ARMOR_BAR").c_str(), &stFriendlies.bArmorBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_FLAG_INVINCIBLE").c_str(), &stFriendlies.bFlagInvincible);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_FRIENDLIES").c_str(), stFriendlies.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new Checkbox("##PlayersCheckbox", &stPlayers.bEnabled));
		ESP->AddElement(new Combo("##PlayersFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stPlayers.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stPlayers.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stPlayers.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stPlayers.bDistance);
			ImGui::Selectable(Cheat::localization->Get("ESP_HEALTH_BAR").c_str(), &stPlayers.bHealthBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_ARMOR_BAR").c_str(), &stPlayers.bArmorBar);
			ImGui::Selectable(Cheat::localization->Get("ESP_FLAG_INVINCIBLE").c_str(), &stPlayers.bFlagInvincible);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_PLAYERS").c_str(), stPlayers.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new Checkbox("##ObjectivesCheckbox", &stObjectives.bEnabled));
		ESP->AddElement(new Combo("##ObjectivesFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stObjectives.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stObjectives.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stObjectives.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stObjectives.bDistance);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_OBJECTIVES").c_str(), stObjectives.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new Checkbox("##SpecialStructuresCheckbox", &stSpecialStructures.bEnabled));
		ESP->AddElement(new Combo("##SpecialStructuresFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stSpecialStructures.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stSpecialStructures.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stSpecialStructures.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stSpecialStructures.bDistance);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_SPECIAL_STRUCTURES").c_str(), stSpecialStructures.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new Checkbox("##ResourceChunksCheckbox", &stResourceChunks.bEnabled));
		ESP->AddElement(new Combo("##ResourceChunksFlags", "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_ACCURATE_BOX").c_str(), &stResourceChunks.bAccurateBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX").c_str(), &stResourceChunks.bBox);
			ImGui::Selectable(Cheat::localization->Get("ESP_NAME").c_str(), &stResourceChunks.bName);
			ImGui::Selectable(Cheat::localization->Get("ESP_DISTANCE").c_str(), &stResourceChunks.bDistance);
			}), true, 2.f);
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_RESOURCE_CHUNKS").c_str(), stResourceChunks.clrBox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar), true, 2.f);

		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_MAX_DISTANCE"), &iESPMaxDistance, 0, 5000));

		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_DEBUG"), &iDebug, 0, 2000));
		ESP->AddElement(new ColorPicker(Cheat::localization->Get("ESP_DEBUG_COLOR").c_str(), clrDebug, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar));
	}

	Cheat::menu->AddElement(ESP, true);

	if (!bShowPlayerList)
		return;

	Menu* PlayerList = new Menu(ImVec2(0, 0), "Player List", &bShowPlayerList, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
	PlayerList->AddElement(new Table("##PlayerListTable", 2, [this]() {
		ImGui::TableNextColumn();
		if (vecPlayers.empty())
			ImGui::Text("Not currently in a mission");

		for (CG::AActor* pPlayer : vecPlayers)
		{
			if (!IsValidObjectPtr(pPlayer))
				continue;

			CG::ABP_PlayerCharacter_C* pPlayerCharacter = reinterpret_cast<CG::ABP_PlayerCharacter_C*>(pPlayer);
			if (!IsValidObjectPtr(pPlayerCharacter))
				break;

			CG::AFSDPlayerState* pPlayerState = pPlayerCharacter->GetPlayerState();
			if (!IsValidObjectPtr(pPlayerState))
				break;

			// EVIL TERRIBLE HORRIBLE HACK
			char szName[64];
			szName[pPlayerState->GetPlayerName().ToString().copy(szName, 63, 0)] = 0;

			if (ImGui::Button(szName)) {
				pSelectedPlayer = pPlayerCharacter;

				CG::AFSDPlayerController* pPlayerController = reinterpret_cast<CG::AFSDPlayerController*>(Cheat::unreal->GetPlayerController());
				pPlayerController->SetViewTargetWithBlend(pPlayerCharacter, 0.5f, CG::EViewTargetBlendFunction::VTBlend_Linear, 0.f, false);
				pPlayerController->PlayerCameraManager->ViewTargetOffset.X += 30.f;
				pPlayerController->PlayerCameraManager->ViewTargetOffset.Y += 30.f;
			}
		}

		ImGui::TableNextColumn();
		if (pSelectedPlayer)
		{
			if (!IsValidObjectPtr(pSelectedPlayer))
			{
				pSelectedPlayer = nullptr;
				return;
			}

			CG::AFSDPlayerState* pPlayerState = pSelectedPlayer->GetPlayerState();
			if (!IsValidObjectPtr(pPlayerState))
				return;

			CG::UPlayerHealthComponent* pHealthComponent = pSelectedPlayer->HealthComponent;
			if (!IsValidObjectPtr(pHealthComponent))
				return;

			char szName[64];
			szName[pPlayerState->GetPlayerName().ToString().copy(szName, 63, 0)] = 0;

			ImGui::Text("Selected Player: %s", szName);
			ImGui::Text("Is Local: %s", pSelectedPlayer->IsLocallyControlled() ? "true" : "false");
			ImGui::Text("Health: %f", pHealthComponent->GetHealth());
			ImGui::Text("Armor: %f", pHealthComponent->GetArmor());
			ImGui::Text("Max Health: %f", pHealthComponent->MaxHealth);
			ImGui::Text("Max Armor: %f", pHealthComponent->GetMaxArmor());
			ImGui::Text("Health Pct: %f", pHealthComponent->GetHealthPct());
			ImGui::Text("Armor Pct: %f", pHealthComponent->GetArmorPct());
			ImGui::Text("Is Dead: %s", pHealthComponent->IsDead() ? "true" : "false");
		}
		else {
			ImGui::Text("No player selected");
		}

	}, ImGuiTableFlags_Borders));

	PlayerList->Render();
}

void ESP::Render()
{
	if (!bEnabled)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::APawn* pDRGPlayer = pUnreal->GetAcknowledgedPawn();
	if (!pDRGPlayer)
		return;

	vecPlayers.clear();

	ImU32 uiEnemiesBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stEnemies.clrBox));
	ImU32 uiEnemiesBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stEnemies.clrBox[3] });

	ImU32 uiFriendliesBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stFriendlies.clrBox));
	ImU32 uiFriendliesBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stFriendlies.clrBox[3] });

	ImU32 uiPlayersBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stPlayers.clrBox));
	ImU32 uiPlayersBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stPlayers.clrBox[3] });

	ImU32 uiObjectivesBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stObjectives.clrBox));
	ImU32 uiObjectivesBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stObjectives.clrBox[3] });

	ImU32 uiSpecialStructuresBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stSpecialStructures.clrBox));
	ImU32 uiSpecialStructuresBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stSpecialStructures.clrBox[3] });

	ImU32 uiResourceChunksBox = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stResourceChunks.clrBox));
	ImU32 uiResourceChunksBoxOutline = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, stResourceChunks.clrBox[3] });

	ImU32 uiDebugColor = ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrDebug));

	for (FNames::ActorInfo_t stInfo : pUnreal->ActorList) {
		switch (stInfo.iLookupIndex) {
		case FNames::DefaultPawn:
		case FNames::PathfinderVehicle:
		case FNames::PlayerCameraDrone:
		case FNames::FSDPawn:
		case FNames::Caretaker:
		case FNames::EscortMule:
		case FNames::TowerModuleBase:
		case FNames::GuntowerModule:
		case FNames::GuntowerWeakPoint:
		case FNames::TowerEventModule:
		case FNames::EnemyPawn:
		case FNames::StabberVineRoot:
		case FNames::ParasiteEnemy:
		case FNames::InsectSwarmSpawner:
		case FNames::HydraWeedHealer:
		case FNames::ShootingPlant:
		case FNames::HydraWeedCore:
		case FNames::FacilityTurret:
		case FNames::TentacleBase:
		case FNames::CaveLeech:
		case FNames::DeepPathfinderCharacter:
		case FNames::EnemyDeepPathfinderCharacter:
		case FNames::AFlyingBug:
		case FNames::ConvertedRobot:
		case FNames::FlyingEnemyDeepPathfinderCharacter:
		case FNames::FriendlyParasite:
		case FNames::HalloweenSkull:
		case FNames::InsectSwarmEnemy:
		case FNames::PatrolBot:
		case FNames::PlagueWorm:
		case FNames::ProspectorRobot:
		case FNames::SharkEnemy:
		case FNames::Shredder:
		case FNames::SpiderEnemy:
		case FNames::TerminatorEnemy:
		case FNames::WoodLouse:
		case FNames::BP_ShieldRegenerator_Mover_C:
		case FNames::ENE_Jelly_Passive_C:
		case FNames::Bosco:
		case FNames::CaveWorm:
		case FNames::Maggot:
		case FNames::DroneBase:
		case FNames::DroneCharacter:
		case FNames::MULE:
		case FNames::RecallableActor:
		{
			if ((iESPMaxDistance && stInfo.flDistance > iESPMaxDistance) || !IsValidObjectPtr(stInfo.pActor))
				break;

			CG::AFSDPawn* pPawn = reinterpret_cast<CG::AFSDPawn*>(stInfo.pActor);
			if (!IsValidObjectPtr(pPawn) || !pUnreal->IsAFast(pPawn->Class, FNames::FSDPawn))
				break;

			CG::UHealthComponent* pHealthComponent = reinterpret_cast<CG::UHealthComponent*>(pPawn->GetHealthComponent());
			if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
				break;

			bool bIsEnemy = pPawn->GetAttitude() >= CG::EPawnAttitude::Hostile;
			if ((bIsEnemy && !stEnemies.bEnabled) || (!bIsEnemy && !stFriendlies.bEnabled))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, bIsEnemy ? stEnemies.bAccurateBox : stFriendlies.bAccurateBox))
				break;

			if (bIsEnemy ? stEnemies.bBox : stFriendlies.bBox) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, bIsEnemy ? uiEnemiesBoxOutline : uiFriendliesBoxOutline, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, bIsEnemy ? uiEnemiesBox : uiFriendliesBox);
			}

			if (bIsEnemy ? stEnemies.bName : stFriendlies.bName) {

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (bIsEnemy ? stEnemies.bDistance : stFriendlies.bDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			ImVec2 vecFlags(rectBox.Max.x + 4.f, rectBox.Min.y);

			if (bIsEnemy ? stEnemies.bHealthBar : stFriendlies.bHealthBar)
			{
				float g = pHealthComponent->GetHealthPct();

				ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, ImGui::ColorConvertFloat4ToU32({ 1.f - g, g, 0.f, 1.f }));

				vecFlags.x += 7.f;
			}

			if ((bIsEnemy ? stEnemies.bArmorBar : stFriendlies.bArmorBar) && pHealthComponent->GetMaxArmor() > 0.f)
			{
				float g = pHealthComponent->GetArmorPct();

				ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, Cyan);

				vecFlags.x += 7.f;
			}

			if ((bIsEnemy ? stEnemies.bFlagInvincible : stFriendlies.bFlagInvincible) && !pHealthComponent->canTakeDamage)
			{
				ImGui::OutlinedText(vecFlags, Gray, "Invuln");
				vecFlags.y += 16.f;
			}

			break;
		}
		case FNames::BP_Collectible_Simple_C:      // Resource
		case FNames::BP_Collectible_Barley_Base_C: // BEER
		case FNames::BP_Collectible_Base_C:        // YIPPEE
		case FNames::Gem:                          // What do you think dumbass
		case FNames::BP_AlienEgg_C:
		case FNames::BP_MiniMule_Salvage_C:
		case FNames::BP_MuleLeg_C:
		case FNames::BP_DorettaHead_C:
		{
			if (!stObjectives.bEnabled || (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance) || !IsValidObjectPtr(stInfo.pActor))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, stObjectives.bAccurateBox))
				break;

			if (stObjectives.bBox) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiObjectivesBoxOutline, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiObjectivesBox);
			}

			if (stObjectives.bName) {
				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (stObjectives.bDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			break;
		}
		case FNames::BP_AmberEvent_C:
		case FNames::BP_ProspectorDataDeposit_C:
		case FNames::BP_JetBootsBox_C: // JetBootsBox
		case FNames::BP_LostPackStart_C: // TreasureBeacon
		case FNames::BP_LostPack_C: //  TreasureContainer
		case FNames::BP_GuntowerEvent_C:
		{
			if (!stSpecialStructures.bEnabled || (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance) || !IsValidObjectPtr(stInfo.pActor))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, stSpecialStructures.bAccurateBox))
				break;

			if (stSpecialStructures.bBox) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiSpecialStructuresBoxOutline, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiSpecialStructuresBox);
			}

			if (stSpecialStructures.bName) {
				
				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (stSpecialStructures.bDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			break;
		}
		case FNames::Character:
		case FNames::PlayerCharacter:
		{
			vecPlayers.push_back(stInfo.pActor);

			if (!stPlayers.bEnabled || (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance) || !IsValidObjectPtr(stInfo.pActor))
				break;

			CG::ABP_PlayerCharacter_C* pPawn = reinterpret_cast<CG::ABP_PlayerCharacter_C*>(stInfo.pActor);
			if (!IsValidObjectPtr(pPawn) || !stInfo.pActor->IsA(CG::ABP_PlayerCharacter_C::StaticClass()))
				break;

			CG::UHealthComponent* pHealthComponent = reinterpret_cast<CG::UHealthComponent*>(pPawn->HealthComponent);
			if (pPawn->IsLocallyControlled() || !IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
				break;


			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, stPlayers.bAccurateBox))
				break;

			if (stPlayers.bBox) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiPlayersBoxOutline, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiPlayersBox);
			}

			if (stPlayers.bName) {

				CG::AFSDPlayerState* pPlayerState = pPawn->GetPlayerState();
				if (!IsValidObjectPtr(pPlayerState))
					break;

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[pPlayerState->GetPlayerName().ToString().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (stPlayers.bDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			ImVec2 vecFlags(rectBox.Max.x + 4.f, rectBox.Min.y);

			if (stPlayers.bHealthBar)
			{
				float g = pHealthComponent->GetHealthPct();

				ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, ImGui::ColorConvertFloat4ToU32({ 1.f - g, g, 0.f, 1.f }));

				vecFlags.x += 7.f;
			}

			if (stPlayers.bArmorBar && pHealthComponent->GetMaxArmor() > 0.f)
			{
				float g = pHealthComponent->GetArmorPct();

				ImGui::GetBackgroundDrawList()->AddRect({ vecFlags.x - 1.f, rectBox.Min.y - 1 }, { vecFlags.x + 4.f, rectBox.Max.y + 1.f }, Black);
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Min.y }, { vecFlags.x + 3.f, rectBox.Max.y }, ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 0.2f }));
				ImGui::GetBackgroundDrawList()->AddRectFilled({ vecFlags.x, rectBox.Max.y }, { vecFlags.x + 3.f, rectBox.Max.y - (rectBox.GetHeight() * g) }, Cyan);

				vecFlags.x += 7.f;
			}

			if (stPlayers.bFlagInvincible && !pHealthComponent->canTakeDamage)
			{
				ImGui::OutlinedText(vecFlags, Gray, "Invuln");
				vecFlags.y += 16.f;
			}

			break;
		}
		case FNames::ResourceChunk: // Dropped resource chunks (gold, nitra, ect...)
		{
			if (!stResourceChunks.bEnabled || (iESPMaxDistance && stInfo.flDistance > iESPMaxDistance) || !IsValidObjectPtr(stInfo.pActor))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, stResourceChunks.bAccurateBox))
				break;

			if (stResourceChunks.bBox) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiResourceChunksBoxOutline, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, uiResourceChunksBox);
			}

			if (stResourceChunks.bName) {

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (stResourceChunks.bDistance)
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
			for (CG::UStruct* pStruct = static_cast<CG::UStruct*>(stInfo.pActor->Class); IsValidObjectPtr(pStruct); pStruct = pStruct->SuperField) {

				szName[pStruct->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ vecCenter.X - vecTextSize.x / 2, vecCenter.Y - 8.f }, uiDebugColor, szName);
				vecCenter.Y += vecTextSize.y + 2.f;
			}

			break;
		}}
	}
}

bool ESP::GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut, bool bAccurate = true) {

	Unreal* pUnreal = Cheat::unreal.get();

	if (bAccurate) {
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

	Cheat::config->PushEntry("ESP_ENEMIES_ENABLE", "bool", std::to_string(stEnemies.bEnabled));
	Cheat::config->PushEntry("ESP_ENEMIES_ACCURATE_BOX", "bool", std::to_string(stEnemies.bAccurateBox));
	Cheat::config->PushEntry("ESP_ENEMIES_BOX", "bool", std::to_string(stEnemies.bBox));
	Cheat::config->PushEntry("ESP_ENEMIES_NAME", "bool", std::to_string(stEnemies.bName));
	Cheat::config->PushEntry("ESP_ENEMIES_DISTANCE", "bool", std::to_string(stEnemies.bDistance));
	Cheat::config->PushEntry("ESP_ENEMIES_HEALTH_BAR", "bool", std::to_string(stEnemies.bHealthBar));
	Cheat::config->PushEntry("ESP_ENEMIES_ARMOR_BAR", "bool", std::to_string(stEnemies.bArmorBar));
	Cheat::config->PushEntry("ESP_ENEMIES_FLAG_INVINCIBLE", "bool", std::to_string(stEnemies.bFlagInvincible));
	Cheat::config->PushEntry("ESP_ENEMIES_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stEnemies.clrBox))));

	Cheat::config->PushEntry("ESP_FRIENDLIES_ENABLE", "bool", std::to_string(stFriendlies.bEnabled));
	Cheat::config->PushEntry("ESP_FRIENDLIES_ACCURATE_BOX", "bool", std::to_string(stFriendlies.bAccurateBox));
	Cheat::config->PushEntry("ESP_FRIENDLIES_BOX", "bool", std::to_string(stFriendlies.bBox));
	Cheat::config->PushEntry("ESP_FRIENDLIES_NAME", "bool", std::to_string(stFriendlies.bName));
	Cheat::config->PushEntry("ESP_FRIENDLIES_DISTANCE", "bool", std::to_string(stFriendlies.bDistance));
	Cheat::config->PushEntry("ESP_FRIENDLIES_HEALTH_BAR", "bool", std::to_string(stFriendlies.bHealthBar));
	Cheat::config->PushEntry("ESP_FRIENDLIES_ARMOR_BAR", "bool", std::to_string(stFriendlies.bArmorBar));
	Cheat::config->PushEntry("ESP_FRIENDLIES_FLAG_INVINCIBLE", "bool", std::to_string(stFriendlies.bFlagInvincible));
	Cheat::config->PushEntry("ESP_FRIENDLIES_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stFriendlies.clrBox))));

	Cheat::config->PushEntry("ESP_PLAYERS_ENABLE", "bool", std::to_string(stPlayers.bEnabled));
	Cheat::config->PushEntry("ESP_PLAYERS_ACCURATE_BOX", "bool", std::to_string(stPlayers.bAccurateBox));
	Cheat::config->PushEntry("ESP_PLAYERS_BOX", "bool", std::to_string(stPlayers.bBox));
	Cheat::config->PushEntry("ESP_PLAYERS_NAME", "bool", std::to_string(stPlayers.bName));
	Cheat::config->PushEntry("ESP_PLAYERS_DISTANCE", "bool", std::to_string(stPlayers.bDistance));
	Cheat::config->PushEntry("ESP_PLAYERS_HEALTH_BAR", "bool", std::to_string(stPlayers.bHealthBar));
	Cheat::config->PushEntry("ESP_PLAYERS_ARMOR_BAR", "bool", std::to_string(stPlayers.bArmorBar));
	Cheat::config->PushEntry("ESP_PLAYERS_FLAG_INVINCIBLE", "bool", std::to_string(stPlayers.bFlagInvincible));
	Cheat::config->PushEntry("ESP_PLAYERS_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stPlayers.clrBox))));

	Cheat::config->PushEntry("ESP_OBJECTIVES_ENABLE", "bool", std::to_string(stObjectives.bEnabled));
	Cheat::config->PushEntry("ESP_OBJECTIVES_ACCURATE_BOX", "bool", std::to_string(stObjectives.bAccurateBox));
	Cheat::config->PushEntry("ESP_OBJECTIVES_BOX", "bool", std::to_string(stObjectives.bBox));
	Cheat::config->PushEntry("ESP_OBJECTIVES_NAME", "bool", std::to_string(stObjectives.bName));
	Cheat::config->PushEntry("ESP_OBJECTIVES_DISTANCE", "bool", std::to_string(stObjectives.bDistance));
	Cheat::config->PushEntry("ESP_OBJECTIVES_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stObjectives.clrBox))));

	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_ENABLE", "bool", std::to_string(stSpecialStructures.bEnabled));
	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_ACCURATE_BOX", "bool", std::to_string(stSpecialStructures.bAccurateBox));
	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_BOX", "bool", std::to_string(stSpecialStructures.bBox));
	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_NAME", "bool", std::to_string(stSpecialStructures.bName));
	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_DISTANCE", "bool", std::to_string(stSpecialStructures.bDistance));
	Cheat::config->PushEntry("ESP_SPECIAL_STRUCTURES_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stSpecialStructures.clrBox))));

	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_ENABLE", "bool", std::to_string(stResourceChunks.bEnabled));
	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_ACCURATE_BOX", "bool", std::to_string(stResourceChunks.bAccurateBox));
	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_BOX", "bool", std::to_string(stResourceChunks.bBox));
	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_NAME", "bool", std::to_string(stResourceChunks.bName));
	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_DISTANCE", "bool", std::to_string(stResourceChunks.bDistance));
	Cheat::config->PushEntry("ESP_RESOURCE_CHUNKS_BOX_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(stResourceChunks.clrBox))));

	Cheat::config->PushEntry("ESP_MAX_DISTANCE", "int", std::to_string(iESPMaxDistance));
	Cheat::config->PushEntry("ESP_DEBUG_COLOR", "int", std::to_string(ImGui::ColorConvertFloat4ToU32(*reinterpret_cast<ImVec4*>(clrDebug))));
}

void ESP::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("ESP_ENABLED");
	if (entry.Name == "ESP_ENABLED")
		bEnabled = std::stoi(entry.Value);



	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_ENABLE");
	if (entry.Name == "ESP_ENEMIES_ENABLE")
		stEnemies.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_ACCURATE_BOX");
	if (entry.Name == "ESP_ENEMIES_ACCURATE_BOX")
		stEnemies.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_BOX");
	if (entry.Name == "ESP_ENEMIES_BOX")
		stEnemies.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_NAME");
	if (entry.Name == "ESP_ENEMIES_NAME")
		stEnemies.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_DISTANCE");
	if (entry.Name == "ESP_ENEMIES_DISTANCE")
		stEnemies.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_HEALTH_BAR");
	if (entry.Name == "ESP_ENEMIES_HEALTH_BAR")
		stEnemies.bHealthBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_ARMOR_BAR");
	if (entry.Name == "ESP_ENEMIES_ARMOR_BAR")
		stEnemies.bArmorBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_FLAG_INVINCIBLE");
	if (entry.Name == "ESP_ENEMIES_FLAG_INVINCIBLE")
		stEnemies.bFlagInvincible = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_ENEMIES_BOX_COLOR");
	if (entry.Name == "ESP_ENEMIES_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stEnemies.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stEnemies.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_ENABLE");
	if (entry.Name == "ESP_FRIENDLIES_ENABLE")
		stFriendlies.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_ACCURATE_BOX");
	if (entry.Name == "ESP_FRIENDLIES_ACCURATE_BOX")
		stFriendlies.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_BOX");
	if (entry.Name == "ESP_FRIENDLIES_BOX")
		stFriendlies.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_NAME");
	if (entry.Name == "ESP_FRIENDLIES_NAME")
		stFriendlies.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_DISTANCE");
	if (entry.Name == "ESP_FRIENDLIES_DISTANCE")
		stFriendlies.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_HEALTH_BAR");
	if (entry.Name == "ESP_FRIENDLIES_HEALTH_BAR")
		stFriendlies.bHealthBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_ARMOR_BAR");
	if (entry.Name == "ESP_FRIENDLIES_ARMOR_BAR")
		stFriendlies.bArmorBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_FLAG_INVINCIBLE");
	if (entry.Name == "ESP_FRIENDLIES_FLAG_INVINCIBLE")
		stFriendlies.bFlagInvincible = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_FRIENDLIES_BOX_COLOR");
	if (entry.Name == "ESP_FRIENDLIES_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stFriendlies.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stFriendlies.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_ENABLE");
	if (entry.Name == "ESP_PLAYERS_ENABLE")
		stPlayers.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_ACCURATE_BOX");
	if (entry.Name == "ESP_PLAYERS_ACCURATE_BOX")
		stPlayers.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_BOX");
	if (entry.Name == "ESP_PLAYERS_BOX")
		stPlayers.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_NAME");
	if (entry.Name == "ESP_PLAYERS_NAME")
		stPlayers.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_DISTANCE");
	if (entry.Name == "ESP_PLAYERS_DISTANCE")
		stPlayers.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_HEALTH_BAR");
	if (entry.Name == "ESP_PLAYERS_HEALTH_BAR")
		stPlayers.bHealthBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_ARMOR_BAR");
	if (entry.Name == "ESP_PLAYERS_ARMOR_BAR")
		stPlayers.bArmorBar = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_FLAG_INVINCIBLE");
	if (entry.Name == "ESP_PLAYERS_FLAG_INVINCIBLE")
		stPlayers.bFlagInvincible = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_PLAYERS_BOX_COLOR");
	if (entry.Name == "ESP_PLAYERS_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stPlayers.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stPlayers.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_ENABLE");
	if (entry.Name == "ESP_OBJECTIVES_ENABLE")
		stObjectives.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_ACCURATE_BOX");
	if (entry.Name == "ESP_OBJECTIVES_ACCURATE_BOX")
		stObjectives.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_BOX");
	if (entry.Name == "ESP_OBJECTIVES_BOX")
		stObjectives.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_NAME");
	if (entry.Name == "ESP_OBJECTIVES_NAME")
		stObjectives.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_DISTANCE");
	if (entry.Name == "ESP_OBJECTIVES_DISTANCE")
		stObjectives.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_OBJECTIVES_BOX_COLOR");
	if (entry.Name == "ESP_OBJECTIVES_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stObjectives.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stObjectives.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_ENABLE");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_ENABLE")
		stSpecialStructures.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_ACCURATE_BOX");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_ACCURATE_BOX")
		stSpecialStructures.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_BOX");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_BOX")
		stSpecialStructures.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_NAME");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_NAME")
		stSpecialStructures.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_DISTANCE");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_DISTANCE")
		stSpecialStructures.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_SPECIAL_STRUCTURES_BOX_COLOR");
	if (entry.Name == "ESP_SPECIAL_STRUCTURES_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stSpecialStructures.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stSpecialStructures.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_ENABLE");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_ENABLE")
		stResourceChunks.bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_ACCURATE_BOX");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_ACCURATE_BOX")
		stResourceChunks.bAccurateBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_BOX");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_BOX")
		stResourceChunks.bBox = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_NAME");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_NAME")
		stResourceChunks.bName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_DISTANCE");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_DISTANCE")
		stResourceChunks.bDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_RESOURCE_CHUNKS_BOX_COLOR");
	if (entry.Name == "ESP_RESOURCE_CHUNKS_BOX_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&stResourceChunks.clrBox[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&stResourceChunks.clrBox[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}



	entry = Cheat::config->GetEntryByName("ESP_MAX_DISTANCE");
	if (entry.Name == "ESP_MAX_DISTANCE")
		iESPMaxDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_DEBUG_COLOR");
	if (entry.Name == "ESP_DEBUG_COLOR") {
		ImVec4 clrTmp = ImGui::ColorConvertU32ToFloat4(std::stoul(entry.Value));
		*reinterpret_cast<uint64_t*>(&clrDebug[0]) = *reinterpret_cast<uint64_t*>(&clrTmp.x);
		*reinterpret_cast<uint64_t*>(&clrDebug[2]) = *reinterpret_cast<uint64_t*>(&clrTmp.z);
	}

}