#include "pch.h"

WeaponModifications::WeaponModifications() {};

bool WeaponModifications::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "INFINITE_AMMO", "Infinite Ammo"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "NO_OVERHEATING", "No Overheating"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "NO_RELOAD", "No Reload"))
		return false;

	if (!Cheat::localization->AddToLocale("ENG", "NO_RECOIL", "No Recoil"))
		return false;

	if (!Cheat::localization->SetLocale("ENG"))
	{
		Utils::LogError(Utils::GetLocation(CurrentLoc), "Failed to update locale ENG");
		return false;
	}

	Initialized = true;
	return Initialized;
}

void WeaponModifications::Destroy() {
	Initialized = false;
}

void WeaponModifications::HandleKeys() {}

void WeaponModifications::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("WeaponModifications", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y / 2), ImGuiChildFlags_Border);
	{
		ImGui::Checkbox(Cheat::localization->Get("INFINITE_AMMO").c_str(), &bInfiniteAmmo);
		ImGui::Checkbox(Cheat::localization->Get("NO_OVERHEATING").c_str(), &bNoOverheating);
		ImGui::Checkbox(Cheat::localization->Get("NO_RELOAD").c_str(), &bNoReload);
		ImGui::Checkbox(Cheat::localization->Get("NO_RECOIL").c_str(), &bNoRecoil);
	}
	ImGui::EndChild();
}

void WeaponModifications::Render() {}

void WeaponModifications::Run() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	CG::ULocalPlayer* pLocalPlayer = pUnreal->GetLocalPlayer();
	if (!IsValidObjectPtr(pLocalPlayer))
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;


	CG::AItem* pItem = pDRGPlayer->GetEquippedItem();
	if (!IsValidObjectPtr(pItem))
		return;

	if (bInfiniteAmmo)
		pItem->Resupply(100.f);

	pItem->ManualCooldownDelay = bNoOverheating ? 0.f : 1.f;

	CG::UItemID* pItemID = pItem->ItemID;
	if (!IsValidObjectPtr(pItemID))
		return;

	CG::EItemCategory iCategory = pItemID->GetItemCategory();
	std::cout << static_cast<int>(iCategory) << "\n";
	switch (iCategory) {
	default:
		break;

	case CG::EItemCategory::PrimaryWeapon:
	case CG::EItemCategory::SecondaryWeapon:
		CG::AAmmoDrivenWeapon* pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
		if (!IsValidObjectPtr(pWeapon))
			break;

		pWeapon->HasAutomaticFire = true;
		if (bNoReload && !pWeapon->IsClipFull())
			pWeapon->InstantlyReload();

		if (bNoRecoil) {
			pWeapon->RecoilSettings.RecoilPitch.Max = 0.f;
			pWeapon->RecoilSettings.RecoilPitch.Min = 0.f;
			pWeapon->RecoilSettings.RecoilYaw.Max = 0.f;
			pWeapon->RecoilSettings.RecoilYaw.Min = 0.f;
			pWeapon->RecoilSettings.RecoilRoll.Max = 0.f;
			pWeapon->RecoilSettings.RecoilRoll.Min = 0.f;
			pWeapon->RecoilSettings.Mass = 0.f;

			pWeapon->RecoilSettings.SpringStiffness = 0.f;
			pWeapon->RecoilSettings.CriticalDampening = 0.f;
		}

	}

	/*
	
	PrimaryWeapon   = 0,
	SecondaryWeapon = 1,
	TraversalTool   = 2,
	ClassTool       = 3,
	Grenade         = 4,
	Flare           = 5,
	MiningTool      = 6,
	Armor           = 7,
	MAX             = 8
	
	UInventoryList
	*/
}

void WeaponModifications::SaveConfig() { 
	Cheat::config->PushEntry("INFINITE_AMMO", "bool", std::to_string(bInfiniteAmmo)); 
	Cheat::config->PushEntry("NO_OVERHEATING", "bool", std::to_string(bNoOverheating));
	Cheat::config->PushEntry("NO_RELOAD", "bool", std::to_string(bNoReload));
	Cheat::config->PushEntry("NO_RECOIL", "bool", std::to_string(bNoRecoil));
}

void WeaponModifications::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("INFINITE_AMMO");
	if (entry.Name == "INFINITE_AMMO")
		bInfiniteAmmo = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("NO_OVERHEATING");
	if (entry.Name == "NO_OVERHEATING")
		bNoOverheating = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("NO_RELOAD");
	if (entry.Name == "NO_RELOAD")
		bNoReload = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("NO_RECOIL");
	if (entry.Name == "NO_RECOIL")
		bNoRecoil = std::stoi(entry.Value);
}