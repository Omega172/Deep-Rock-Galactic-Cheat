#include "pch.h"

PlayerModifications::PlayerModifications() {};

bool PlayerModifications::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "GODMODE", "Godmode"))
		return false;

	if (!Cheat::localization->SetLocale("ENG"))
	{
		Utils::LogError(Utils::GetLocation(CurrentLoc), "Failed to update locale ENG");
		return false;
	}

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