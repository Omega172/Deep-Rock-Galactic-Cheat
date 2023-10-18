#include "pch.h"
#include "GodMode.h"

void GodMode::Run()
{
	if (!Initalized)
		return;

	auto pUnreal = unreal.get();

	auto DRGPlayer = pUnreal->GetDRGPlayer();

	if (!Utils::IsReadableMemory(DRGPlayer, sizeof(DRGPlayer)))
		return;

	CG::UPlayerHealthComponent* HealthComponent = DRGPlayer->HealthComponent;
	if (!HealthComponent)
		return;

	if (!Utils::IsReadableMemory(HealthComponent, sizeof(HealthComponent)))
		return;

	if (bGodMode && HealthComponent->canTakeDamage)
	{
		HealthComponent->canTakeDamage = false;
		bOnce = false;
	}

	if (!bGodMode && !bOnce)
	{
		HealthComponent->canTakeDamage = true;
		bOnce = true;
	}
}