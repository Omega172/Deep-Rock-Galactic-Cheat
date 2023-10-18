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
	 * Function BP_OxygenTank.BP_OxygenTank_C.ReceiveBeginPlay
	 */
	struct ABP_OxygenTank_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OxygenTank.BP_OxygenTank_C.OnOxygenActivationChanged_Event_1
	 */
	struct ABP_OxygenTank_C_OnOxygenActivationChanged_Event_1_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OxygenTank.BP_OxygenTank_C.ExecuteUbergraph_BP_OxygenTank
	 */
	struct ABP_OxygenTank_C_ExecuteUbergraph_BP_OxygenTank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
