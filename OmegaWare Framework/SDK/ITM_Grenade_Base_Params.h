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
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetGearStatEntry
	 */
	struct AITM_Grenade_Base_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetCooldownTime
	 */
	struct AITM_Grenade_Base_C_GetCooldownTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.AddGearStateEntries
	 */
	struct AITM_Grenade_Base_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.ReceiveBeginPlay
	 */
	struct AITM_Grenade_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnExploded
	 */
	struct AITM_Grenade_Base_C_OnExploded_Params
	{	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnBeginPlay
	 */
	struct AITM_Grenade_Base_C_OnBeginPlay_Params
	{	};

	/**
	 * Function ITM_Grenade_Base.ITM_Grenade_Base_C.ExecuteUbergraph_ITM_Grenade_Base
	 */
	struct AITM_Grenade_Base_C_ExecuteUbergraph_ITM_Grenade_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUWB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
