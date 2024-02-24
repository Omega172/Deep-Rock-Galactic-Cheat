#include "pch.h"

WeaponModifications::WeaponModifications() {};

bool WeaponModifications::Setup()
{
	std::vector<LocaleData> EnglishData = {
		{ HASH("INFINITE_AMMO"), "Infinite Ammo" },
		{ HASH("NO_OVERHEATING"), "No Overheating" },
		{ HASH("NO_RELOAD"), "No Reload" },
		{ HASH("NO_RECOIL"), "No Recoil" },
		{ HASH("GRAPPLE_RESTRICTIONS"), "No Grapple Restrictions" },
		{ HASH("GRAPPLE_MAX_SPEED"), "Speed" }
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishData))
		return false;

	std::vector<LocaleData> GermanData = {
		{ HASH("INFINITE_AMMO"), "Unbegrenzte Munition" },
		{ HASH("NO_OVERHEATING"), "Keine Überhitzung" },
		{ HASH("NO_RELOAD"), "Kein Nachladen" },
		{ HASH("NO_RECOIL"), "Kein Rückstoss" },
		{ HASH("GRAPPLE_RESTRICTIONS"), u8"Keine Grappling-Einschränkungen" },
		{ HASH("GRAPPLE_MAX_SPEED"), "Geschwindigkeit" }
	};
	if (!Cheat::localization->AddToLocale("GER", GermanData))
		return false;

	std::vector<LocaleData> PolishData = {
		{ HASH("INFINITE_AMMO"), "Nieskończona Amunicja" },
		{ HASH("NO_OVERHEATING"), "Brak Przegrzania" },
		{ HASH("NO_RELOAD"), "Brak Przeładowania" },
		{ HASH("NO_RECOIL"), "Brak Odrzutu" },
		{ HASH("GRAPPLE_RESTRICTIONS"), u8"Brak Restrykcji Przyciagania" },
		{ HASH("GRAPPLE_MAX_SPEED"), "Maksymalna Predkość Przyciagania" }
	};
	if (!Cheat::localization->AddToLocale("POL", PolishData))
		return false;

	Cheat::localization->UpdateLocale();

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: PlayerModifications Initialized");

	Initialized = true;
	return Initialized;
}

void WeaponModifications::Destroy() {
	Initialized = false;
}

void WeaponModifications::HandleKeys() {}

void WeaponModifications::PopulateMenu()
{
	if (!Initialized)
		return;

	Child* WeaponModifications = new Child("WeaponModifications", []() { return ImVec2(ImGui::GetContentRegionAvail().x / 3, ImGui::GetContentRegionAvail().y); }, ImGuiChildFlags_Border);
	WeaponModifications->AddElement(new Checkbox(Cheat::localization->Get("INFINITE_AMMO"), &bInfiniteAmmo));
	WeaponModifications->AddElement(new Checkbox(Cheat::localization->Get("NO_OVERHEATING"), &bNoOverheating));
	WeaponModifications->AddElement(new Checkbox(Cheat::localization->Get("NO_RELOAD"), &bNoReload));
	WeaponModifications->AddElement(new Checkbox(Cheat::localization->Get("NO_RECOIL"), &bNoRecoil));

	WeaponModifications->AddElement(new Checkbox(Cheat::localization->Get("GRAPPLE_RESTRICTIONS"), &bNoGrappleRestrictions));
	if (bNoGrappleRestrictions)
		WeaponModifications->AddElement(new SliderFloat(Cheat::localization->Get("GRAPPLE_MAX_SPEED"), &fGrappleMaxSpeed, 50.f, 500.f));

	Cheat::menu->AddElement(WeaponModifications);
}

void WeaponModifications::Render() {}

void WeaponModifications::Run() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::ULocalPlayer* pLocalPlayer = pUnreal->GetLocalPlayer();
	if (!pLocalPlayer)
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::UInventoryComponent* pInventoryComponent = pDRGPlayer->InventoryComponent;
	if (!IsValidObjectPtr(pInventoryComponent) || !pInventoryComponent->bItemsLoaded)
		return;

	CG::AItem* pItem = pDRGPlayer->GetEquippedItem();
	if (!IsValidObjectPtr(pItem))
		return;

	CG::UItemID* pItemID = pItem->ItemID;
	if (!IsValidObjectPtr(pItemID))
		return;

	if (!IsValidObjectPtr(pItemID->GetItemData())) // Important we check this, will stop us from resupplying the "pipeline" LOL
		return;

	if (bInfiniteAmmo) {
		pInventoryComponent->FlareProductionTimeLeft = 0.f;
		pInventoryComponent->FlareCooldownRemaining = 0.f;
		pInventoryComponent->Resupply(100.f);
	}

	CG::APickaxeItem* pPickaxe = pInventoryComponent->MiningItem;
	if (IsValidObjectPtr(pPickaxe)) {
		pPickaxe->DamageRange = (true) ? 999999.f : 200.f;

		if (bInfiniteAmmo)
			pPickaxe->SpecialCooldownRemaining = 0.f;
	}

	/*
	if (pItem->Name.ComparisonIndex == DRG::WPN_GrapplingGun_C.ComparisonIndex) {
		CG::AWPN_GrapplingGun_C* pGrapplingGun = static_cast<CG::AWPN_GrapplingGun_C*>(pItem);
		if (!IsValidObjectPtr(pGrapplingGun))
			return;

		if (!bNoGrappleRestrictions) {
			pGrapplingGun->MaxSpeed = 2250.f;
			return;
		}

		pGrapplingGun->MaxSpeed = 22.50f * fGrappleMaxSpeed;
		pGrapplingGun->MaxDistance = 9999999.f;

		CG::UCoolDownItemAggregator* pCoolDown = pGrapplingGun->CoolDownAggregator;
		if (IsValidObjectPtr(pCoolDown))
			pCoolDown->CooldownRemaining = 0.f;

		return;
	}

	if (pItem->Name.ComparisonIndex == DRG::WPN_SawedOffShotgun_C.ComparisonIndex) {
		CG::AWPN_SawedOffShotgun_C* pShotgun = static_cast<CG::AWPN_SawedOffShotgun_C*>(pItem);
		if (!IsValidObjectPtr(pShotgun))
			return;

		pShotgun->ShotgunJumpEnabled = true;
	}

	if (bNoOverheating) {
		pItem->ManualCooldownDelay = 0.f;
		pItem->CooldownRate = 99999.f;
	}
	else {
		pItem->ManualCooldownDelay = 1.f;
	}

	if (!pItem->IsA(CG::AAmmoDrivenWeapon::StaticClass()))
		return;	

	CG::AAmmoDrivenWeapon* pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
	if (!IsValidObjectPtr(pWeapon))
		return;

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
	*/
}

void WeaponModifications::SaveConfig() { 
	Cheat::config->PushEntry("INFINITE_AMMO", "bool", std::to_string(bInfiniteAmmo)); 
	Cheat::config->PushEntry("NO_OVERHEATING", "bool", std::to_string(bNoOverheating));
	Cheat::config->PushEntry("NO_RELOAD", "bool", std::to_string(bNoReload));
	Cheat::config->PushEntry("NO_RECOIL", "bool", std::to_string(bNoRecoil));

	Cheat::config->PushEntry("GRAPPLE_RESTRICTIONS", "bool", std::to_string(bNoGrappleRestrictions));
	Cheat::config->PushEntry("GRAPPLE_MAX_SPEED", "float", std::to_string(fGrappleMaxSpeed));
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

	entry = Cheat::config->GetEntryByName("GRAPPLE_RESTRICTIONS");
	if (entry.Name == "GRAPPLE_RESTRICTIONS")
		bNoGrappleRestrictions = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("GRAPPLE_MAX_SPEED");
	if (entry.Name == "GRAPPLE_MAX_SPEED")
		fGrappleMaxSpeed = std::stoi(entry.Value);
}