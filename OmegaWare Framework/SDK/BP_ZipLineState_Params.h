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
	 * Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
	 */
	struct UBP_ZipLineState_C_GetJumpVector_Params
	{
	public:
		struct FVector                                             LookVector;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentVelocity;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated
	 */
	struct UBP_ZipLineState_C_ReceiveSpeedBoostActivated_Params
	{	};

	/**
	 * Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated
	 */
	struct UBP_ZipLineState_C_ReceiveSpeedBoostDeactivated_Params
	{	};

	/**
	 * Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState
	 */
	struct UBP_ZipLineState_C_ExecuteUbergraph_BP_ZipLineState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J8ZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
