#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function Grenade_WallSaw.Grenade_WallSaw_C.GetDurationBeforeExpiration
	 */
	struct AGrenade_WallSaw_C_GetDurationBeforeExpiration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_WallSaw.Grenade_WallSaw_C.AddGearStateEntries
	 */
	struct AGrenade_WallSaw_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Grenade_WallSaw.Grenade_WallSaw_C.ReceiveBeginPlay
	 */
	struct AGrenade_WallSaw_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Grenade_WallSaw.Grenade_WallSaw_C.OnExploded
	 */
	struct AGrenade_WallSaw_C_OnExploded_Params
	{	};

	/**
	 * Function Grenade_WallSaw.Grenade_WallSaw_C.ExecuteUbergraph_Grenade_WallSaw
	 */
	struct AGrenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
