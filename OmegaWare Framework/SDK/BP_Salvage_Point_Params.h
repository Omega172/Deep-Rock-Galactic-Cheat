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
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
	 */
	struct ABP_Salvage_Point_C_SetSalvagePointState_Params
	{
	public:
		unsigned char                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
	 */
	struct ABP_Salvage_Point_C_OnRep_State_Params
	{	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
	 */
	struct ABP_Salvage_Point_C_OnDefenseComplete_Params
	{	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
	 */
	struct ABP_Salvage_Point_C_OnDefenseStart_Params
	{	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
	 */
	struct ABP_Salvage_Point_C_EnableRepair_Params
	{	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
	 */
	struct ABP_Salvage_Point_C_OnDefenseFail_Params
	{	};

	/**
	 * Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
	 */
	struct ABP_Salvage_Point_C_ExecuteUbergraph_BP_Salvage_Point_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
