#pragma once
#include "pch.h"

class Unreal
{
public:
	CG::AEnemyDeepPathfinderCharacter* TargetEnt = nullptr;

	CG::UKismetMathLibrary* GetMathLibrary() { return (CG::UKismetMathLibrary*)CG::UKismetMathLibrary::StaticClass(); }
	CG::UKismetSystemLibrary* GetSystemLibrary() { return (CG::UKismetSystemLibrary*)CG::UKismetSystemLibrary::StaticClass(); }

	CG::AGameStateBase* GetGameStateBase()
	{
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		return (*CG::UWorld::GWorld)->GameState;
	}
	CG::UGameInstance* GetGameInstance()
	{ 
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		return (*CG::UWorld::GWorld)->OwningGameInstance;
	}

	CG::ULocalPlayer* GetLocalPlayer(int index)
	{ 
		CG::UGameInstance* GameInstance = GetGameInstance();
		if (!GetGameInstance())
			return nullptr;

		return GameInstance->LocalPlayers[index];
	}
	CG::UGameViewportClient* GetViewportClient()
	{ 
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer(0);
		if (!LocalPlayer)
			return nullptr;

		return LocalPlayer->ViewportClient;
	}
	CG::APlayerController* GetPlayerController()
	{
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer(0);
		if (!LocalPlayer)
			return nullptr;

		return LocalPlayer->PlayerController;
	}
	CG::APawn* GetAcknowledgedPawn()
	{
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return nullptr;

		return PlayerController->AcknowledgedPawn;
	}
	CG::ABP_PlayerCharacter_C* GetDRGPlayer() { return (CG::ABP_PlayerCharacter_C*)GetAcknowledgedPawn(); }

	CG::APlayerCameraManager* GetPlayerCameraManager()
	{
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return nullptr;

		return PlayerController->PlayerCameraManager;
	}
};