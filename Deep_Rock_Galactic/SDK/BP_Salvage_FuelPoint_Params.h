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
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.SolveTooCloseToInvalidator
	 */
	struct ABP_Salvage_FuelPoint_C_SolveTooCloseToInvalidator_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.CheckIfCloseToInvalidators
	 */
	struct ABP_Salvage_FuelPoint_C_CheckIfCloseToInvalidators_Params
	{
	public:
		bool                                                       IsClose;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G96T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
	 */
	struct ABP_Salvage_FuelPoint_C_EnableRepair_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
	 */
	struct ABP_Salvage_FuelPoint_C_OnDefenseStart_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
	 */
	struct ABP_Salvage_FuelPoint_C_OnDefenseComplete_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
	 */
	struct ABP_Salvage_FuelPoint_C_OnDefenseFail_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.Call In Pod
	 */
	struct ABP_Salvage_FuelPoint_C_CallInPod_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ReceiveBeginPlay
	 */
	struct ABP_Salvage_FuelPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
	 */
	struct ABP_Salvage_FuelPoint_C_ExecuteUbergraph_BP_Salvage_FuelPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
