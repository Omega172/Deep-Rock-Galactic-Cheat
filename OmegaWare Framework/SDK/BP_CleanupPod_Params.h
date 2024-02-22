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
	 * Function BP_CleanupPod.BP_CleanupPod_C.ReceiveBeginPlay
	 */
	struct ABP_CleanupPod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodImpact
	 */
	struct ABP_CleanupPod_C_OnDroppodImpact_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodCloseToImpact
	 */
	struct ABP_CleanupPod_C_OnDroppodCloseToImpact_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.ResizeCarver
	 */
	struct ABP_CleanupPod_C_ResizeCarver_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.OnDropStarted
	 */
	struct ABP_CleanupPod_C_OnDropStarted_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.FinishTutorialTask
	 */
	struct ABP_CleanupPod_C_FinishTutorialTask_Params
	{	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.OnObjectiveChanged
	 */
	struct ABP_CleanupPod_C_OnObjectiveChanged_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CleanupPod.BP_CleanupPod_C.ExecuteUbergraph_BP_CleanupPod
	 */
	struct ABP_CleanupPod_C_ExecuteUbergraph_BP_CleanupPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XDC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
