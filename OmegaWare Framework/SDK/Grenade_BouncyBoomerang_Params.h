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
	 * Function Grenade_BouncyBoomerang.Grenade_BouncyBoomerang_C.GetGearStatEntry
	 */
	struct AGrenade_BouncyBoomerang_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Grenade_BouncyBoomerang.Grenade_BouncyBoomerang_C.ReceiveTick
	 */
	struct AGrenade_BouncyBoomerang_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_BouncyBoomerang.Grenade_BouncyBoomerang_C.OnExploded
	 */
	struct AGrenade_BouncyBoomerang_C_OnExploded_Params
	{	};

	/**
	 * Function Grenade_BouncyBoomerang.Grenade_BouncyBoomerang_C.ReceiveBeginPlay
	 */
	struct AGrenade_BouncyBoomerang_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Grenade_BouncyBoomerang.Grenade_BouncyBoomerang_C.ExecuteUbergraph_Grenade_BouncyBoomerang
	 */
	struct AGrenade_BouncyBoomerang_C_ExecuteUbergraph_Grenade_BouncyBoomerang_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
