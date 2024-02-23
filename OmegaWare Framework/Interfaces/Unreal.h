#pragma once
#include "pch.h"
#if FRAMEWORK_UNREAL // Not sure if this is needed but it's here anyway


#define FNAME_INITIALIZATION_MACRO(n) DRG::n = CG::FName(#n); vecClassLookups.push_back(ClassLookupEntry_t{n, EFNames::n}); Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Initalized " + std::string(#n))
namespace DRG
{
	enum class EFNames {
		Invalid,
		APawn,
		ACharacter,
		AEQSTestingPawn,
		APlayerCharacter,
		ADefaultPawn,
		ASpectatorPawn,
		APathfinderVehicle,
		APlayerCameraDrone,
		AFSDPawn,
		ACaretaker,
		AEscortMule,
		ATowerModuleBase,
		AAimingTowerModule,
		AGuntowerModule,
		AHostileGuntowerModule,
		AHostileTargetingGuntowerModule,
		ALMGGuntoweModule,
		AHomingFireModule,
		ARandomFiringGuntowerModule,
		ARadialFireModule,
		AGuntowerWeakPoint,
		ATowerEventModule,
		AAimingTowerEventModule,
		AEnemyPawn,
		AStabberVineRoot,
		AParasiteEnemy,
		AInsectSwarmSpawner,
		AHydraWeedHealer,
		AShootingPlant,
		AHydraWeedShooter,
		AHydraWeedCore,
		AFacilityTurret,
		ASpinningFacilityturret,
		AAimingFacilityTurret,
		ATentacleBase,
		AFacilityTentacle,
		AStabberVine,
		ATerminatorTentacle,
		ACaveLeech,
		AEnemyDeepPathfinderCharacter,
		AAFlyingBug,
		ABomber,
		AFlyingLifter,
		AJellyBreeder,
		AConvertedRobot,
		AFlyingEnemyDeepPathfinderCharacter,
		AFriendlyParasite,
		AHalloweenSkull,
		AInsectSwarmEnemy,
		APatrolBot,
		APlagueWorm,
		AProspectorRobot,
		ASharkEnemy,
		AShredder,
		ASpiderEnemy,
		ATerminatorEnemy,
		AWoodLouse,
		ABosco,
		ABP_Bosco_C,
		ACaveWorm,
		AMaggot,
		ADroneBase,
		ADroneCharacter,
		AMULE,
		AMolly,
		ABP_Donkey_C,
		AMiniMule,
		ARecallableActor,
		ARecallableSentryGun,
		WPN_AssaultRifle_C,
		WPN_Autocannon_C,
		WPN_BurstPistol_C,
		WPN_ChargeBlaster_C,
		WPN_CoilGun_C,
		WPN_CombatShotgun_C,
		WPN_Crossbow_C,
		WPN_Cryospray_C,
		WPN_DetPack_Detonator_C,
		WPN_DetPack_Detonator_Driller_C,
		WPN_DoubleDrills_C,
		WPN_DualMPs_C,
		WPN_FlameThrower_C,
		WPN_FlareGun_C,
		WPN_FuelLine_Builder_C,
		WPN_Gatling_C,
		WPN_GrapplingGun_C,
		WPN_GrenadeLauncher_C,
		WPN_HeavyParticleCannon_C,
		WPN_LineCutter_C,
		WPN_LockOnRifle_C,
		WPN_M1000_C,
		WPN_MicroMissileLauncher_C,
		WPN_MicrowaveGun_C,
		WPN_Pickaxe_Driller_C,
		WPN_Pickaxe_Engineer_C,
		WPN_Pickaxe_Gunner_C,
		WPN_Pickaxe_Scout_C,
		WPN_Pistol_A_C,
		WPN_PlasmaCarbine_C,
		WPN_PlatformGun_C,
		WPN_RecallableSentryGun_C,
		WPN_Revolver_C,
		WPN_SawedOffShotgun_C,
		WPN_ShieldRegeneratorItem_C,
		WPN_SMG_OneHand_C,
		WPN_ZipLineGun_C,
		DeepCSGSection,
		MiningPodCalldownLocation,
		ENE_FacilityTurret_Barrier_C,
		AIC_FacilityTurret_Burst_C,
		BP_ExplodingPlant_Small_C,
		BP_SpiderEgg3_C,
		BP_SpiderEgg2_C,
		HealingCrystal_Light_C,
		BP_ExplodingPlant_Medium_C,
		BP_Apoca_Bloom_C,
		BP_SpiderEgg_C,
		BP_NetFungus_C,
		ENE_FacilityTurret_Burst_C,
		BP_ShortStemFungus_C,
		BP_PhazyoniteChunk_C,
		BP_CroppaChunk_C,
		BP_NitraChunk_C,
		BP_GoldChunk_C,
		BP_RedSugarChunk_C,
		NavMeshBoundsVolume,
		BP_Character_ShowroomStage_C,
		BP_GunnerCharacter_C,
		BP_PoisonGasFungus_C,
		BP_Barley3_1_C,
		BP_Facility_PowerStation_ShieldGenerator_C,
		BP_Barley4_4_C,
		BP_PlayerStart_C,
		BP_LostPackDebrisPart_C,
		BP_LostPackStart_C,
		FadeUpFromBlack_LevelSequence,
		BP_Gem_Jadiz_C,
		TentacleSpawn2_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT,
		BP_FSDCameraManager_C,
		Widget_RandomCode06_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		Widget_RandomCode05_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		Widget_RandomCode04_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		Widget_RandomCode02_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		ChildActor1_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT,
		Widget_ResourceScreen02_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT,
		BP_DropPod_Landing_C,
		Widget_Countdown2_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT,
		BP_Drop_CamShake_C,
		Widget_RandomCode07_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		FSDWorldSettings,
		DefaultPhysicsVolume,
		GM_Facility_C,
		Widget_RandomCode03_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		FSDGameSession,
		ParticleEventManager,
		GameNetworkManager,
		Widget_CaveData1_GEN_VARIABLE_BP_Widget_DropPod_Complexity_C_CAT,
		LVL_Procedural_C,
		WorldSettings,
		BP_GameState_C,
		AIC_LootBug_C,
		ENE_LootBug_C,
		BP_NetworkPlayerController_C,
		BP_PlayerState_C,
		AsyncLevelPersistanceActor,
		GameStats,
		CameraActor,
		PLS_Facility_C,
		Actor,
		BP_TruckerBalls_GEN_VARIABLE_BP_TruckerBalls_C_CAT,
		BP_PostProcessing_FungusBogs_C,
		PostProcessingManager,
		DBA_FungusBogs_C,
		BP_TutorialManager_Base_C,
		ITM_GrenadeThrow_C,
		WPN_LaserPointer_C,
		ITM_TerrainScanner_C,
		ChildActor_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT,
		ITM_SupplyDrop_C,
		BP_HUD_C,
		LevelSequenceActor,
		MusicReplicator,
		Widget_ResourceScreen01_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT,
		Widget_Countdown1_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT,
		Widget_MissionData1_GEN_VARIABLE_BP_Widget_DropPod_MissionType_C_CAT,
		Widget_RandomCode01_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT,
		BP_Bosco_C,
		StateDisplay_GEN_VARIABLE_BP_BoscoStateDisplay_C_CAT,
		AIC_Donkey_C,
		BP_DonkeyDestinationMarker_C,
		BP_Donkey_Facility_C,
		AIC_BoscoController_C,
		BP_MorchellaFungus_C,
		BP_Mushroom_01_C,
		DeepCSGWorld,
		BP_MeteorShowerTimer_C,
		BP_MainFacility_DataVault_C,
		ENE_FacilityCaretaker_C,
		AIController,
		BP_MainFacility_PowerCable_C,
		BP_Barley4_1_C,
		LHologram_GEN_VARIABLE_BP_MainFacility_ShieldEmitter_Hologram_C_CAT,
		RHologram_GEN_VARIABLE_BP_MainFacility_ShieldEmitter_Hologram_C_CAT,
		ChildActor_GEN_VARIABLE_BP_MainFacility_Batteryholder_C_CAT,
		TentacleSpawn_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT,
		TentacleSpawn3_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT,
		TentacleSpawn1_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT,
		BP_Bosco_Character_C,
		BP_DrillerCharacter_C,
		BP_NavigatorCharacter_C,


		ENE_Spider_Swarmer_C,
		AIC_Spider_Swarmer_C,
	};

	typedef struct ActorInfo_t {
		CG::AActor* pActor;
		EFNames iLookupIndex;
	} PawnInfo_t;

	typedef struct ClassLookupEntry_t {
		CG::FName& refFName;
		EFNames iLookupIndex;
	} ClassLookupEntry_t;
	
	inline std::vector<ClassLookupEntry_t> vecClassLookups{};

	inline CG::FName Invalid;
	inline CG::FName APawn;
	inline CG::FName ACharacter;
	inline CG::FName AEQSTestingPawn;
	inline CG::FName APlayerCharacter;
	inline CG::FName ADefaultPawn;
	inline CG::FName ASpectatorPawn;
	inline CG::FName APathfinderVehicle;
	inline CG::FName APlayerCameraDrone;
	inline CG::FName AFSDPawn;
	inline CG::FName ACaretaker;
	inline CG::FName AEscortMule;
	inline CG::FName ATowerModuleBase;
	inline CG::FName AAimingTowerModule;
	inline CG::FName AGuntowerModule;
	inline CG::FName AHostileGuntowerModule;
	inline CG::FName AHostileTargetingGuntowerModule;
	inline CG::FName ALMGGuntoweModule;
	inline CG::FName AHomingFireModule;
	inline CG::FName ARandomFiringGuntowerModule;
	inline CG::FName ARadialFireModule;
	inline CG::FName AGuntowerWeakPoint;
	inline CG::FName ATowerEventModule;
	inline CG::FName AAimingTowerEventModule;
	inline CG::FName AEnemyPawn;
	inline CG::FName AStabberVineRoot;
	inline CG::FName AParasiteEnemy;
	inline CG::FName AInsectSwarmSpawner;
	inline CG::FName AHydraWeedHealer;
	inline CG::FName AShootingPlant;
	inline CG::FName AHydraWeedShooter;
	inline CG::FName AHydraWeedCore;
	inline CG::FName AFacilityTurret;
	inline CG::FName ASpinningFacilityturret;
	inline CG::FName AAimingFacilityTurret;
	inline CG::FName ATentacleBase;
	inline CG::FName AFacilityTentacle;
	inline CG::FName AStabberVine;
	inline CG::FName ATerminatorTentacle;
	inline CG::FName ACaveLeech;
	inline CG::FName AEnemyDeepPathfinderCharacter;
	inline CG::FName AAFlyingBug;
	inline CG::FName ABomber;
	inline CG::FName AFlyingLifter;
	inline CG::FName AJellyBreeder;
	inline CG::FName AConvertedRobot;
	inline CG::FName AFlyingEnemyDeepPathfinderCharacter;
	inline CG::FName AFriendlyParasite;
	inline CG::FName AHalloweenSkull;
	inline CG::FName AInsectSwarmEnemy;
	inline CG::FName APatrolBot;
	inline CG::FName APlagueWorm;
	inline CG::FName AProspectorRobot;
	inline CG::FName ASharkEnemy;
	inline CG::FName AShredder;
	inline CG::FName ASpiderEnemy;
	inline CG::FName ATerminatorEnemy;
	inline CG::FName AWoodLouse;
	inline CG::FName ABosco;
	inline CG::FName ABP_Bosco_C;
	inline CG::FName ACaveWorm;
	inline CG::FName AMaggot;
	inline CG::FName ADroneBase;
	inline CG::FName ADroneCharacter;
	inline CG::FName AMULE;
	inline CG::FName AMolly;
	inline CG::FName ABP_Donkey_C;
	inline CG::FName AMiniMule;
	inline CG::FName ARecallableActor;
	inline CG::FName ARecallableSentryGun;
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
	inline CG::FName WPN_GrapplingGun_C;
	inline CG::FName WPN_GrenadeLauncher_C;
	inline CG::FName WPN_HeavyParticleCannon_C;
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
	inline CG::FName DeepCSGSection;
	inline CG::FName MiningPodCalldownLocation;
	inline CG::FName ENE_FacilityTurret_Barrier_C;
	inline CG::FName AIC_FacilityTurret_Burst_C;
	inline CG::FName BP_ExplodingPlant_Small_C;
	inline CG::FName BP_SpiderEgg3_C;
	inline CG::FName BP_SpiderEgg2_C;
	inline CG::FName HealingCrystal_Light_C;
	inline CG::FName BP_ExplodingPlant_Medium_C;
	inline CG::FName BP_Apoca_Bloom_C;
	inline CG::FName BP_SpiderEgg_C;
	inline CG::FName BP_NetFungus_C;
	inline CG::FName ENE_FacilityTurret_Burst_C;
	inline CG::FName BP_ShortStemFungus_C;
	inline CG::FName BP_PhazyoniteChunk_C;
	inline CG::FName BP_CroppaChunk_C;
	inline CG::FName BP_NitraChunk_C;
	inline CG::FName BP_GoldChunk_C;
	inline CG::FName BP_RedSugarChunk_C;
	inline CG::FName NavMeshBoundsVolume;
	inline CG::FName BP_Character_ShowroomStage_C;
	inline CG::FName BP_GunnerCharacter_C;
	inline CG::FName BP_PoisonGasFungus_C;
	inline CG::FName BP_Barley3_1_C;
	inline CG::FName BP_Facility_PowerStation_ShieldGenerator_C;
	inline CG::FName BP_Barley4_4_C;
	inline CG::FName BP_PlayerStart_C;
	inline CG::FName BP_LostPackDebrisPart_C;
	inline CG::FName BP_LostPackStart_C;
	inline CG::FName FadeUpFromBlack_LevelSequence;
	inline CG::FName BP_Gem_Jadiz_C;
	inline CG::FName TentacleSpawn2_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT;
	inline CG::FName BP_FSDCameraManager_C;
	inline CG::FName Widget_RandomCode06_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName Widget_RandomCode05_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName Widget_RandomCode04_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName Widget_RandomCode02_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName ChildActor1_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT;
	inline CG::FName Widget_ResourceScreen02_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT;
	inline CG::FName BP_DropPod_Landing_C;
	inline CG::FName Widget_Countdown2_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT;
	inline CG::FName BP_Drop_CamShake_C;
	inline CG::FName Widget_RandomCode07_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName FSDWorldSettings;
	inline CG::FName DefaultPhysicsVolume;
	inline CG::FName GM_Facility_C;
	inline CG::FName Widget_RandomCode03_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName FSDGameSession;
	inline CG::FName ParticleEventManager;
	inline CG::FName GameNetworkManager;
	inline CG::FName Widget_CaveData1_GEN_VARIABLE_BP_Widget_DropPod_Complexity_C_CAT;
	inline CG::FName LVL_Procedural_C;
	inline CG::FName WorldSettings;
	inline CG::FName BP_GameState_C;
	inline CG::FName AIC_LootBug_C;
	inline CG::FName ENE_LootBug_C;
	inline CG::FName BP_NetworkPlayerController_C;
	inline CG::FName BP_PlayerState_C;
	inline CG::FName AsyncLevelPersistanceActor;
	inline CG::FName GameStats;
	inline CG::FName CameraActor;
	inline CG::FName PLS_Facility_C;
	inline CG::FName Actor;
	inline CG::FName BP_TruckerBalls_GEN_VARIABLE_BP_TruckerBalls_C_CAT;
	inline CG::FName BP_PostProcessing_FungusBogs_C;
	inline CG::FName PostProcessingManager;
	inline CG::FName DBA_FungusBogs_C;
	inline CG::FName BP_TutorialManager_Base_C;
	inline CG::FName ITM_GrenadeThrow_C;
	inline CG::FName WPN_LaserPointer_C;
	inline CG::FName ITM_TerrainScanner_C;
	inline CG::FName ChildActor_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT;
	inline CG::FName ITM_SupplyDrop_C;
	inline CG::FName BP_HUD_C;
	inline CG::FName LevelSequenceActor;
	inline CG::FName MusicReplicator;
	inline CG::FName Widget_ResourceScreen01_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT;
	inline CG::FName Widget_Countdown1_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT;
	inline CG::FName Widget_MissionData1_GEN_VARIABLE_BP_Widget_DropPod_MissionType_C_CAT;
	inline CG::FName Widget_RandomCode01_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT;
	inline CG::FName BP_Bosco_C;
	inline CG::FName StateDisplay_GEN_VARIABLE_BP_BoscoStateDisplay_C_CAT;
	inline CG::FName AIC_Donkey_C;
	inline CG::FName BP_DonkeyDestinationMarker_C;
	inline CG::FName BP_Donkey_Facility_C;
	inline CG::FName AIC_BoscoController_C;
	inline CG::FName BP_MorchellaFungus_C;
	inline CG::FName BP_Mushroom_01_C;
	inline CG::FName DeepCSGWorld;
	inline CG::FName BP_MeteorShowerTimer_C;
	inline CG::FName BP_MainFacility_DataVault_C;
	inline CG::FName ENE_FacilityCaretaker_C;
	inline CG::FName AIController;
	inline CG::FName BP_MainFacility_PowerCable_C;
	inline CG::FName BP_Barley4_1_C;
	inline CG::FName LHologram_GEN_VARIABLE_BP_MainFacility_ShieldEmitter_Hologram_C_CAT;
	inline CG::FName RHologram_GEN_VARIABLE_BP_MainFacility_ShieldEmitter_Hologram_C_CAT;
	inline CG::FName ChildActor_GEN_VARIABLE_BP_MainFacility_Batteryholder_C_CAT;
	inline CG::FName TentacleSpawn_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT;
	inline CG::FName TentacleSpawn3_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT;
	inline CG::FName TentacleSpawn1_GEN_VARIABLE_BP_FacilityTentacleManager_C_CAT;
	inline CG::FName BP_Bosco_Character_C;
	inline CG::FName BP_DrillerCharacter_C;
	inline CG::FName BP_NavigatorCharacter_C;

	inline void InitializeFNames()
	{

		FNAME_INITIALIZATION_MACRO(Invalid);
		FNAME_INITIALIZATION_MACRO(APawn);
		FNAME_INITIALIZATION_MACRO(ACharacter);
		FNAME_INITIALIZATION_MACRO(AEQSTestingPawn);
		FNAME_INITIALIZATION_MACRO(APlayerCharacter);
		FNAME_INITIALIZATION_MACRO(ADefaultPawn);
		FNAME_INITIALIZATION_MACRO(ASpectatorPawn);
		FNAME_INITIALIZATION_MACRO(APathfinderVehicle);
		FNAME_INITIALIZATION_MACRO(APlayerCameraDrone);
		FNAME_INITIALIZATION_MACRO(AFSDPawn);
		FNAME_INITIALIZATION_MACRO(ACaretaker);
		FNAME_INITIALIZATION_MACRO(AEscortMule);
		FNAME_INITIALIZATION_MACRO(ATowerModuleBase);
		FNAME_INITIALIZATION_MACRO(AAimingTowerModule);
		FNAME_INITIALIZATION_MACRO(AGuntowerModule);
		FNAME_INITIALIZATION_MACRO(AHostileGuntowerModule);
		FNAME_INITIALIZATION_MACRO(AHostileTargetingGuntowerModule);
		FNAME_INITIALIZATION_MACRO(ALMGGuntoweModule);
		FNAME_INITIALIZATION_MACRO(AHomingFireModule);
		FNAME_INITIALIZATION_MACRO(ARandomFiringGuntowerModule);
		FNAME_INITIALIZATION_MACRO(ARadialFireModule);
		FNAME_INITIALIZATION_MACRO(AGuntowerWeakPoint);
		FNAME_INITIALIZATION_MACRO(ATowerEventModule);
		FNAME_INITIALIZATION_MACRO(AAimingTowerEventModule);
		FNAME_INITIALIZATION_MACRO(AEnemyPawn);
		FNAME_INITIALIZATION_MACRO(AStabberVineRoot);
		FNAME_INITIALIZATION_MACRO(AParasiteEnemy);
		FNAME_INITIALIZATION_MACRO(AInsectSwarmSpawner);
		FNAME_INITIALIZATION_MACRO(AHydraWeedHealer);
		FNAME_INITIALIZATION_MACRO(AShootingPlant);
		FNAME_INITIALIZATION_MACRO(AHydraWeedShooter);
		FNAME_INITIALIZATION_MACRO(AHydraWeedCore);
		FNAME_INITIALIZATION_MACRO(AFacilityTurret);
		FNAME_INITIALIZATION_MACRO(ASpinningFacilityturret);
		FNAME_INITIALIZATION_MACRO(AAimingFacilityTurret);
		FNAME_INITIALIZATION_MACRO(ATentacleBase);
		FNAME_INITIALIZATION_MACRO(AFacilityTentacle);
		FNAME_INITIALIZATION_MACRO(AStabberVine);
		FNAME_INITIALIZATION_MACRO(ATerminatorTentacle);
		FNAME_INITIALIZATION_MACRO(ACaveLeech);
		FNAME_INITIALIZATION_MACRO(AEnemyDeepPathfinderCharacter);
		FNAME_INITIALIZATION_MACRO(AAFlyingBug);
		FNAME_INITIALIZATION_MACRO(ABomber);
		FNAME_INITIALIZATION_MACRO(AFlyingLifter);
		FNAME_INITIALIZATION_MACRO(AJellyBreeder);
		FNAME_INITIALIZATION_MACRO(AConvertedRobot);
		FNAME_INITIALIZATION_MACRO(AFlyingEnemyDeepPathfinderCharacter);
		FNAME_INITIALIZATION_MACRO(AFriendlyParasite);
		FNAME_INITIALIZATION_MACRO(AHalloweenSkull);
		FNAME_INITIALIZATION_MACRO(AInsectSwarmEnemy);
		FNAME_INITIALIZATION_MACRO(APatrolBot);
		FNAME_INITIALIZATION_MACRO(APlagueWorm);
		FNAME_INITIALIZATION_MACRO(AProspectorRobot);
		FNAME_INITIALIZATION_MACRO(ASharkEnemy);
		FNAME_INITIALIZATION_MACRO(AShredder);
		FNAME_INITIALIZATION_MACRO(ASpiderEnemy);
		FNAME_INITIALIZATION_MACRO(ATerminatorEnemy);
		FNAME_INITIALIZATION_MACRO(AWoodLouse);
		FNAME_INITIALIZATION_MACRO(ABosco);
		FNAME_INITIALIZATION_MACRO(ABP_Bosco_C);
		FNAME_INITIALIZATION_MACRO(ACaveWorm);
		FNAME_INITIALIZATION_MACRO(AMaggot);
		FNAME_INITIALIZATION_MACRO(ADroneBase);
		FNAME_INITIALIZATION_MACRO(ADroneCharacter);
		FNAME_INITIALIZATION_MACRO(AMULE);
		FNAME_INITIALIZATION_MACRO(AMolly);
		FNAME_INITIALIZATION_MACRO(ABP_Donkey_C);
		FNAME_INITIALIZATION_MACRO(AMiniMule);
		FNAME_INITIALIZATION_MACRO(ARecallableActor);
		FNAME_INITIALIZATION_MACRO(ARecallableSentryGun);
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
		FNAME_INITIALIZATION_MACRO(DeepCSGSection);
		FNAME_INITIALIZATION_MACRO(MiningPodCalldownLocation);
		FNAME_INITIALIZATION_MACRO(ENE_FacilityTurret_Barrier_C);
		FNAME_INITIALIZATION_MACRO(AIC_FacilityTurret_Burst_C);
		FNAME_INITIALIZATION_MACRO(BP_ExplodingPlant_Small_C);
		FNAME_INITIALIZATION_MACRO(BP_SpiderEgg3_C);
		FNAME_INITIALIZATION_MACRO(BP_SpiderEgg2_C);
		FNAME_INITIALIZATION_MACRO(HealingCrystal_Light_C);
		FNAME_INITIALIZATION_MACRO(BP_ExplodingPlant_Medium_C);
		FNAME_INITIALIZATION_MACRO(BP_Apoca_Bloom_C);
		FNAME_INITIALIZATION_MACRO(BP_SpiderEgg_C);
		FNAME_INITIALIZATION_MACRO(BP_NetFungus_C);
		FNAME_INITIALIZATION_MACRO(ENE_FacilityTurret_Burst_C);
		FNAME_INITIALIZATION_MACRO(BP_ShortStemFungus_C);
		FNAME_INITIALIZATION_MACRO(BP_PhazyoniteChunk_C);
		FNAME_INITIALIZATION_MACRO(BP_CroppaChunk_C);
		FNAME_INITIALIZATION_MACRO(BP_NitraChunk_C);
		FNAME_INITIALIZATION_MACRO(BP_GoldChunk_C);
		FNAME_INITIALIZATION_MACRO(BP_RedSugarChunk_C);
		FNAME_INITIALIZATION_MACRO(NavMeshBoundsVolume);
		FNAME_INITIALIZATION_MACRO(BP_Character_ShowroomStage_C);
		FNAME_INITIALIZATION_MACRO(BP_GunnerCharacter_C);
		FNAME_INITIALIZATION_MACRO(BP_PoisonGasFungus_C);
		FNAME_INITIALIZATION_MACRO(BP_Barley3_1_C);
		FNAME_INITIALIZATION_MACRO(BP_Facility_PowerStation_ShieldGenerator_C);
		FNAME_INITIALIZATION_MACRO(BP_Barley4_4_C);
		FNAME_INITIALIZATION_MACRO(BP_PlayerStart_C);
		FNAME_INITIALIZATION_MACRO(BP_LostPackDebrisPart_C);
		FNAME_INITIALIZATION_MACRO(BP_LostPackStart_C);
		FNAME_INITIALIZATION_MACRO(FadeUpFromBlack_LevelSequence);
		FNAME_INITIALIZATION_MACRO(BP_Gem_Jadiz_C);
		FNAME_INITIALIZATION_MACRO(BP_FSDCameraManager_C);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode06_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode05_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode04_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode02_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(ChildActor1_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_ResourceScreen02_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT);
		FNAME_INITIALIZATION_MACRO(BP_DropPod_Landing_C);
		FNAME_INITIALIZATION_MACRO(Widget_Countdown2_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT);
		FNAME_INITIALIZATION_MACRO(BP_Drop_CamShake_C);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode07_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(FSDWorldSettings);
		FNAME_INITIALIZATION_MACRO(DefaultPhysicsVolume);
		FNAME_INITIALIZATION_MACRO(GM_Facility_C);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode03_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(FSDGameSession);
		FNAME_INITIALIZATION_MACRO(ParticleEventManager);
		FNAME_INITIALIZATION_MACRO(GameNetworkManager);
		FNAME_INITIALIZATION_MACRO(Widget_CaveData1_GEN_VARIABLE_BP_Widget_DropPod_Complexity_C_CAT);
		FNAME_INITIALIZATION_MACRO(LVL_Procedural_C);
		FNAME_INITIALIZATION_MACRO(WorldSettings);
		FNAME_INITIALIZATION_MACRO(BP_GameState_C);
		FNAME_INITIALIZATION_MACRO(AIC_LootBug_C);
		FNAME_INITIALIZATION_MACRO(ENE_LootBug_C);
		FNAME_INITIALIZATION_MACRO(BP_NetworkPlayerController_C);
		FNAME_INITIALIZATION_MACRO(BP_PlayerState_C);
		FNAME_INITIALIZATION_MACRO(AsyncLevelPersistanceActor);
		FNAME_INITIALIZATION_MACRO(GameStats);
		FNAME_INITIALIZATION_MACRO(CameraActor);
		FNAME_INITIALIZATION_MACRO(PLS_Facility_C);
		FNAME_INITIALIZATION_MACRO(Actor);
		FNAME_INITIALIZATION_MACRO(BP_TruckerBalls_GEN_VARIABLE_BP_TruckerBalls_C_CAT);
		FNAME_INITIALIZATION_MACRO(BP_PostProcessing_FungusBogs_C);
		FNAME_INITIALIZATION_MACRO(PostProcessingManager);
		FNAME_INITIALIZATION_MACRO(DBA_FungusBogs_C);
		FNAME_INITIALIZATION_MACRO(BP_TutorialManager_Base_C);
		FNAME_INITIALIZATION_MACRO(ITM_GrenadeThrow_C);
		FNAME_INITIALIZATION_MACRO(WPN_LaserPointer_C);
		FNAME_INITIALIZATION_MACRO(ITM_TerrainScanner_C);
		FNAME_INITIALIZATION_MACRO(ChildActor_GEN_VARIABLE_BP_Widget_DropPod_DangerLevel_C_CAT);
		FNAME_INITIALIZATION_MACRO(ITM_SupplyDrop_C);
		FNAME_INITIALIZATION_MACRO(BP_HUD_C);
		FNAME_INITIALIZATION_MACRO(LevelSequenceActor);
		FNAME_INITIALIZATION_MACRO(MusicReplicator);
		FNAME_INITIALIZATION_MACRO(Widget_ResourceScreen01_GEN_VARIABLE_BP_Widget_DropPod_BiomeRadar_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_Countdown1_GEN_VARIABLE_BP_Widget_DropPod_AltitudeMeter_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_MissionData1_GEN_VARIABLE_BP_Widget_DropPod_MissionType_C_CAT);
		FNAME_INITIALIZATION_MACRO(Widget_RandomCode01_GEN_VARIABLE_BP_Widget_DropPod_GarbageGen_C_CAT);
		FNAME_INITIALIZATION_MACRO(BP_Bosco_C);
		FNAME_INITIALIZATION_MACRO(AIC_Donkey_C);
		FNAME_INITIALIZATION_MACRO(BP_DonkeyDestinationMarker_C);
		FNAME_INITIALIZATION_MACRO(BP_Donkey_Facility_C);
		FNAME_INITIALIZATION_MACRO(AIC_BoscoController_C);
		FNAME_INITIALIZATION_MACRO(BP_MorchellaFungus_C);
		FNAME_INITIALIZATION_MACRO(BP_Mushroom_01_C);
		FNAME_INITIALIZATION_MACRO(DeepCSGWorld);
		FNAME_INITIALIZATION_MACRO(BP_MeteorShowerTimer_C);
		FNAME_INITIALIZATION_MACRO(BP_MainFacility_DataVault_C);
		FNAME_INITIALIZATION_MACRO(ENE_FacilityCaretaker_C);
		FNAME_INITIALIZATION_MACRO(AIController);
		FNAME_INITIALIZATION_MACRO(BP_MainFacility_PowerCable_C);
		FNAME_INITIALIZATION_MACRO(BP_Barley4_1_C);
		FNAME_INITIALIZATION_MACRO(BP_Bosco_Character_C);
		FNAME_INITIALIZATION_MACRO(BP_DrillerCharacter_C);
		FNAME_INITIALIZATION_MACRO(BP_NavigatorCharacter_C);
	};
}
#undef FNAME_INITIALIZATION_MACRO

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
				if (comp_index == entry.refFName.ComparisonIndex) {
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