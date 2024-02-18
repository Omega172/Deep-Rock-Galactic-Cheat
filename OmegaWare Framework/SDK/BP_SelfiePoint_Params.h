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
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform
	 */
	struct UBP_SelfiePoint_C_GetTargetTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera
	 */
	struct UBP_SelfiePoint_C_DeactivateCamera_Params
	{	};

	/**
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera
	 */
	struct UBP_SelfiePoint_C_ActivateCamera_Params
	{	};

	/**
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay
	 */
	struct UBP_SelfiePoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick
	 */
	struct UBP_SelfiePoint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint
	 */
	struct UBP_SelfiePoint_C_ExecuteUbergraph_BP_SelfiePoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BBIC[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
