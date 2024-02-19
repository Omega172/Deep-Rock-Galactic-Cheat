#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.AddGearStateEntries
	 */
	struct AGrenade_Friendly_Shredders_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnRep_ParticleRandomSeed
	 */
	struct AGrenade_Friendly_Shredders_C_OnRep_ParticleRandomSeed_Params
	{	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.UserConstructionScript
	 */
	struct AGrenade_Friendly_Shredders_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnExploded
	 */
	struct AGrenade_Friendly_Shredders_C_OnExploded_Params
	{	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveParticleData
	 */
	struct AGrenade_Friendly_Shredders_C_ReceiveParticleData_Params
	{
	public:
		TArray<struct FBasicParticleData>                          Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UNiagaraSystem*                                      NiagaraSystem;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveBeginPlay
	 */
	struct AGrenade_Friendly_Shredders_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnDeathShredder
	 */
	struct AGrenade_Friendly_Shredders_C_OnDeathShredder_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.KillOtherGrenades
	 */
	struct AGrenade_Friendly_Shredders_C_KillOtherGrenades_Params
	{	};

	/**
	 * Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ExecuteUbergraph_Grenade_Friendly_Shredders
	 */
	struct AGrenade_Friendly_Shredders_C_ExecuteUbergraph_Grenade_Friendly_Shredders_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
