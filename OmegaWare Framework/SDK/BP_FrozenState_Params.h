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
	 * Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter
	 */
	struct UBP_FrozenState_C_ReceiveStateEnter_Params
	{	};

	/**
	 * Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit
	 */
	struct UBP_FrozenState_C_ReceiveStateExit_Params
	{	};

	/**
	 * Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting
	 */
	struct UBP_FrozenState_C_ReceiveOnDefrosting_Params
	{	};

	/**
	 * Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState
	 */
	struct UBP_FrozenState_C_ExecuteUbergraph_BP_FrozenState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1WMA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
