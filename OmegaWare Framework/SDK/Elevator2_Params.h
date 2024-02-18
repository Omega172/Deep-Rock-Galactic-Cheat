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
	 * Function Elevator2.Elevator2_C.OnRep_GoingUp
	 */
	struct AElevator2_C_OnRep_GoingUp_Params
	{	};

	/**
	 * Function Elevator2.Elevator2_C.UserConstructionScript
	 */
	struct AElevator2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Elevator2.Elevator2_C.ReceiveTick
	 */
	struct AElevator2_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2
	 */
	struct AElevator2_C_ExecuteUbergraph_Elevator2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
