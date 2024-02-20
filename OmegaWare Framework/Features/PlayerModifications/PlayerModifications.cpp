#include "pch.h"

PlayerModifications::PlayerModifications() {};

bool PlayerModifications::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "GODMODE", "Godmode"))
		return false;

	Cheat::localization->UpdateLocale();

	Initialized = true;
	return Initialized;
}

void PlayerModifications::Destroy() {
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

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	pDRGPlayer->RunningSpeed = 99999.f; //435.f
	//pDRGPlayer->CarryingMovementSpeedPenalty = 0.f;

	struct CG::FVector_NetQuantizeNormal vecUpwards {};

	vecUpwards.X = 0.f;
	vecUpwards.Y = 0.f;
	vecUpwards.Z = 1.f;

	if (pDRGPlayer->IsJumpPressed())
		pDRGPlayer->Client_AddImpulse(vecUpwards, 200.f);
	
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

void PlayerModifications::SaveConfig() { Cheat::config->PushEntry("GODMODE", "bool", std::to_string(bGodMode)); }

void PlayerModifications::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("GODMODE");
	if (entry.Name == "GODMODE")
		bGodMode = std::stoi(entry.Value);
}