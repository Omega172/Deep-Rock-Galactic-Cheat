#include "pch.h"

WeaponModifications::WeaponModifications() {};

bool WeaponModifications::Setup()
{
#define FNAME_INITIALIZATION_MACRO(n) DRG::n = CG::FName(#n)
	FNAME_INITIALIZATION_MACRO(WPN_AssaultRifle_C);
	FNAME_INITIALIZATION_MACRO(WPN_Autocannon_C);
	FNAME_INITIALIZATION_MACRO(WPN_BurstPistol_C);
	FNAME_INITIALIZATION_MACRO(WPN_ChargeBlaster_C);
	FNAME_INITIALIZATION_MACRO(WPN_CoilGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_CombatShotgun_C);
	FNAME_INITIALIZATION_MACRO(WPN_Crossbow_C);
	FNAME_INITIALIZATION_MACRO(WPN_Cryospray_C);
	FNAME_INITIALIZATION_MACRO(WPN_DetPack_Detonator_C);
	FNAME_INITIALIZATION_MACRO(WPN_DetPack_Detonator_Driller_C);
	FNAME_INITIALIZATION_MACRO(WPN_DoubleDrills_C);
	FNAME_INITIALIZATION_MACRO(WPN_DualMPs_C);
	FNAME_INITIALIZATION_MACRO(WPN_FlameThrower_C);
	FNAME_INITIALIZATION_MACRO(WPN_FlareGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_FuelLine_Builder_C);
	FNAME_INITIALIZATION_MACRO(WPN_Gatling_C);
	FNAME_INITIALIZATION_MACRO(WPN_GrapplingGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_GrenadeLauncher_C);
	FNAME_INITIALIZATION_MACRO(WPN_HeavyParticleCannon_C);
	FNAME_INITIALIZATION_MACRO(WPN_LineCutter_C);
	FNAME_INITIALIZATION_MACRO(WPN_LockOnRifle_C);
	FNAME_INITIALIZATION_MACRO(WPN_M1000_C);
	FNAME_INITIALIZATION_MACRO(WPN_MicroMissileLauncher_C);
	FNAME_INITIALIZATION_MACRO(WPN_MicrowaveGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_Pickaxe_Driller_C);
	FNAME_INITIALIZATION_MACRO(WPN_Pickaxe_Engineer_C);
	FNAME_INITIALIZATION_MACRO(WPN_Pickaxe_Gunner_C);
	FNAME_INITIALIZATION_MACRO(WPN_Pickaxe_Scout_C);
	FNAME_INITIALIZATION_MACRO(WPN_Pistol_A_C);
	FNAME_INITIALIZATION_MACRO(WPN_PlasmaCarbine_C);
	FNAME_INITIALIZATION_MACRO(WPN_PlatformGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_RecallableSentryGun_C);
	FNAME_INITIALIZATION_MACRO(WPN_Revolver_C);
	FNAME_INITIALIZATION_MACRO(WPN_SawedOffShotgun_C);
	FNAME_INITIALIZATION_MACRO(WPN_ShieldRegeneratorItem_C);
	FNAME_INITIALIZATION_MACRO(WPN_SMG_OneHand_C);
	FNAME_INITIALIZATION_MACRO(WPN_ZipLineGun_C);
#undef FNAME_INITIALIZATION_MACRO

	std::vector<LocaleData> EnglishData = {
		{ HASH("INFINITE_AMMO"), "Infinite Ammo" },
		{ HASH("NO_OVERHEATING"), "No Overheating" },
		{ HASH("NO_RELOAD"), "No Reload" },
		{ HASH("NO_RECOIL"), "No Recoil" },
		{ HASH("GRAPPLE_RESTRICTIONS"), "No Grapple Restrictions" },
		{ HASH("GRAPPLE_MAX_SPEED"), "Speed" }
	};
	Cheat::localization->AddToLocale("ENG", EnglishData);

	std::vector<LocaleData> GermanData = {
		{ HASH("INFINITE_AMMO"), "Unbegrenzte Munition" },
		{ HASH("NO_OVERHEATING"), "Keine Überhitzung" },
		{ HASH("NO_RELOAD"), "Kein Nachladen" },
		{ HASH("NO_RECOIL"), "Kein Rückstoss" },
		{ HASH("GRAPPLE_RESTRICTIONS"), u8"Keine Grappling-Einschränkungen" },
		{ HASH("GRAPPLE_MAX_SPEED"), "Geschwindigkeit" }
	};
	Cheat::localization->AddToLocale("GER", GermanData);

	Cheat::localization->UpdateLocale();

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

	ImGui::BeginChild("WeaponModifications", ImVec2(ImGui::GetContentRegionAvail().x / 3, ImGui::GetContentRegionAvail().y), ImGuiChildFlags_Border);
	{
		ImGui::Checkbox(Cheat::localization->Get("INFINITE_AMMO").c_str(), &bInfiniteAmmo);
		ImGui::Checkbox(Cheat::localization->Get("NO_OVERHEATING").c_str(), &bNoOverheating);
		ImGui::Checkbox(Cheat::localization->Get("NO_RELOAD").c_str(), &bNoReload);
		ImGui::Checkbox(Cheat::localization->Get("NO_RECOIL").c_str(), &bNoRecoil);

		ImGui::Checkbox(Cheat::localization->Get("GRAPPLE_RESTRICTIONS").c_str(), &bNoGrappleRestrictions);
		
		if (bNoGrappleRestrictions)
			ImGui::SliderFloat(Cheat::localization->Get("GRAPPLE_MAX_SPEED").c_str(), &fGrappleMaxSpeed, 50.f, 500.f);
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

	CG::UInventoryComponent* pInventoryComponent = pDRGPlayer->InventoryComponent;
	if (!pInventoryComponent || !IsValidObjectPtr(pInventoryComponent))
		return;

	CG::UInventoryList* pInventoryList = pInventoryComponent->InventoryList;
	if (!pInventoryList || !IsValidObjectPtr(pInventoryList))
		return;

	CG::AItem* pItem = pDRGPlayer->GetEquippedItem();
	if (!IsValidObjectPtr(pItem))
		return;

	CG::UItemID* pItemID = pItem->ItemID;
	if (!IsValidObjectPtr(pItemID))
		return;

	if (!IsValidObjectPtr(pItemID->GetItemData())) // Important we check this, will stop us from resupplying the "pipeline" LOL
		return;

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

	if (pItem->Name.ComparisonIndex == DRG::WPN_Pickaxe_Driller_C.ComparisonIndex ||
		pItem->Name.ComparisonIndex == DRG::WPN_Pickaxe_Engineer_C.ComparisonIndex ||
		pItem->Name.ComparisonIndex == DRG::WPN_Pickaxe_Gunner_C.ComparisonIndex ||
		pItem->Name.ComparisonIndex == DRG::WPN_Pickaxe_Scout_C.ComparisonIndex)
	{

		CG::AWPN_Pickaxe_C* pPickaxe = static_cast<CG::AWPN_Pickaxe_C*>(pItem);
		if (!IsValidObjectPtr(pPickaxe))
			return;

		pPickaxe->DamageRange = (true) ? 999999.f : 200.f;
		pPickaxe->SpecialCooldownRemaining = 0.f;

		return;
	}

	if (pItem->Name.ComparisonIndex == DRG::WPN_SawedOffShotgun_C.ComparisonIndex) {
		CG::AWPN_SawedOffShotgun_C* pShotgun = static_cast<CG::AWPN_SawedOffShotgun_C*>(pItem);
		if (!IsValidObjectPtr(pShotgun))
			return;

		pShotgun->ShotgunJumpEnabled = true;

	}


	if (bInfiniteAmmo)
		pItem->Resupply(100.f);

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

	CG::UWeaponFireComponent* pWeaponFire = pWeapon->WeaponFire;
	if (!IsValidObjectPtr(pWeaponFire))
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