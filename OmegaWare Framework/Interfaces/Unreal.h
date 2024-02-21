#pragma once
#include "pch.h"
#if FRAMEWORK_UNREAL // Not sure if this is needed but it's here anyway

namespace DRG
{
	inline CG::FName WPN_AssaultRifle_C;
	inline CG::FName WPN_Autocannon_C;
	inline CG::FName WPN_BurstPistol_C;
	inline CG::FName WPN_ChargeBlaster_C;
	inline CG::FName WPN_CoilGun_C;
	inline CG::FName WPN_CombatShotgun_C;
	inline CG::FName WPN_Crossbow_C;
	inline CG::FName WPN_Cryospray_C;
	inline CG::FName WPN_DetPack_Detonator_C;
	inline CG::FName WPN_DetPack_Detonator_Driller_C;
	inline CG::FName WPN_DoubleDrills_C;
	inline CG::FName WPN_DualMPs_C;
	inline CG::FName WPN_FlameThrower_C;
	inline CG::FName WPN_FlareGun_C;
	inline CG::FName WPN_FuelLine_Builder_C;
	inline CG::FName WPN_Gatling_C;
	inline CG::FName WPN_GooCannon_C;
	inline CG::FName WPN_GrapplingGun_C;
	inline CG::FName WPN_GrenadeLauncher_C;
	inline CG::FName WPN_HeavyParticleCannon_C;
	inline CG::FName WPN_LaserPointer_C;
	inline CG::FName WPN_LineCutter_C;
	inline CG::FName WPN_LockOnRifle_C;
	inline CG::FName WPN_M1000_C;
	inline CG::FName WPN_MicroMissileLauncher_C;
	inline CG::FName WPN_MicrowaveGun_C;
	inline CG::FName WPN_Pickaxe_Driller_C;
	inline CG::FName WPN_Pickaxe_Engineer_C;
	inline CG::FName WPN_Pickaxe_Gunner_C;
	inline CG::FName WPN_Pickaxe_Scout_C;
	inline CG::FName WPN_Pistol_A_C;
	inline CG::FName WPN_PlasmaCarbine_C;
	inline CG::FName WPN_PlatformGun_C;
	inline CG::FName WPN_RecallableSentryGun_C;
	inline CG::FName WPN_Revolver_C;
	inline CG::FName WPN_SawedOffShotgun_C;
	inline CG::FName WPN_ShieldRegeneratorItem_C;
	inline CG::FName WPN_SMG_OneHand_C;
	inline CG::FName WPN_ZipLineGun_C;
}

class Unreal
{
public:
	// A vector to store all the actors in the game which is refreshed every frame
	// I should probably not update in the GUI thread but I'm not sure where to put it yet, maybe in the main loop?
	std::vector<CG::AActor*> Actors;

	// Shortcut functions to get pointers to important classes used for many things
	static CG::UKismetMathLibrary* GetMathLibrary() { return reinterpret_cast<CG::UKismetMathLibrary*>(CG::UKismetMathLibrary::StaticClass()); }
	static CG::UKismetSystemLibrary* GetSystemLibrary() { return reinterpret_cast<CG::UKismetSystemLibrary*>(CG::UKismetSystemLibrary::StaticClass()); }
	static CG::UGameplayStatics* GetGameplayStatics() { return reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass()); }
	static CG::UKismetStringLibrary* GetStringLibrary() { return reinterpret_cast<CG::UKismetStringLibrary*>(CG::UKismetStringLibrary::StaticClass()); }

	inline void RefreshActorList() // A function to refresh the actor list
	{
		if (CG::UWorld::GWorld == nullptr)
			return;

		if (!(*CG::UWorld::GWorld))
			return;
		
		Actors.clear();

		for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
		{
			CG::ULevel* Level = (**CG::UWorld::GWorld).Levels[i];

			if (!Level)
				continue;

			if (!Level->NearActors.Data() || !Level->NearActors.Count())
				continue;

			for (int j = 0; j < Level->NearActors.Count(); j++)
			{
				CG::AActor* Actor = Level->NearActors[j];
				if (!Actor)
					continue;

				Actors.push_back(Actor);
			}
		}
	}

	template <typename T>
	inline std::vector<T*> GetActors() // A function to get all the actors of a certain type can be useful for things like ESP where you only want to draw for certain actor types
	{
		std::vector<T*> actors;

		if (!IsValidObjectPtr(*CG::UWorld::GWorld))
			return actors;

		if (!IsValidObjectPtr((*CG::UWorld::GWorld)->GameState))
			return actors;

		if ((*CG::UWorld::GWorld)->GameState->ReplicatedWorldTimeSeconds <= 5)
			return actors;

		CG::ULocalPlayer* pLocalPlayer = GetLocalPlayer();
		if (!IsValidObjectPtr(pLocalPlayer))
			return actors;

		for (CG::AActor* actor : Actors)
		{
			// I'm not sure if these are the best way to check if the actor is valid but it works for me
			if (!IsValidObjectPtr(actor) || !actor->bCanBeDamaged)
				continue;

			CG::UClass* pClass = T::StaticClass();

			if (actor->IsA(pClass)) // Check if the actor is of the type we want
				actors.push_back(reinterpret_cast<T*>(actor)); // If it is add it to the vector
		}

		return actors; // Return the vector
	}

	// These functions are to make getting pointers to important classes and objects easier and cleaner
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

	static CG::ULocalPlayer* GetLocalPlayer(int index = 0)
	{
		CG::UGameInstance* GameInstance = GetGameInstance();
		if (!GameInstance)
			return nullptr;

		return GameInstance->LocalPlayers[index];
	}
	static CG::UGameViewportClient* GetViewportClient()
	{
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer();
		if (!LocalPlayer)
			return nullptr;

		return LocalPlayer->ViewportClient;
	}
	static CG::APlayerController* GetPlayerController()
	{
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer();
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

	static CG::APlayerCameraManager* GetPlayerCameraManager()
	{
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return nullptr;

		return PlayerController->PlayerCameraManager;
	}

	// I made this function so I would have to type less to get the screen position of a world position
	static CG::FVector2D W2S(CG::FVector in, bool relitive = false)
	{
		CG::FVector2D out = { 0, 0 };
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!PlayerController)
			return out;

		PlayerController->ProjectWorldLocationToScreen(in, &out, false);

		return out;
	}

	static bool IsActorValid(CG::AActor* actor)
	{
		if (!actor || !actor->bCanBeDamaged)
			return false;

		if (!Utils::IsReadableMemory(actor, sizeof(actor)))
			return false;

		return true;
	}

	// Completely untested at the moment but I think it should work
	template <typename T>
	static std::vector<T> SortActorsByDistance(std::vector<T> actors)
	{
		std::vector<T> SortedActors = actors;

		// Remove invalid actors
		SortedActors.erase(std::remove_if(SortedActors.begin(), SortedActors.end(), [](T Actor)
		{
			return !IsActorValid(Actor);
		}), SortedActors.end());

		std::sort(SortedActors.begin(), SortedActors.end(), [](T ActorA, T ActorB)
		{
			CG::APlayerController* PlayerController = GetPlayerController();
			if (!PlayerController)
				return false;

			CG::APawn* Pawn = PlayerController->AcknowledgedPawn;
			if (!Pawn)
				return false;

			CG::FVector ActorALocation = ActorA->K2_GetActorLocation();
			CG::FVector ActorBLocation = ActorB->K2_GetActorLocation();
			CG::FVector PawnLocation = Pawn->K2_GetActorLocation();

			float ActorADistance = ActorALocation.DistanceMeter(PawnLocation);
			float ActorBDistance = ActorBLocation.DistanceMeter(PawnLocation);

			return ActorADistance < ActorBDistance;
		});

		return SortedActors;
	}
};
#endif