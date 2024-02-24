#pragma once
#include "pch.h"
#if FRAMEWORK_UNREAL // Not sure if this is needed but it's here anyway


#define FNAME_INITIALIZATION_MACRO(n) DRG::n = CG::FName(#n); vecClassLookups.push_back(ClassLookupEntry_t{n, EFNames::n}); Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Initalized " + std::string(#n))

#define PUTS_THE_FNAME_IN_THE_BAG(n) DRG::ClassLookupEntry_t{std::string_view(#n), 0, DRG::EFNames::n}
namespace DRG
{
	enum class EFNames {
		Invalid,
		Actor,
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
		ENE_JellyBreeder_Normal_C,
		ENE_Butterfly_C,
		ENE_Spider_Grunt_Guard_C,
		ENE_Bomber_Fire_C,
		ENE_FlyingCritterBase_C,
		ENE_Spider_Grunt_Guard_Radioactive_C,
		ENE_Spider_Spitter_C,
		ENE_FacilityTurret_Spinning_C,
		ENE_Spider_ExploderTank_Ghost_C,
		ENE_Spider_Grunt_Guard_Ice_C,
		ENE_FacilityTurret_Burst_C,
		ENE_Spider_Drone_C,
		ENE_Spider_Shooter_Ground_C,
		ENE_Spider_Grunt_Normal_C,
		ENE_Spider_Exploding_C,
		ENE_Spider_Tank_Amber_C,
		ENE_HydraWeed_Core_C,
		ENE_JellyBreeder_Base_C,
		ENE_Spider_Amber_Shooter_C,
		ENE_Spider_Tank_Ice_C,
		ENE_Jelly_Passive_C,
		ENE_Spider_Boss_TwinA_C,
		ENE_ShootingPlant_Small_C,
		ENE_Jelly_Swarmer_C,
		ENE_Prospector_C,
		ENE_FacilityTentacle_End_C,
		ENE_Spider_Tank_Rock_C,
		ENE_Spider_ExploderTank_King_C,
		ENE_Harvester_C,
		ENE_Spider_Exploding_Rockpox_Plague_C,
		ENE_Bomber_Rockpox_Plague_C,
		ENE_Spider_ShieldTank_C,
		ENE_FacilityTurret_Sniper_C,
		ENE_Spider_Shooter_C,
		ENE_Spider_Swarmer_Radioactive_C,
		ENE_Spider_RapidShooter_Elite_C,
		ENE_Bomber_Child_C,
		ENE_Spider_Charger_C,
		ENE_Spider_Swarmer_Pheromoned_C,
		ENE_PlagueLarva_C,
		ENE_Jelly_Swarmer_Child_C,
		ENE_Jelly_Spawn_Child_C,
		ENE_FacilityTentacle_Burrowing_C,
		ENE_SpiderSpawner_C,
		ENE_Spider_Shooter_Normal_Elite_C,
		ENE_Spider_Exploding_Warning_Radioactive_C,
		ENE_Spider_Tank_Radioactive_C,
		ENE_Grabber_C,
		ENE_Spider_Boss_HeavySpawn_C,
		ENE_BoughWasp_Nest_Medium2_C,
		ENE_Spider_Grunt_Attacker_Ice_C,
		ENE_Shredder_C,
		ENE_Spider_RapidShooter_C,
		ENE_Spider_Tank_Generic_C,
		ENE_Spider_Tank_Normal_C,
		ENE_BoughWasp_Nest_Medium_C,
		ENE_Spider_Boss_Base_C,
		ENE_Spider_Boss_TwinBase_C,
		ENE_BoughWasp_Swarm_C,
		ENE_Spider_Exploding_Radioactive_C,
		ENE_LootBug_C,
		ENE_Spider_Tank_Base_C,
		ENE_Mactera_TripleShooter_C,
		ENE_TerminatorTentacle_C,
		ENE_LootBug_Gold_C,
		ENE_Spider_Grunt_Rock_C,
		ENE_Terminator_C,
		ENE_Spider_Grunt_Attacker_Radioactive_C,
		ENE_Spider_Shooter_Rockpox_Plague_C,
		ENE_Spider_Boss_TwinB_C,
		ENE_Spider_ExploderTank_C,
		ENE_Spider_Boss_Heavy_C,
		ENE_GliderBeast_C,
		ENE_Flea_C,
		ENE_Spider_Grunt_Attacker_C,
		ENE_ElectricPlantVThree_C,
		ENE_Spider_Tank_Boss_C,
		ENE_Spider_Grunt_Radioactive_C,
		ENE_Spider_Stinger_C,
		ENE_PF_SpiderBase_C,
		ENE_Spider_Spawn_C,
		ENE_Maggot_Red1_C,
		ENE_StabberVines2_C,
		ENE_Spider_Swarmer_C,
		ENE_Spider_Buffer_C,
		ENE_Mactera_Shooter_Normal_C,
		ENE_Spider_Swarmer_Ice_C,
		ENE_ShootingPlant_C,
		ENE_Parasite_C,
		ENE_Mactera_Amber_C,
		ENE_InsectSwarm_Spawner_C,
		ENE_Woodlouse_Youngling_C,
		ENE_Bomber_Ice_C,
		ENE_Spider_Grunt_Base_C,
		ENE_BoughWasp_Nest_Medium3_C,
		ENE_Bomber_C,
		ENE_Maggot_C,
		ENE_SmallShootingPlant_RegenPod_C,
		ENE_Shredder_Base_C,
		ENE_StabberVine_Tentacle_C,
		ENE_InfestationLarva_C,
		ENE_Woodlouse_C,
		ENE_Shark_C,
		ENE_Maggot_Normal_C,
		ENE_FlyingSmartRock_C,
		ENE_EnemySpawner_C,
		ENE_Spider_Exploding_Warning_C,
		ENE_Spider_Grunt_Ice_C,
		ENE_FacilityTurret_Barrier_C,
		ENE_FacilityTentacle_C,
		ENE_Jelly_Passive_Mother_C,
		ENE_InsectSwarm_C,
		ENE_Maggot_Azure_C,
		ENE_Spider_Shooter_Queen_C,
		ENE_JellyBreeder_RockpoxPlague_C,
		ENE_WalkingPlagueheart_C,
		ENE_Spider_Hoarder_C,
		ENE_StabberVines_C,
		ENE_Spider_Tank_RockpoxPlague_C,
		ENE_FacilityCaretaker_C,
		ENE_InfectedMule_C,
		ENE_Mactera_Shooter_Base_C,
		ENE_Maggot_HollowBough_Grub_C,
		ENE_Spider_Shooter_Normal_C,
		ENE_Spider_Grunt_RockpoxPlague_C,
		ENE_CaveLeech_C,
		ENE_FacilityTurret_Base_C,
		ENE_Maggot_Green1_C,
		ENE_Maggot_SplineTrail_C,
		ENE_Mactera_Shooter_HeavyVeteran_C,
		ENE_PlagueShark_C,
		ENE_Spider_Lobber_C,
		ENE_PatrolBot_C,
		ENE_PatrolBot_Caretaker_C,
		ENE_SpiderBase_Large_C,
		ENE_BoughWasp_Nest_Small_C,
		ENE_Spider_Lobber_Base_C,
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
		PUTS_THE_FNAME_IN_THE_BAG(Invalid),
		PUTS_THE_FNAME_IN_THE_BAG(Actor),
		PUTS_THE_FNAME_IN_THE_BAG(APawn),
		PUTS_THE_FNAME_IN_THE_BAG(ACharacter),
		PUTS_THE_FNAME_IN_THE_BAG(AEQSTestingPawn),
		PUTS_THE_FNAME_IN_THE_BAG(APlayerCharacter),
		PUTS_THE_FNAME_IN_THE_BAG(ADefaultPawn),
		PUTS_THE_FNAME_IN_THE_BAG(ASpectatorPawn),
		PUTS_THE_FNAME_IN_THE_BAG(APathfinderVehicle),
		PUTS_THE_FNAME_IN_THE_BAG(APlayerCameraDrone),
		PUTS_THE_FNAME_IN_THE_BAG(AFSDPawn),
		PUTS_THE_FNAME_IN_THE_BAG(ACaretaker),
		PUTS_THE_FNAME_IN_THE_BAG(AEscortMule),
		PUTS_THE_FNAME_IN_THE_BAG(ATowerModuleBase),
		PUTS_THE_FNAME_IN_THE_BAG(AAimingTowerModule),
		PUTS_THE_FNAME_IN_THE_BAG(AGuntowerModule),
		PUTS_THE_FNAME_IN_THE_BAG(AHostileGuntowerModule),
		PUTS_THE_FNAME_IN_THE_BAG(AHostileTargetingGuntowerModule),
		PUTS_THE_FNAME_IN_THE_BAG(ALMGGuntoweModule),
		PUTS_THE_FNAME_IN_THE_BAG(AHomingFireModule),
		PUTS_THE_FNAME_IN_THE_BAG(ARandomFiringGuntowerModule),
		PUTS_THE_FNAME_IN_THE_BAG(ARadialFireModule),
		PUTS_THE_FNAME_IN_THE_BAG(AGuntowerWeakPoint),
		PUTS_THE_FNAME_IN_THE_BAG(ATowerEventModule),
		PUTS_THE_FNAME_IN_THE_BAG(AAimingTowerEventModule),
		PUTS_THE_FNAME_IN_THE_BAG(AEnemyPawn),
		PUTS_THE_FNAME_IN_THE_BAG(AStabberVineRoot),
		PUTS_THE_FNAME_IN_THE_BAG(AParasiteEnemy),
		PUTS_THE_FNAME_IN_THE_BAG(AInsectSwarmSpawner),
		PUTS_THE_FNAME_IN_THE_BAG(AHydraWeedHealer),
		PUTS_THE_FNAME_IN_THE_BAG(AShootingPlant),
		PUTS_THE_FNAME_IN_THE_BAG(AHydraWeedShooter),
		PUTS_THE_FNAME_IN_THE_BAG(AHydraWeedCore),
		PUTS_THE_FNAME_IN_THE_BAG(AFacilityTurret),
		PUTS_THE_FNAME_IN_THE_BAG(ASpinningFacilityturret),
		PUTS_THE_FNAME_IN_THE_BAG(AAimingFacilityTurret),
		PUTS_THE_FNAME_IN_THE_BAG(ATentacleBase),
		PUTS_THE_FNAME_IN_THE_BAG(AFacilityTentacle),
		PUTS_THE_FNAME_IN_THE_BAG(AStabberVine),
		PUTS_THE_FNAME_IN_THE_BAG(ATerminatorTentacle),
		PUTS_THE_FNAME_IN_THE_BAG(ACaveLeech),
		PUTS_THE_FNAME_IN_THE_BAG(AEnemyDeepPathfinderCharacter),
		PUTS_THE_FNAME_IN_THE_BAG(AAFlyingBug),
		PUTS_THE_FNAME_IN_THE_BAG(ABomber),
		PUTS_THE_FNAME_IN_THE_BAG(AFlyingLifter),
		PUTS_THE_FNAME_IN_THE_BAG(AJellyBreeder),
		PUTS_THE_FNAME_IN_THE_BAG(AConvertedRobot),
		PUTS_THE_FNAME_IN_THE_BAG(AFlyingEnemyDeepPathfinderCharacter),
		PUTS_THE_FNAME_IN_THE_BAG(AFriendlyParasite),
		PUTS_THE_FNAME_IN_THE_BAG(AHalloweenSkull),
		PUTS_THE_FNAME_IN_THE_BAG(AInsectSwarmEnemy),
		PUTS_THE_FNAME_IN_THE_BAG(APatrolBot),
		PUTS_THE_FNAME_IN_THE_BAG(APlagueWorm),
		PUTS_THE_FNAME_IN_THE_BAG(AProspectorRobot),
		PUTS_THE_FNAME_IN_THE_BAG(ASharkEnemy),
		PUTS_THE_FNAME_IN_THE_BAG(AShredder),
		PUTS_THE_FNAME_IN_THE_BAG(ASpiderEnemy),
		PUTS_THE_FNAME_IN_THE_BAG(ATerminatorEnemy),
		PUTS_THE_FNAME_IN_THE_BAG(AWoodLouse),
		PUTS_THE_FNAME_IN_THE_BAG(ABosco),
		PUTS_THE_FNAME_IN_THE_BAG(ABP_Bosco_C),
		PUTS_THE_FNAME_IN_THE_BAG(ACaveWorm),
		PUTS_THE_FNAME_IN_THE_BAG(AMaggot),
		PUTS_THE_FNAME_IN_THE_BAG(ADroneBase),
		PUTS_THE_FNAME_IN_THE_BAG(ADroneCharacter),
		PUTS_THE_FNAME_IN_THE_BAG(AMULE),
		PUTS_THE_FNAME_IN_THE_BAG(AMolly),
		PUTS_THE_FNAME_IN_THE_BAG(ABP_Donkey_C),
		PUTS_THE_FNAME_IN_THE_BAG(AMiniMule),
		PUTS_THE_FNAME_IN_THE_BAG(ARecallableActor),
		PUTS_THE_FNAME_IN_THE_BAG(ARecallableSentryGun),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_AssaultRifle_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Autocannon_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_BurstPistol_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_ChargeBlaster_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_CoilGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_CombatShotgun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Crossbow_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Cryospray_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_DetPack_Detonator_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_DetPack_Detonator_Driller_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_DoubleDrills_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_DualMPs_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_FlameThrower_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_FlareGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_FuelLine_Builder_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Gatling_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_GrapplingGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_GrenadeLauncher_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_HeavyParticleCannon_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_LineCutter_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_LockOnRifle_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_M1000_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_MicroMissileLauncher_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_MicrowaveGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Pickaxe_Driller_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Pickaxe_Engineer_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Pickaxe_Gunner_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Pickaxe_Scout_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Pistol_A_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_PlasmaCarbine_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_PlatformGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_RecallableSentryGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_Revolver_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_SawedOffShotgun_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_ShieldRegeneratorItem_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_SMG_OneHand_C),
		PUTS_THE_FNAME_IN_THE_BAG(WPN_ZipLineGun_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_JellyBreeder_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Butterfly_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Guard_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Bomber_Fire_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FlyingCritterBase_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Guard_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Spitter_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTurret_Spinning_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_ExploderTank_Ghost_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Guard_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTurret_Burst_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Drone_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_Ground_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Exploding_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Amber_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_HydraWeed_Core_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_JellyBreeder_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Amber_Shooter_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Jelly_Passive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_TwinA_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_ShootingPlant_Small_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Jelly_Swarmer_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Prospector_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTentacle_End_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Rock_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_ExploderTank_King_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Harvester_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Exploding_Rockpox_Plague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Bomber_Rockpox_Plague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_ShieldTank_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTurret_Sniper_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Swarmer_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_RapidShooter_Elite_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Bomber_Child_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Charger_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Swarmer_Pheromoned_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_PlagueLarva_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Jelly_Swarmer_Child_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Jelly_Spawn_Child_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTentacle_Burrowing_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_SpiderSpawner_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_Normal_Elite_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Exploding_Warning_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Grabber_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_HeavySpawn_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_BoughWasp_Nest_Medium2_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Attacker_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Shredder_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_RapidShooter_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Generic_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_BoughWasp_Nest_Medium_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_TwinBase_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_BoughWasp_Swarm_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Exploding_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_LootBug_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Mactera_TripleShooter_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_TerminatorTentacle_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_LootBug_Gold_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Rock_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Terminator_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Attacker_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_Rockpox_Plague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_TwinB_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_ExploderTank_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Boss_Heavy_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_GliderBeast_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Flea_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Attacker_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_ElectricPlantVThree_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_Boss_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Radioactive_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Stinger_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_PF_SpiderBase_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Spawn_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_Red1_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_StabberVines2_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Swarmer_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Buffer_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Mactera_Shooter_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Swarmer_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_ShootingPlant_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Parasite_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Mactera_Amber_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_InsectSwarm_Spawner_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Woodlouse_Youngling_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Bomber_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_BoughWasp_Nest_Medium3_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Bomber_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_SmallShootingPlant_RegenPod_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Shredder_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_StabberVine_Tentacle_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_InfestationLarva_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Woodlouse_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Shark_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FlyingSmartRock_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_EnemySpawner_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Exploding_Warning_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_Ice_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTurret_Barrier_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTentacle_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Jelly_Passive_Mother_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_InsectSwarm_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_Azure_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_Queen_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_JellyBreeder_RockpoxPlague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_WalkingPlagueheart_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Hoarder_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_StabberVines_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Tank_RockpoxPlague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityCaretaker_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_InfectedMule_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Mactera_Shooter_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_HollowBough_Grub_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Shooter_Normal_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Grunt_RockpoxPlague_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_CaveLeech_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_FacilityTurret_Base_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_Green1_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Maggot_SplineTrail_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Mactera_Shooter_HeavyVeteran_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_PlagueShark_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Lobber_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_PatrolBot_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_PatrolBot_Caretaker_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_SpiderBase_Large_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_BoughWasp_Nest_Small_C),
		PUTS_THE_FNAME_IN_THE_BAG(ENE_Spider_Lobber_Base_C),
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
#undef PUTS_THE_FNAME_IN_THE_BAG

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