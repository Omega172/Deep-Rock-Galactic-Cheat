#include "pch.h"

Aimbot::Aimbot() {};

bool Aimbot::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT", "Aimbot"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_KEY", "Aim Key"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_FOV", "FOV"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "AIMBOT_SMOOTH", "Smoothing"))
		return false;

	if (!Cheat::localization->SetLocale("ENG"))
	{
		Utils::LogError(Utils::GetLocation(CurrentLoc), "Failed to update locale ENG");
		return false;
	}

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
			ImGui::Text(Cheat::localization->Get("AIMBOT_KEY").c_str());
			ImGui::Hotkey("#AimbotKey", AimbotKey, &bSetAimbotKey);

			ImGui::SliderFloat(Cheat::localization->Get("AIMBOT_FOV").c_str(), &fAimbotFOV, 0.0f, 180.0f);
			ImGui::SliderFloat(Cheat::localization->Get("AIMBOT_SMOOTH").c_str(), &fAimbotSmooth, 0.001f, 1.0f);
		}
	}
	ImGui::EndChild();
}

void Aimbot::Render()
{
	if (!bEnabled)
		return;
}

bool Aimbot::ActorChecks(CG::AEnemyDeepPathfinderCharacter* Actor)
{
	auto PlayerController = Cheat::unreal->GetPlayerController();
	if (!PlayerController)
		return false;

	CG::FRotator CameraRotation = PlayerController->GetControlRotation();

	CG::APlayerCameraManager* CameraManager = Cheat::unreal->GetPlayerCameraManager();
	if (!CameraManager)
		return false;

	CG::FVector CameraLocation = CameraManager->GetCameraLocation();

	if (!Actor)
		return false;

	CG::UHealthComponentBase* HealthComponent = Actor->GetHealthComponent();
	if (!HealthComponent)
		return false;

	if (HealthComponent->IsDead())
		return false;

	CG::USkeletalMeshComponent* Mesh = Actor->Mesh;
	if (!Mesh)
		return false;

	CG::FVector HeadPos = Mesh->GetSocketLocation(Mesh->GetBoneName(13));
	CG::FVector2D Screen = Cheat::unreal->W2S(HeadPos);
	if (Screen.IsValid())
		return false;

	bool bIsOccluded = false;
	CG::FHitResult HitResult;
	bool Trace = Cheat::unreal->GetSystemLibrary()->LineTraceSingle((*CG::UWorld::GWorld),
		CameraLocation, HeadPos, CG::ETraceTypeQuery::TraceTypeQuery1,
		true, {}, CG::EDrawDebugTrace::ForDuration, &HitResult, true,
		{ 1.f, 1.f, 1.f, 1.f }, { 1.f, 0.f, 0.f, 1.f }, 300.f);
	if (Trace)
	{
		auto Actor = HitResult.Actor.Get();
		if (Actor != nullptr)
			bIsOccluded = true;
	}

	if (bIsOccluded)
		return false;

	CG::FRotator AimAngles = Cheat::unreal->GetMathLibrary()->FindLookAtRotation(CameraLocation, HeadPos);
	CG::FRotator Delta = AimAngles - CameraRotation;
	auto FOV = Delta.Clamp().Size();

	if (fAimbotFOV <= FOV)
		return false;

	return true;
}

void Aimbot::Run()
{
	if (!bEnabled)
		return;

	auto PlayerController = Cheat::unreal->GetPlayerController();
	if (!PlayerController)
		return;

	CG::FRotator CameraRotation = PlayerController->GetControlRotation();

	CG::APlayerCameraManager* CameraManager = Cheat::unreal->GetPlayerCameraManager();
	if (!CameraManager)
		return;

	CG::FVector CameraLocation = CameraManager->GetCameraLocation();

	std::vector<CG::AEnemyDeepPathfinderCharacter*> UnsortedActors = Cheat::unreal->GetActors<CG::AEnemyDeepPathfinderCharacter>();
	std::vector<CG::AEnemyDeepPathfinderCharacter*> Actors = Cheat::unreal->SortActorsByDistance<CG::AEnemyDeepPathfinderCharacter*>(UnsortedActors);

	for (CG::AEnemyDeepPathfinderCharacter* Actor : Actors)
	{
		if (!Actor)
			continue;

		if (!ActorChecks(Actor))
			continue;

		Target = Actor;
	}
	if (Target == nullptr)
		return;

	if (!ActorChecks(Target))
		return;

	CG::USkeletalMeshComponent* Mesh = Target->Mesh;
	if (!Mesh)
		return;

	CG::FVector HeadPos = Mesh->GetSocketLocation(Mesh->GetBoneName(13));

	CG::FRotator AimAngles = Cheat::unreal->GetMathLibrary()->FindLookAtRotation(CameraLocation, HeadPos);
	CG::FRotator Delta = (AimAngles - CameraRotation);

	if (AimbotKey.IsDown())
		PlayerController->SetControlRotation(CameraRotation + (Delta * fAimbotSmooth));
}

void Aimbot::SaveConfig()
{
	Cheat::config->PushEntry("AIMBOT_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("AIMBOT_KEY", "int", std::to_string(AimbotKey.key));
	Cheat::config->PushEntry("AIMBOT_FOV", "float", std::to_string(fAimbotFOV));
	Cheat::config->PushEntry("AIMBOT_SMOOTH", "float", std::to_string(fAimbotSmooth));
}

void Aimbot::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("AIMBOT_ENABLED");
	if (entry.Name == "AIMBOT_ENABLED")
		bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("AIMBOT_KEY");
	if (entry.Name == "AIMBOT_KEY")
		AimbotKey.key = static_cast<ImGuiKey>(std::stoi(entry.Value));

	entry = Cheat::config->GetEntryByName("AIMBOT_FOV");
	if (entry.Name == "AIMBOT_FOV")
		fAimbotFOV = std::stof(entry.Value);

	entry = Cheat::config->GetEntryByName("AIMBOT_SMOOTH");
	if (entry.Name == "AIMBOT_SMOOTH")
		fAimbotSmooth = std::stof(entry.Value);
}