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
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial
	 */
	struct ABP_BoscoStateDisplay_C_SetMaterial_Params
	{
	public:
		class UMaterialInstance*                                   NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState
	 */
	struct ABP_BoscoStateDisplay_C_SetState_Params
	{
	public:
		EDroneAIState                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BWTO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay
	 */
	struct ABP_BoscoStateDisplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.FollowTargetChanged
	 */
	struct ABP_BoscoStateDisplay_C_FollowTargetChanged_Params
	{
	public:
		class AActor*                                              FollowTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetupFollowtargetDelegate
	 */
	struct ABP_BoscoStateDisplay_C_SetupFollowtargetDelegate_Params
	{
	public:
		class ABoscoController*                                    NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay
	 */
	struct ABP_BoscoStateDisplay_C_ExecuteUbergraph_BP_BoscoStateDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
