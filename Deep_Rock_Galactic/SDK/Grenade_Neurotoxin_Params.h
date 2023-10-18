#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.AddGearStateEntries
	 */
	struct AGrenade_Neurotoxin_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.OnExploded
	 */
	struct AGrenade_Neurotoxin_C_OnExploded_Params
	{	};

	/**
	 * Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.ExecuteUbergraph_Grenade_Neurotoxin
	 */
	struct AGrenade_Neurotoxin_C_ExecuteUbergraph_Grenade_Neurotoxin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
