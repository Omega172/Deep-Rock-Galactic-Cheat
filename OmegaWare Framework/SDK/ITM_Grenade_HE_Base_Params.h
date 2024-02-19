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
	 * Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries
	 */
	struct AITM_Grenade_HE_Base_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.OnExploded
	 */
	struct AITM_Grenade_HE_Base_C_OnExploded_Params
	{	};

	/**
	 * Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base
	 */
	struct AITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
