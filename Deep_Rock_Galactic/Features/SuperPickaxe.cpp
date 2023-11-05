#include "pch.h"
#include "SuperPickaxe.h"

void SuperPickaxe::Run()
{
	if (!Initalized)
		return;

	if (!bSuperPickaxe)
		return;

	std::unique_ptr<Unreal>::pointer pUnreal = unreal.get();
	
	std::vector<CG::UTerrainMaterial*> pTerrainObjects = pUnreal->GetAllTerrainObjects();

	for (CG::UTerrainMaterial* ent : pTerrainObjects)
	{
		ent->PickAxeDigSize = fDigSize;
		ent->HitsNeededToMine = iHitsNeeded;
	}

	CG::ABP_PlayerCharacter_C* DRGPlayer = pUnreal->GetDRGPlayer();
	if (!DRGPlayer)
		return;

	if (!Utils::IsReadableMemory(DRGPlayer, sizeof(DRGPlayer)))
		return;

	CG::UInventoryComponent* pInventoryComponent = DRGPlayer->InventoryComponent;
	if (!pInventoryComponent)
		return;

	if (!Utils::IsReadableMemory(pInventoryComponent, sizeof(pInventoryComponent)))
		return;

	CG::APickaxeItem* pMinngItem = pInventoryComponent->MiningItem;
	if (!pMinngItem)
		return;

	if (!Utils::IsReadableMemory(pMinngItem, sizeof(pMinngItem)))
		return;

	pMinngItem->State = CG::EPickaxeState::PowerAttack;
	pMinngItem->RockMiningBonus = 5;
	pMinngItem->DirtMiningBonus = 5;
	pMinngItem->HitCooldown = 0.f;
	pMinngItem->SpecialCooldown = 0.f;
}