#pragma once
#include "pch.h"

class Unreal
{
public:
	inline static CG::AEnemyDeepPathfinderCharacter* TargetEnt = nullptr;

	static CG::UKismetMathLibrary* GetMathLibrary() { return (CG::UKismetMathLibrary*)CG::UKismetMathLibrary::StaticClass(); }
	static CG::UKismetSystemLibrary* GetSystemLibrary() { return (CG::UKismetSystemLibrary*)CG::UKismetSystemLibrary::StaticClass(); }

	static CG::AGameStateBase* GetGameStateBase()
	{
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		return (*CG::UWorld::GWorld)->GameState;
	}
	static CG::UGameInstance* GetGameInstance()
	{ 
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		return (*CG::UWorld::GWorld)->OwningGameInstance;
	}

	static CG::ULocalPlayer* GetLocalPlayer(int index)
	{ 
		CG::UGameInstance* GameInstance = GetGameInstance();
		if (!GameInstance)
			return nullptr;

		return GameInstance->LocalPlayers[index];
	}
	static CG::UGameViewportClient* GetViewportClient()
	{ 
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer(0);
		if (!LocalPlayer)
			return nullptr;

		return LocalPlayer->ViewportClient;
	}
	static CG::APlayerController* GetPlayerController()
	{
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer(0);
		if (!LocalPlayer)
			return nullptr;

		return LocalPlayer->PlayerController;
	}
	static CG::APawn* GetAcknowledgedPawn()
	{
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return nullptr;

		return PlayerController->AcknowledgedPawn;
	}
	static CG::ABP_PlayerCharacter_C* GetDRGPlayer() { return (CG::ABP_PlayerCharacter_C*)GetAcknowledgedPawn(); }

	static CG::APlayerCameraManager* GetPlayerCameraManager()
	{
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return nullptr;

		return PlayerController->PlayerCameraManager;
	}

	static std::vector<CG::UTerrainMaterial*> GetAllTerrainObjects()
	{
		std::vector<CG::UTerrainMaterial*> result;

		auto objects = CG::UObject::FindObjects<CG::UTerrainMaterial>();
		for (auto ent : objects)
		{
			if (!ent)
				continue;

			result.push_back(ent);
		}

		return result;
	}
};