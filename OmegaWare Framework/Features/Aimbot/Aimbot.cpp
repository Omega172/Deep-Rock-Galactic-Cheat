#include "pch.h"

Aimbot::Aimbot() {};

bool Aimbot::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT", "Aimbot"))
		return false;

	if (!Cheat::localization->AddToLocale("GER", "AIMBOT", "Zielbot"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_AUTO_FIRE", "Auto Fire"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_KEY", "Aim Key"))
		return false;

	if (!Cheat::localization->AddToLocale("GER", "AIMBOT_KEY", "Zielbot-Schlüssel"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_FOV", "FOV"))
		return false;

	if (!Cheat::localization->AddToLocale("GER", "AIMBOT_FOV", "Sichtfeld"))
		return false;

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
	if (!IsValidObjectPtr(pUnreal))
		return;

	CG::APlayerController* pPlayerController = pUnreal->GetPlayerController();
	if (!IsValidObjectPtr(pPlayerController))
		return;

	CG::APlayerCameraManager* pCameraManager = Cheat::unreal->GetPlayerCameraManager();
	if (!IsValidObjectPtr(pCameraManager))
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

	vecCameraLocation = pCameraManager->GetCameraLocation();
	rotCameraRotation = pPlayerController->GetControlRotation();

	if (pTarget == nullptr) {
		return;
	}

	if (!ActorChecks(pTarget)) {
		return;
	}

	CG::USkeletalMeshComponent* pMesh = pTarget->Mesh;
	if (!IsValidObjectPtr(pMesh))
		return;

	CG::FVector vecHeadLocation = pMesh->GetSocketLocation(pMesh->GetBoneName(13));

	CG::FVector vecDirection = (vecHeadLocation - vecCameraLocation).Unit();


	if (bAutoFire || keyAimbot.IsDown()) {
		pWeaponFire->Fire(pDRGPlayer->K2_GetActorLocation(), CG::FVector_NetQuantizeNormal(vecDirection), true);
		bWasFiring = true;
	}
}

bool Aimbot::ActorChecks(CG::AEnemyDeepPathfinderCharacter* pActor)
{
	if (!IsValidObjectPtr(pActor) || pActor->InternalIndex <= 0 || pActor->Name.ComparisonIndex <= 0)
		return false;

	CG::UHealthComponentBase* pHealthComponent = pActor->HealthComponent;
	if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
		return false;

	if (pActor->GetAttitude() == CG::EPawnAttitude::Friendly)
		return false;

	CG::USkeletalMeshComponent* pMesh = pActor->Mesh;
	if (!IsValidObjectPtr(pMesh))
		return false;

	CG::FVector vecHeadLocation = pMesh->GetSocketLocation(pMesh->GetBoneName(13));

	CG::FHitResult hrResult;
	if (Cheat::unreal->GetSystemLibrary()->LineTraceSingle(
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

		// Voodoo magic
		CG::AActor* pHitActor = hrResult.Actor.Get();
		if (IsValidObjectPtr(pHitActor))
			return false;
	}

	CG::FRotator rotGoalRotation = Cheat::unreal->GetMathLibrary()->FindLookAtRotation(vecCameraLocation, vecHeadLocation);
	float flTargetFOV = (rotGoalRotation - rotCameraRotation).Clamp().Size();

	return flAimFOV > flTargetFOV;
}

void Aimbot::Run()
{
	if (!bEnabled)
		return;

	std::vector<CG::AEnemyDeepPathfinderCharacter*> apUnsortedActors = Cheat::unreal->GetActors<CG::AEnemyDeepPathfinderCharacter>();
	std::vector<CG::AEnemyDeepPathfinderCharacter*> apActors = Cheat::unreal->SortActorsByDistance<CG::AEnemyDeepPathfinderCharacter*>(apUnsortedActors);

	for (CG::AEnemyDeepPathfinderCharacter* pActor : apActors)
	{
		if (!IsValidObjectPtr(pActor))
			continue;

		if (!ActorChecks(pActor))
			continue;

		pTarget = pActor;
	}
}

void Aimbot::SaveConfig()
{
	Cheat::config->PushEntry("AIMBOT_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("AIMBOT_AUTO_FIRE", "bool", std::to_string(bAutoFire));
	Cheat::config->PushEntry("AIMBOT_KEY", "int", std::to_string(keyAimbot.key));
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

	entry = Cheat::config->GetEntryByName("AIMBOT_FOV");
	if (entry.Name == "AIMBOT_FOV")
		flAimFOV = std::stof(entry.Value);
}