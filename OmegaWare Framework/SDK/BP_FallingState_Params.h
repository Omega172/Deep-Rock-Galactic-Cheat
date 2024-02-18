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
	 * Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation
	 */
	struct UBP_FallingState_C_ShowJumpBootsActivation_Params
	{	};

	/**
	 * Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick
	 */
	struct UBP_FallingState_C_ReceiveHoverBootsTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged
	 */
	struct UBP_FallingState_C_ReceiveHoverBootsActiveChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState
	 */
	struct UBP_FallingState_C_ExecuteUbergraph_BP_FallingState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
