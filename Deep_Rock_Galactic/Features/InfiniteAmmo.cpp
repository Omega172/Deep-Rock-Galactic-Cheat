#include "pch.h"
#include "InfiniteAmmo.h"

void InfiniteAmmo::Run()
{
	if (!Initalized)
		return;

	if (!bInfiniteAmmo && !bNoRecoil)
		return;

	auto pUnreal = unreal.get();
	auto LocalPlayer = pUnreal->GetLocalPlayer(0);
	if (!LocalPlayer)
		return;

	auto DRGPlayer = pUnreal->GetDRGPlayer();
	if (!DRGPlayer)
		return;

	if (!Utils::IsReadableMemory(DRGPlayer, sizeof(DRGPlayer)))
		return;
	
	CG::AItem* pItem = DRGPlayer->GetEquippedItem();
	if (!pItem)
		return;

	if (!pItem->IsA(CG::AAmmoDrivenWeapon::StaticClass()))
		return;

	CG::AAmmoDrivenWeapon* pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
	if (bInfiniteAmmo && pWeapon && !pWeapon->IsClipFull())
	{
		pWeapon->InstantlyReload();
		pWeapon->Client_RefillAmmo(100.f);
	}

	if (bNoRecoil && pWeapon)
	{
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