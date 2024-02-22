#include "pch.h"

Aimbot::Aimbot() {};

bool Aimbot::Setup()
{
	std::vector<LocaleData> EnglishData = {
		{ HASH("AIMBOT"), "Aimbot" },
		{ HASH("AIMBOT_AUTO_FIRE"), "Auto Fire" },
		{ HASH("AIMBOT_KEY"), "Aim Key" },
		{ HASH("MAGIC_BULLET"), "Magic Bullet" },
		{ HASH("MULTI_TARGET"), "Multi-Target" },
		{ HASH("AIMBOT_FOV"), "FOV" }
	};
	Cheat::localization->AddToLocale("ENG", EnglishData);

	std::vector<LocaleData> GermanData = {
		{ HASH("AIMBOT"), "Zielbot" },
		{ HASH("AIMBOT_AUTO_FIRE"), "Automatisches Feuer" },
		{ HASH("AIMBOT_KEY"), u8"Zielbot-Schlüssel" },
		{ HASH("AIMBOT_FOV"), "Sichtfeld" }
	};
	Cheat::localization->AddToLocale("GER", GermanData);

	Cheat::localization->UpdateLocale();

	Initialized = true;
	return Initialized;
}

void Aimbot::Destroy() { Initialized = false; }

void Aimbot::HandleKeys() {}

void Aimbot::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("ExampleFeature", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y), ImGuiChildFlags_Border);
	{
		ImGui::Text(Cheat::localization->Get("AIMBOT").c_str());

		ImGui::Checkbox(Cheat::localization->Get("AIMBOT").c_str(), &bEnabled);
		if (bEnabled)
		{
			ImGui::Checkbox(Cheat::localization->Get("AIMBOT_AUTO_FIRE").c_str(), &bAutoFire);

			if (!bAutoFire) {
				ImGui::Text(Cheat::localization->Get("AIMBOT_KEY").c_str());
				ImGui::Hotkey("#AimbotKey", keyAimbot, &bSetKeyAimbot);
			}

			ImGui::Checkbox(Cheat::localization->Get("MAGIC_BULLET").c_str(), &bMagicBullet);
			ImGui::Checkbox(Cheat::localization->Get("MULTI_TARGET").c_str(), &bMultiTarget);
			ImGui::SliderFloat(Cheat::localization->Get("AIMBOT_FOV").c_str(), &flAimFOV, 0.0f, 180.0f);
		}
	}
	ImGui::EndChild();
}

void Aimbot::Render()
{
	if (!bEnabled)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::APlayerCameraManager* pCameraManager = pUnreal->GetPlayerCameraManager();
	if (!pCameraManager)
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::AItem* pItem = pDRGPlayer->GetEquippedItem();
	if (!IsValidObjectPtr(pItem))
		return;

	CG::AAmmoDrivenWeapon* pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
	if (!IsValidObjectPtr(pWeapon) || !pItem->IsA(CG::AAmmoDrivenWeapon::StaticClass()))
		return;

	CG::UWeaponFireComponent* pWeaponFire = pWeapon->WeaponFire;
	if (!IsValidObjectPtr(pWeaponFire))
		return;
	
	CG::FVector vecCameraLocation = pCameraManager->GetCameraLocation();

	if (!bAutoFire && !keyAimbot.IsDown())
		return;

	Mutex.lock();
	for (CG::AEnemyPawn* pActor : apEnemyPawns) {
		if (!IsValidObjectPtr(pActor) || pActor->InternalIndex <= 0 || pActor->Name.ComparisonIndex <= 0)
			continue;

		CG::UEnemyHealthComponent* pHealthComponent = pActor->Health;
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead() || !pHealthComponent->canTakeDamage)
			continue;

		CG::FVector vecAimLocation, vecExtent;
		pActor->GetActorBounds(true, &vecAimLocation, &vecExtent, false);

		pWeaponFire->Fire(
			bMagicBullet ? vecAimLocation : vecCameraLocation,
			CG::FVector_NetQuantizeNormal((vecAimLocation - vecCameraLocation).Unit()),
			true);

		if (!bMultiTarget)
			return;
	}

	for (CG::AEnemyDeepPathfinderCharacter* pActor : apEnemyPathFinders) {
		if (!IsValidObjectPtr(pActor) || pActor->InternalIndex <= 0 || pActor->Name.ComparisonIndex <= 0)
			continue;

		CG::UEnemyHealthComponent* pHealthComponent = pActor->HealthComponent;
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
			continue;

		CG::USkeletalMeshComponent* pMesh = pActor->Mesh;
		if (!IsValidObjectPtr(pMesh))
			continue;

		CG::FVector vecHeadLocation = pMesh->GetSocketLocation(pMesh->GetBoneName(13));
		pWeaponFire->Fire(
			bMagicBullet ? vecHeadLocation : vecCameraLocation,
			CG::FVector_NetQuantizeNormal((vecHeadLocation - vecCameraLocation).Unit()),
			true);

		if (!bMultiTarget)
			return;
	}
	Mutex.unlock();
}

void Aimbot::Run() 
{

	apEnemyPawns.clear();
	apEnemyPathFinders.clear();

	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	
	CG::APlayerController* pPlayerController = pUnreal->GetPlayerController();
	CG::APlayerCameraManager* pCameraManager = pUnreal->GetPlayerCameraManager();
	if (!pPlayerController || !pCameraManager)
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::AItem* pItem = pDRGPlayer->GetEquippedItem();
	if (!IsValidObjectPtr(pItem))
		return;

	CG::AAmmoDrivenWeapon* pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
	if (!IsValidObjectPtr(pWeapon) || !pItem->IsA(CG::AAmmoDrivenWeapon::StaticClass()))
		return;

	CG::UWeaponFireComponent* pWeaponFire = pWeapon->WeaponFire;
	if (!IsValidObjectPtr(pWeaponFire))
		return;

	CG::UKismetMathLibrary* pMathLibrary = Cheat::unreal->GetMathLibrary();
	CG::UKismetSystemLibrary* pSystemLibrary = Cheat::unreal->GetSystemLibrary();
	CG::FVector vecCameraLocation = pCameraManager->GetCameraLocation();
	CG::FRotator rotCameraRotation = pPlayerController->GetControlRotation();
	float flAimFOV_copy = flAimFOV;
	bool bMagicBullet_copy = bMagicBullet;

	std::vector<CG::AEnemyPawn*> apUnsortedEnemyPawns = pUnreal->GetActors<CG::AEnemyPawn>();
	std::vector<CG::AEnemyDeepPathfinderCharacter*> apUnsortedEnemyPathFinders = pUnreal->GetActors<CG::AEnemyDeepPathfinderCharacter>();

	Mutex.lock();
	apEnemyPawns = pUnreal->SortActorsByDistance<CG::AEnemyPawn*>(apUnsortedEnemyPawns);
	apEnemyPawns.erase(std::remove_if(apEnemyPawns.begin(), apEnemyPawns.end(), [pMathLibrary, pSystemLibrary, vecCameraLocation, rotCameraRotation, flAimFOV_copy, bMagicBullet_copy](CG::AEnemyPawn* pActor)
		{
			if (!IsValidObjectPtr(pActor) || pActor->InternalIndex <= 0 || pActor->Name.ComparisonIndex <= 0)
				return true;

			CG::UEnemyHealthComponent* pHealthComponent = pActor->Health;
			if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead() || !pHealthComponent->canTakeDamage)
				return true;

			if (pActor->GetAttitude() <= CG::EPawnAttitude::Neutral)
				return true;

			CG::FVector vecAimLocation, vecExtent;
			pActor->GetActorBounds(true, &vecAimLocation, &vecExtent, false);

			CG::FRotator rotGoalRotation = pMathLibrary->FindLookAtRotation(vecCameraLocation, vecAimLocation);
			if (flAimFOV_copy <= (rotGoalRotation - rotCameraRotation).Clamp().Size())
				return true;

			if (!bMagicBullet_copy) {
				CG::FHitResult hrResult{};
				if (pSystemLibrary->LineTraceSingle(
					(*CG::UWorld::GWorld),
					vecCameraLocation,
					vecAimLocation,
					CG::ETraceTypeQuery::TraceTypeQuery1,
					true, {},
					CG::EDrawDebugTrace::ForDuration,
					&hrResult, true,
					{ 1.f, 1.f, 1.f, 1.f },
					{ 1.f, 0.f, 0.f, 1.f },
					300.f
				)) {
					// Vischeck, will be a valid object ptr if we hit a wall :|
					CG::AActor* pHitActor = hrResult.Actor.Get();
					if (IsValidObjectPtr(pHitActor))
						return true;
				}
			}

			return false;
		}), apEnemyPawns.end());


	apEnemyPathFinders = pUnreal->SortActorsByDistance<CG::AEnemyDeepPathfinderCharacter*>(apUnsortedEnemyPathFinders);
	apEnemyPathFinders.erase(std::remove_if(apEnemyPathFinders.begin(), apEnemyPathFinders.end(), [pMathLibrary, pSystemLibrary, vecCameraLocation, rotCameraRotation, flAimFOV_copy, bMagicBullet_copy](CG::AEnemyDeepPathfinderCharacter* pActor)
		{
			if (!IsValidObjectPtr(pActor) || pActor->InternalIndex <= 0 || pActor->Name.ComparisonIndex <= 0)
				return true;

			CG::UEnemyHealthComponent* pHealthComponent = pActor->HealthComponent;
			if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead() || !pHealthComponent->canTakeDamage)
				return true;

			static CG::FName Flea("ENE_Flea_C");
			if (pActor->GetAttitude() <= CG::EPawnAttitude::Neutral && pActor->Class->Name.ComparisonIndex != Flea.ComparisonIndex)
				return true;

			CG::USkeletalMeshComponent* pMesh = pActor->Mesh;
			if (!IsValidObjectPtr(pMesh)) {
				return true;
			}

			CG::FVector vecHeadLocation = pMesh->GetSocketLocation(pMesh->GetBoneName(13));

			CG::FRotator rotGoalRotation = pMathLibrary->FindLookAtRotation(vecCameraLocation, vecHeadLocation);
			if (flAimFOV_copy <= (rotGoalRotation - rotCameraRotation).Clamp().Size())
				return true;

			if (!bMagicBullet_copy) {
				CG::FHitResult hrResult{};
				if (pSystemLibrary->LineTraceSingle(
					(*CG::UWorld::GWorld),
					vecCameraLocation,
					vecHeadLocation,
					CG::ETraceTypeQuery::TraceTypeQuery1,
					true, {},
					CG::EDrawDebugTrace::ForDuration,
					&hrResult, true,
					{ 1.f, 1.f, 1.f, 1.f },
					{ 1.f, 0.f, 0.f, 1.f },
					300.f
				)) {
					// Vischeck, will be a valid object ptr if we hit a wall :|
					CG::AActor* pHitActor = hrResult.Actor.Get();
					if (IsValidObjectPtr(pHitActor))
						return true;
				}
			}

			return false;
		}), apEnemyPathFinders.end());
	Mutex.unlock();
}

void Aimbot::SaveConfig()
{
	Cheat::config->PushEntry("AIMBOT_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("AIMBOT_AUTO_FIRE", "bool", std::to_string(bAutoFire));
	Cheat::config->PushEntry("AIMBOT_KEY", "int", std::to_string(keyAimbot.key));
	Cheat::config->PushEntry("MAGIC_BULLET", "bool", std::to_string(bMagicBullet));
	Cheat::config->PushEntry("MULTI_TARGET", "bool", std::to_string(bMultiTarget));
	Cheat::config->PushEntry("AIMBOT_FOV", "float", std::to_string(flAimFOV));
}

void Aimbot::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("AIMBOT_ENABLED");
	if (entry.Name == "AIMBOT_ENABLED")
		bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("AIMBOT_AUTO_FIRE");
	if (entry.Name == "AIMBOT_AUTO_FIRE")
		bAutoFire = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("AIMBOT_KEY");
	if (entry.Name == "AIMBOT_KEY")
		keyAimbot.key = static_cast<ImGuiKey>(std::stoi(entry.Value));

	entry = Cheat::config->GetEntryByName("MAGIC_BULLET");
	if (entry.Name == "MAGIC_BULLET")
		bMagicBullet = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("MULTI_TARGET");
	if (entry.Name == "MULTI_TARGET")
		bMultiTarget = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("AIMBOT_FOV");
	if (entry.Name == "AIMBOT_FOV")
		flAimFOV = std::stof(entry.Value);
}