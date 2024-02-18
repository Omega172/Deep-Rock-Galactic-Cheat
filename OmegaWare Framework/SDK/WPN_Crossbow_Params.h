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
	 * Function WPN_Crossbow.WPN_Crossbow_C.Get Reload Stat
	 */
	struct AWPN_Crossbow_C_GetReloadStat_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGearStatEntry                                      GearStatEntry;                                           // 0x0008(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.GetEquippedSpecialArrow
	 */
	struct AWPN_Crossbow_C_GetEquippedSpecialArrow_Params
	{
	public:
		class AFSDPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Projectile;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.GetGearStatEntry
	 */
	struct AWPN_Crossbow_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.ReceiveBeginPlay
	 */
	struct AWPN_Crossbow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.UpdateRecallProgress
	 */
	struct AWPN_Crossbow_C_UpdateRecallProgress_Params
	{	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedFPMeshComponentFromBP
	 */
	struct AWPN_Crossbow_C_SetAnimatedFPMeshComponentFromBP_Params
	{
	public:
		class AActor*                                              animatedArrow;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedTPMeshComponentFromBP
	 */
	struct AWPN_Crossbow_C_SetAnimatedTPMeshComponentFromBP_Params
	{
	public:
		class AActor*                                              animatedArrow;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Crossbow.WPN_Crossbow_C.ExecuteUbergraph_WPN_Crossbow
	 */
	struct AWPN_Crossbow_C_ExecuteUbergraph_WPN_Crossbow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQ3V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
