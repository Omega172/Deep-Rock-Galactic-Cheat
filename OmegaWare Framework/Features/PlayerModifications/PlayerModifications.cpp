#include "pch.h"

PlayerModifications::PlayerModifications() {};

bool PlayerModifications::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "GODMODE", "Godmode"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "RUNNING_SPEED", "Run Speed"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "FLY_HACK", "Fly Hack"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "FLY_FORCE", "Force"))
		return false;

	Cheat::localization->UpdateLocale();

	Initialized = true;
	return Initialized;
}

void PlayerModifications::Destroy() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	if (flDefaultRunningSpeed > 0.f) 
		pDRGPlayer->RunningSpeed = flDefaultRunningSpeed;

	Initialized = false;
}

void PlayerModifications::HandleKeys() {}

void PlayerModifications::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("GODMODE", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y / 2), ImGuiChildFlags_Border);
	{
		ImGui::Checkbox(Cheat::localization->Get("GODMODE").c_str(), &bGodMode);

		ImGui::SliderFloat(Cheat::localization->Get("RUNNING_SPEED").c_str(), &flRunningSpeed, 1.f, 10.f);

		ImGui::Checkbox(Cheat::localization->Get("FLY_HACK").c_str(), &bFlyHack);

		if (bFlyHack)
			ImGui::SliderFloat(Cheat::localization->Get("FLY_FORCE").c_str(), &flFlyForce, 1.f, 10.f);
	}
	ImGui::EndChild();
}

void PlayerModifications::Render() {}

void PlayerModifications::Run() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	CG::AGameStateBase* pGameState = pUnreal->GetGameStateBase();
	if (!IsValidObjectPtr(pGameState))
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::ABP_PlayerController_C* pPlayerController = static_cast<CG::ABP_PlayerController_C*>(pUnreal->GetPlayerController());
	if (!IsValidObjectPtr(pPlayerController))
		return;
	

	if (pDRGPlayer->RunningSpeed != flLastRunningSpeed)
		flDefaultRunningSpeed = pDRGPlayer->RunningSpeed;

	pDRGPlayer->RunningSpeed = flLastRunningSpeed = flDefaultRunningSpeed * flRunningSpeed;

	if (pDRGPlayer->IsJumpPressed() && !pDRGPlayer->CanJump() && bFlyHack)
		pDRGPlayer->Client_AddImpulse(CG::FVector_NetQuantizeNormal(CG::FVector(0.f, 0.f, 1.f)), flFlyForce);

	CG::UPlayerHealthComponent* pHealthComponent = pDRGPlayer->HealthComponent;
	if (!IsValidObjectPtr(pHealthComponent))
		return;

	if (bGodMode) {
		pHealthComponent->Resupply(100.f);
		pHealthComponent->HealArmor(100.f);

		if (pDRGPlayer->IsDown())
			pDRGPlayer->InstantRevive(pDRGPlayer, CG::EInputKeys::Use);
	}
}

void PlayerModifications::SaveConfig() { 
	Cheat::config->PushEntry("GODMODE", "bool", std::to_string(bGodMode)); 
	Cheat::config->PushEntry("RUNNING_SPEED", "float", std::to_string(flRunningSpeed));
	Cheat::config->PushEntry("FLY_HACK", "bool", std::to_string(bFlyHack));
	Cheat::config->PushEntry("FLY_FORCE", "float", std::to_string(flFlyForce));
}

void PlayerModifications::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("GODMODE");
	if (entry.Name == "GODMODE")
		bGodMode = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("RUNNING_SPEED");
	if (entry.Name == "RUNNING_SPEED")
		bGodMode = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("FLY_HACK");
	if (entry.Name == "FLY_HACK")
		bGodMode = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("FLY_FORCE");
	if (entry.Name == "FLY_FORCE")
		bGodMode = std::stoi(entry.Value);
}