#pragma once
#include "pch.h"
#if FRAMEWORK_UNREAL // Not sure if this is needed but it's here anyway


#define DO_X_WITH_DRG_FNAMES(x) \
	x(Invalid) \
	x(Actor) \
	x(APawn) \
	x(ACharacter) \
	x(AEQSTestingPawn) \
	x(APlayerCharacter) \
	x(ADefaultPawn) \
	x(ASpectatorPawn) \
	x(APathfinderVehicle) \
	x(APlayerCameraDrone) \
	x(AFSDPawn) \
	x(ACaretaker) \
	x(AEscortMule) \
	x(ATowerModuleBase) \
	x(AAimingTowerModule) \
	x(AGuntowerModule) \
	x(AHostileGuntowerModule) \
	x(AHostileTargetingGuntowerModule) \
	x(ALMGGuntoweModule) \
	x(AHomingFireModule) \
	x(ARandomFiringGuntowerModule) \
	x(ARadialFireModule) \
	x(AGuntowerWeakPoint) \
	x(ATowerEventModule) \
	x(AAimingTowerEventModule) \
	x(AEnemyPawn) \
	x(AStabberVineRoot) \
	x(AParasiteEnemy) \
	x(AInsectSwarmSpawner) \
	x(AHydraWeedHealer) \
	x(AShootingPlant) \
	x(AHydraWeedShooter) \
	x(AHydraWeedCore) \
	x(AFacilityTurret) \
	x(ASpinningFacilityturret) \
	x(AAimingFacilityTurret) \
	x(ATentacleBase) \
	x(AFacilityTentacle) \
	x(AStabberVine) \
	x(ATerminatorTentacle) \
	x(ACaveLeech) \
	x(AEnemyDeepPathfinderCharacter) \
	x(AAFlyingBug) \
	x(ABomber) \
	x(AFlyingLifter) \
	x(AJellyBreeder) \
	x(AConvertedRobot) \
	x(AFlyingEnemyDeepPathfinderCharacter) \
	x(AFriendlyParasite) \
	x(AHalloweenSkull) \
	x(AInsectSwarmEnemy) \
	x(APatrolBot) \
	x(APlagueWorm) \
	x(AProspectorRobot) \
	x(ASharkEnemy) \
	x(AShredder) \
	x(ASpiderEnemy) \
	x(ATerminatorEnemy) \
	x(AWoodLouse) \
	x(ABosco) \
	x(ABP_Bosco_C) \
	x(ACaveWorm) \
	x(AMaggot) \
	x(ADroneBase) \
	x(ADroneCharacter) \
	x(AMULE) \
	x(AMolly) \
	x(ABP_Donkey_C) \
	x(AMiniMule) \
	x(ARecallableActor) \
	x(ARecallableSentryGun) \
	x(WPN_AssaultRifle_C) \
	x(WPN_Autocannon_C) \
	x(WPN_BurstPistol_C) \
	x(WPN_ChargeBlaster_C) \
	x(WPN_CoilGun_C) \
	x(WPN_CombatShotgun_C) \
	x(WPN_Crossbow_C) \
	x(WPN_Cryospray_C) \
	x(WPN_DetPack_Detonator_C) \
	x(WPN_DetPack_Detonator_Driller_C) \
	x(WPN_DoubleDrills_C) \
	x(WPN_DualMPs_C) \
	x(WPN_FlameThrower_C) \
	x(WPN_FlareGun_C) \
	x(WPN_FuelLine_Builder_C) \
	x(WPN_Gatling_C) \
	x(WPN_GrapplingGun_C) \
	x(WPN_GrenadeLauncher_C) \
	x(WPN_HeavyParticleCannon_C) \
	x(WPN_LineCutter_C) \
	x(WPN_LockOnRifle_C) \
	x(WPN_M1000_C) \
	x(WPN_MicroMissileLauncher_C) \
	x(WPN_MicrowaveGun_C) \
	x(WPN_Pickaxe_Driller_C) \
	x(WPN_Pickaxe_Engineer_C) \
	x(WPN_Pickaxe_Gunner_C) \
	x(WPN_Pickaxe_Scout_C) \
	x(WPN_Pistol_A_C) \
	x(WPN_PlasmaCarbine_C) \
	x(WPN_PlatformGun_C) \
	x(WPN_RecallableSentryGun_C) \
	x(WPN_Revolver_C) \
	x(WPN_SawedOffShotgun_C) \
	x(WPN_ShieldRegeneratorItem_C) \
	x(WPN_SMG_OneHand_C) \
	x(WPN_ZipLineGun_C) \
	x(ENE_JellyBreeder_Normal_C) \
	x(ENE_Butterfly_C) \
	x(ENE_Spider_Grunt_Guard_C) \
	x(ENE_Bomber_Fire_C) \
	x(ENE_FlyingCritterBase_C) \
	x(ENE_Spider_Grunt_Guard_Radioactive_C) \
	x(ENE_Spider_Spitter_C) \
	x(ENE_FacilityTurret_Spinning_C) \
	x(ENE_Spider_ExploderTank_Ghost_C) \
	x(ENE_Spider_Grunt_Guard_Ice_C) \
	x(ENE_FacilityTurret_Burst_C) \
	x(ENE_Spider_Drone_C) \
	x(ENE_Spider_Shooter_Ground_C) \
	x(ENE_Spider_Grunt_Normal_C) \
	x(ENE_Spider_Exploding_C) \
	x(ENE_Spider_Tank_Amber_C) \
	x(ENE_HydraWeed_Core_C) \
	x(ENE_JellyBreeder_Base_C) \
	x(ENE_Spider_Amber_Shooter_C) \
	x(ENE_Spider_Tank_Ice_C) \
	x(ENE_Jelly_Passive_C) \
	x(ENE_Spider_Boss_TwinA_C) \
	x(ENE_ShootingPlant_Small_C) \
	x(ENE_Jelly_Swarmer_C) \
	x(ENE_Prospector_C) \
	x(ENE_FacilityTentacle_End_C) \
	x(ENE_Spider_Tank_Rock_C) \
	x(ENE_Spider_ExploderTank_King_C) \
	x(ENE_Harvester_C) \
	x(ENE_Spider_Exploding_Rockpox_Plague_C) \
	x(ENE_Bomber_Rockpox_Plague_C) \
	x(ENE_Spider_ShieldTank_C) \
	x(ENE_FacilityTurret_Sniper_C) \
	x(ENE_Spider_Shooter_C) \
	x(ENE_Spider_Swarmer_Radioactive_C) \
	x(ENE_Spider_RapidShooter_Elite_C) \
	x(ENE_Bomber_Child_C) \
	x(ENE_Spider_Charger_C) \
	x(ENE_Spider_Swarmer_Pheromoned_C) \
	x(ENE_PlagueLarva_C) \
	x(ENE_Jelly_Swarmer_Child_C) \
	x(ENE_Jelly_Spawn_Child_C) \
	x(ENE_FacilityTentacle_Burrowing_C) \
	x(ENE_SpiderSpawner_C) \
	x(ENE_Spider_Shooter_Normal_Elite_C) \
	x(ENE_Spider_Exploding_Warning_Radioactive_C) \
	x(ENE_Spider_Tank_Radioactive_C) \
	x(ENE_Grabber_C) \
	x(ENE_Spider_Boss_HeavySpawn_C) \
	x(ENE_BoughWasp_Nest_Medium2_C) \
	x(ENE_Spider_Grunt_Attacker_Ice_C) \
	x(ENE_Shredder_C) \
	x(ENE_Spider_RapidShooter_C) \
	x(ENE_Spider_Tank_Generic_C) \
	x(ENE_Spider_Tank_Normal_C) \
	x(ENE_BoughWasp_Nest_Medium_C) \
	x(ENE_Spider_Boss_Base_C) \
	x(ENE_Spider_Boss_TwinBase_C) \
	x(ENE_BoughWasp_Swarm_C) \
	x(ENE_Spider_Exploding_Radioactive_C) \
	x(ENE_LootBug_C) \
	x(ENE_Spider_Tank_Base_C) \
	x(ENE_Mactera_TripleShooter_C) \
	x(ENE_TerminatorTentacle_C) \
	x(ENE_LootBug_Gold_C) \
	x(ENE_Spider_Grunt_Rock_C) \
	x(ENE_Terminator_C) \
	x(ENE_Spider_Grunt_Attacker_Radioactive_C) \
	x(ENE_Spider_Shooter_Rockpox_Plague_C) \
	x(ENE_Spider_Boss_TwinB_C) \
	x(ENE_Spider_ExploderTank_C) \
	x(ENE_Spider_Boss_Heavy_C) \
	x(ENE_GliderBeast_C) \
	x(ENE_Flea_C) \
	x(ENE_Spider_Grunt_Attacker_C) \
	x(ENE_ElectricPlantVThree_C) \
	x(ENE_Spider_Tank_Boss_C) \
	x(ENE_Spider_Grunt_Radioactive_C) \
	x(ENE_Spider_Stinger_C) \
	x(ENE_PF_SpiderBase_C) \
	x(ENE_Spider_Spawn_C) \
	x(ENE_Maggot_Red1_C) \
	x(ENE_StabberVines2_C) \
	x(ENE_Spider_Swarmer_C) \
	x(ENE_Spider_Buffer_C) \
	x(ENE_Mactera_Shooter_Normal_C) \
	x(ENE_Spider_Swarmer_Ice_C) \
	x(ENE_ShootingPlant_C) \
	x(ENE_Parasite_C) \
	x(ENE_Mactera_Amber_C) \
	x(ENE_InsectSwarm_Spawner_C) \
	x(ENE_Woodlouse_Youngling_C) \
	x(ENE_Bomber_Ice_C) \
	x(ENE_Spider_Grunt_Base_C) \
	x(ENE_BoughWasp_Nest_Medium3_C) \
	x(ENE_Bomber_C) \
	x(ENE_Maggot_C) \
	x(ENE_SmallShootingPlant_RegenPod_C) \
	x(ENE_Shredder_Base_C) \
	x(ENE_StabberVine_Tentacle_C) \
	x(ENE_InfestationLarva_C) \
	x(ENE_Woodlouse_C) \
	x(ENE_Shark_C) \
	x(ENE_Maggot_Normal_C) \
	x(ENE_FlyingSmartRock_C) \
	x(ENE_EnemySpawner_C) \
	x(ENE_Spider_Exploding_Warning_C) \
	x(ENE_Spider_Grunt_Ice_C) \
	x(ENE_FacilityTurret_Barrier_C) \
	x(ENE_FacilityTentacle_C) \
	x(ENE_Jelly_Passive_Mother_C) \
	x(ENE_InsectSwarm_C) \
	x(ENE_Maggot_Azure_C) \
	x(ENE_Spider_Shooter_Queen_C) \
	x(ENE_JellyBreeder_RockpoxPlague_C) \
	x(ENE_WalkingPlagueheart_C) \
	x(ENE_Spider_Hoarder_C) \
	x(ENE_StabberVines_C) \
	x(ENE_Spider_Tank_RockpoxPlague_C) \
	x(ENE_FacilityCaretaker_C) \
	x(ENE_InfectedMule_C) \
	x(ENE_Mactera_Shooter_Base_C) \
	x(ENE_Maggot_HollowBough_Grub_C) \
	x(ENE_Spider_Shooter_Normal_C) \
	x(ENE_Spider_Grunt_RockpoxPlague_C) \
	x(ENE_CaveLeech_C) \
	x(ENE_FacilityTurret_Base_C) \
	x(ENE_Maggot_Green1_C) \
	x(ENE_Maggot_SplineTrail_C) \
	x(ENE_Mactera_Shooter_HeavyVeteran_C) \
	x(ENE_PlagueShark_C) \
	x(ENE_Spider_Lobber_C) \
	x(ENE_PatrolBot_C) \
	x(ENE_PatrolBot_Caretaker_C) \
	x(ENE_SpiderBase_Large_C) \
	x(ENE_BoughWasp_Nest_Small_C) \
	x(ENE_Spider_Lobber_Base_C)

#define CREATE_ENUM(n) n,
#define CREATE_CLASS_LOOKUP(n) DRG::ClassLookupEntry_t{std::string_view(#n), 0, DRG::EFNames::n},
namespace DRG
{
	enum class EFNames {
		DO_X_WITH_DRG_FNAMES(CREATE_ENUM)
	};

	typedef struct ActorInfo_t {
		CG::AActor* pActor;
		EFNames iLookupIndex;
	} PawnInfo_t;

	typedef struct ClassLookupEntry_t {
		std::string_view sName;
		int32_t ComparisonIndex;
		EFNames iLookupIndex;
	} ClassLookupEntry_t;

	inline std::vector<ClassLookupEntry_t> vecClassLookups{
		DO_X_WITH_DRG_FNAMES(CREATE_CLASS_LOOKUP)
	};
	
	inline void InitializeFNames()
	{
		Utils::LogDebug(Utils::GetLocation(CurrentLoc), (std::stringstream() << "GNames: 0x" << CG::FName::GNames).str());
		Utils::LogDebug(Utils::GetLocation(CurrentLoc), (std::stringstream() << "GNames Count: " << CG::FName::GNames->Count()).str());
		

		size_t iGNameSize = 0;

		int lastBlock = 0;
		uintptr_t nextFNameAddress = reinterpret_cast<uintptr_t>(CG::FName::GNames->Allocator.Blocks[0]);

		while (1) {

		RePlay:
			int32_t nextFNameComparisonId = MAKELONG((uint16_t)((nextFNameAddress - reinterpret_cast<uintptr_t>(CG::FName::GNames->Allocator.Blocks[lastBlock])) / 2), (uint16_t)lastBlock);
			int32_t block = nextFNameComparisonId >> 16;
			int32_t offset = (uint16_t)nextFNameComparisonId;
			int32_t offsetFromBlock = static_cast<int32_t>(nextFNameAddress - reinterpret_cast<uintptr_t>(CG::FName::GNames->Allocator.Blocks[lastBlock]));

			// Get entry information
			const uintptr_t entryOffset = nextFNameAddress;
			const int toAdd = 0x00 + 0x02; // HeaderOffset + HeaderSize

			const uint16_t* pNameHeader = reinterpret_cast<uint16_t*>(entryOffset);

			if (!IsValidObjectPtr(pNameHeader))
				break;

			const uint16_t nameHeader = *pNameHeader;
			int nameLength = nameHeader >> 6;
			bool isWide = (nameHeader & 1) != 0;
			if (isWide)
				nameLength += nameLength;

			// if odd number (odd numbers are aligned with 0x00)
			if (!isWide && nameLength % 2 != 0)
				nameLength += 1;

			// Block end ?
			if (offsetFromBlock + toAdd + (nameLength * 2) >= 0xFFFF * CG::FNameEntryAllocator::Stride || nameHeader == 0x00 || block == CG::FName::GNames->Allocator.CurrentBlock && offset >= CG::FName::GNames->Allocator.CurrentByteCursor)
			{
				nextFNameAddress = reinterpret_cast<uintptr_t>(CG::FName::GNames->Allocator.Blocks[++lastBlock]);
				goto RePlay;
			}

			std::string sName = std::string(reinterpret_cast<CG::FNameEntry*>(entryOffset)->AnsiName, nameHeader >> 6);

			bool bDidFind = false;
			for (int i = 0; i < vecClassLookups.size(); i++) {
				if (vecClassLookups[i].ComparisonIndex)
					continue;

				if (sName != vecClassLookups[i].sName)
					continue;

				vecClassLookups[i].ComparisonIndex = nextFNameComparisonId;
				Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Initalized " + sName);
				bDidFind = true;
				break;
			}

			// We hit last Name in last Block
			if (lastBlock > CG::FName::GNames->Allocator.CurrentBlock)
				break;

			// Get next name address
			nextFNameAddress = entryOffset + toAdd + nameLength;
			++iGNameSize;
		}

		for (ClassLookupEntry_t stLookupEntry : vecClassLookups) {
			if (!stLookupEntry.ComparisonIndex)
				Utils::LogError(Utils::GetLocation(CurrentLoc), "Didnt Find " + std::string(stLookupEntry.sName));
		}

		Utils::LogDebug(Utils::GetLocation(CurrentLoc), (std::stringstream() << "Resolved GNames Count: " << iGNameSize).str());
	};
}
#undef DO_X_WITH_DRG_FNAMES
#undef CREATE_ENUM
#undef CREATE_CLASS_LOOKUP

static CG::UFont* pFont;
static DWORD dwOldProtect;

typedef void(__thiscall* PostRender) (CG::UObject* pViewportClient, CG::UCanvas* pCanvas);
static PostRender oPostRender;

class Unreal
{
public:
	static void HookPostRender()
	{
		pFont = CG::UObject::FindObject<CG::UFont>("Font Roboto.Roboto");
		if (!IsValidObjectPtr(pFont))
			return;

		CG::UGameViewportClient* pViewportClient = GetViewportClient();
		if (!IsValidObjectPtr(pViewportClient))
			return;

		void** VFTable = pViewportClient->VfTable;
		VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		oPostRender = reinterpret_cast<PostRender>(VFTable[POST_RENDER_INDEX]);
		VFTable[POST_RENDER_INDEX] = &hkPostRender;
		VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, dwOldProtect, &dwOldProtect);
	}

	static void RestorePostRender()
	{
		CG::UGameViewportClient* pViewportClient = GetViewportClient();
		if (!IsValidObjectPtr(pViewportClient))
			return;

		void** VFTable = pViewportClient->VfTable;
		VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		VFTable[POST_RENDER_INDEX] = oPostRender;
		VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, dwOldProtect, &dwOldProtect);
	}

	std::vector<CG::AActor*> Actors;
	std::vector<DRG::ActorInfo_t> ActorList;
	std::mutex ActorLock;

	// Shortcut functions to get pointers to important classes used for many things
	static CG::UKismetMathLibrary* GetMathLibrary() { return reinterpret_cast<CG::UKismetMathLibrary*>(CG::UKismetMathLibrary::StaticClass()); }
	static CG::UKismetSystemLibrary* GetSystemLibrary() { return reinterpret_cast<CG::UKismetSystemLibrary*>(CG::UKismetSystemLibrary::StaticClass()); }
	static CG::UGameplayStatics* GetGameplayStatics() { return reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass()); }
	static CG::UKismetStringLibrary* GetStringLibrary() { return reinterpret_cast<CG::UKismetStringLibrary*>(CG::UKismetStringLibrary::StaticClass()); }

	inline void RefreshActorList() // A function to refresh the actor list
	{
		std::vector<CG::AActor*> lActors{};

		std::vector<CG::AActor*> lSortedActors{};
		std::vector<DRG::ActorInfo_t> lActorList{};

		CG::AGameStateBase* pGameState;
		if (CG::UWorld::GWorld == nullptr) {
			ActorLock.lock();
			Actors.clear();
			ActorList.clear();
			ActorLock.unlock();

			return;
		}

		pGameState = GetGameStateBase();
		if (!pGameState) {
			ActorLock.lock();
			Actors.clear();
			ActorList.clear();
			ActorLock.unlock();

			return;
		}

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

				bool bFailed = false;
				for (CG::AActor* pOtherActor : lActors) {
					if (pOtherActor != Actor)
						continue;

					bFailed = true;
					break;
				}

				if (!bFailed)
					lActors.push_back(Actor);
			}
		}

		lSortedActors = SortActorsByDistance<CG::AActor*>(lActors);

		for (CG::AActor* pActor : lSortedActors)
		{
			bool bFound = false;
			auto comp_index = pActor->Name.ComparisonIndex;

			for (auto entry : DRG::vecClassLookups) {
				if (comp_index == entry.ComparisonIndex) {
					bFound = true;
					lActorList.push_back(DRG::ActorInfo_t(pActor, entry.iLookupIndex));
					break;
				}
			}

			if (bFound)
				continue;

			lActorList.push_back(DRG::ActorInfo_t(pActor, DRG::EFNames::Invalid));
		}

		ActorLock.lock();

		Actors.clear();
		for (CG::AActor* v : lActors)
			Actors.push_back(v);

		ActorList.clear();
		for (auto v : lActorList)
			ActorList.push_back(v);

		ActorLock.unlock();
	}

	template <typename T>
	inline std::vector<T*> GetActors() // A function to get all the actors of a certain type can be useful for things like ESP where you only want to draw for certain actor types
	{
		std::vector<T*> actors;

		CG::AGameStateBase* pGameState = GetGameStateBase();
		CG::UClass* pComparisonClass = T::StaticClass();
		if (!IsValidObjectPtr(pComparisonClass) || !pGameState || pGameState->ReplicatedWorldTimeSeconds <= 5.f)
			return actors;

		for (CG::AActor* pActor : Actors)
		{
			if (!IsValidObjectPtr(reinterpret_cast<T*>(pActor)))
				continue;

			if (pActor->IsA(pComparisonClass)) // Check if the actor is of the type we want
				actors.push_back(reinterpret_cast<T*>(pActor)); // If it is add it to the vector
		}

		return actors; // Return the vector
	}

	// These functions are to make getting pointers to important classes and objects easier and cleaner
	static CG::AGameStateBase* GetGameStateBase()
	{
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		CG::AGameStateBase* pGameState = (*CG::UWorld::GWorld)->GameState;
		if (!IsValidObjectPtr(pGameState))
			return nullptr;

		return pGameState;
	}
	static CG::UGameInstance* GetGameInstance()
	{
		if (!(*CG::UWorld::GWorld))
			return nullptr;

		CG::UGameInstance* pGameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
		if (!IsValidObjectPtr(pGameInstance))
			return nullptr;

		return pGameInstance;
	}

	static CG::ULocalPlayer* GetLocalPlayer(int index = 0)
	{
		CG::UGameInstance* pGameInstance = GetGameInstance();
		if (!IsValidObjectPtr(pGameInstance))
			return nullptr;

		CG::ULocalPlayer* pLocalPlayer = pGameInstance->LocalPlayers[index];
		if (!IsValidObjectPtr(pLocalPlayer))
			return nullptr;

		return pLocalPlayer;
	}
	static CG::UGameViewportClient* GetViewportClient()
	{
		CG::ULocalPlayer* pLocalPlayer = GetLocalPlayer();
		if (!IsValidObjectPtr(pLocalPlayer))
			return nullptr;

		CG::UGameViewportClient* pViewportClient = pLocalPlayer->ViewportClient;
		if (!IsValidObjectPtr(pViewportClient))
			return nullptr;

		return pViewportClient;
	}
	static CG::APlayerController* GetPlayerController()
	{
		CG::ULocalPlayer* LocalPlayer = GetLocalPlayer();
		if (!IsValidObjectPtr(LocalPlayer))
			return nullptr;

		CG::APlayerController* pPlayerController = LocalPlayer->PlayerController;
		if (!IsValidObjectPtr(pPlayerController))
			return nullptr;

		return pPlayerController;
	}
	static CG::APawn* GetAcknowledgedPawn()
	{
		CG::APlayerController* pPlayerController = GetPlayerController();
		if (!IsValidObjectPtr(pPlayerController))
			return nullptr;

		CG::APawn* pAcknowledgedPawn = pPlayerController->AcknowledgedPawn;
		if (!IsValidObjectPtr(pAcknowledgedPawn))
			return nullptr;

		return pAcknowledgedPawn;
	}

	static CG::APlayerCameraManager* GetPlayerCameraManager()
	{
		CG::APlayerController* pPlayerController = GetPlayerController();
		if (!IsValidObjectPtr(pPlayerController))
			return nullptr;

		CG::APlayerCameraManager* pPlayerCameraManager = pPlayerController->PlayerCameraManager;
		if (!IsValidObjectPtr(pPlayerCameraManager))
			return nullptr;

		return pPlayerCameraManager;
	}

	static bool WorldToScreen(CG::FVector in, CG::FVector2D& out, bool relative = false)
	{
		CG::APlayerController* pPlayerController = GetPlayerController();
		if (!IsValidObjectPtr(pPlayerController))
			return false;

		return pPlayerController->ProjectWorldLocationToScreen(in, &out, relative);
	}

	// I made this function so I would have to type less to get the screen position of a world position
	static CG::FVector2D W2S(CG::FVector in, bool relative = false)
	{
		CG::FVector2D out = { 0, 0 };
		CG::APlayerController* PlayerController = GetPlayerController();
		if (!IsValidObjectPtr(PlayerController))
			return out;

		PlayerController->ProjectWorldLocationToScreen(in, &out, relative);

		return out;
	}

	template <typename T>
	static std::vector<T> SortActorsByDistance(std::vector<T> actors)
	{
		CG::APawn* pAcknowledgedPawn = GetAcknowledgedPawn();
		if (!IsValidObjectPtr(pAcknowledgedPawn))
			return actors;

		std::vector<T> SortedActors{};

		typedef struct SortHack_t {
			T pActor;
			float flDistance;
		} SortHack_t;

		std::vector<SortHack_t> ActorAndDistances{};
		std::vector<float> AllDistances{};

		for (T pActor : actors) 
		{
			if (!IsValidObjectPtr(pActor))
				continue;

			SortHack_t stActorHack{
				pActor,
				pActor->GetDistanceTo(pAcknowledgedPawn)
			};

			while (1) {
				bool bFixed = true;
				for (float flOtherDistance : AllDistances)
				{
					if (flOtherDistance == stActorHack.flDistance) {
						++stActorHack.flDistance;
						bFixed = false;
						break;
					}
				}

				if (bFixed)
					break;
			}

			ActorAndDistances.push_back(stActorHack);
			AllDistances.push_back(stActorHack.flDistance);
		}

		std::stable_sort(ActorAndDistances.begin(), ActorAndDistances.end(), [](SortHack_t A, SortHack_t B) {
			return A.flDistance < B.flDistance;
		});

		for (SortHack_t stHack : ActorAndDistances)
			SortedActors.push_back(stHack.pActor);

		return SortedActors;
	}

	static void hkPostRender(CG::UObject* pViewportClient, CG::UCanvas* pCanvas)
	{
		CG::ULocalPlayer* pLocalPlayer = GetLocalPlayer();
		if (!IsValidObjectPtr(pLocalPlayer))
			return oPostRender(pViewportClient, pCanvas);

		CG::FLinearColor Cyan = { 0.f, 1.f, 1.f, 1.f };
		CG::FLinearColor Black = { 0.f, 0.f, 0.f, 1.f };

		// The canvas reports its size as the current resolution but in my testing it is always 2048, 1280
		CG::FVector2D TextSize = pCanvas->K2_TextSize(pFont, L"OmegaWare.xyz", { 1.f, 1.f });
		//pCanvas->K2_DrawText(pFont, L"OmegaWare.xyz", { 1024.f - (TextSize.X / 2), 0.f }, { 1.f, 1.f }, Cyan, 1.f, Black, { 0.f, 0.f }, false, false, true, Black);

		//pCanvas->K2_DrawLine({ 0.f, 0.f }, { 1024.f, 640.f }, 1.f, Cyan);

		oPostRender(pViewportClient, pCanvas);
	}
};
#endif