#include "pch.h"
#include "InfiniteAmmo.h"

void InfiniteAmmo::Run()
{
	if (!Initalized)
		return;

	if (!bInfiniteAmmo)
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

	auto pWeapon = static_cast<CG::AAmmoDrivenWeapon*>(pItem);
	if (pWeapon && !pWeapon->IsClipFull())
	{
		pWeapon->InstantlyReload();
		pWeapon->Client_RefillAmmo(100.f);
	}
}