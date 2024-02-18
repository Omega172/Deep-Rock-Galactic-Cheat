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
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.AnimGraph
	 */
	struct UABP_LockOnRifle_A_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetHasLockedTarget
	 */
	struct UABP_LockOnRifle_A_C_SetHasLockedTarget_Params
	{
	public:
		bool                                                       HasLockedTarget;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetRotation
	 */
	struct UABP_LockOnRifle_A_C_SetRotation_Params
	{
	public:
		struct FRotator                                            WorldRotation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206
	 */
	struct UABP_LockOnRifle_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206_Params
	{	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.BlueprintBeginPlay
	 */
	struct UABP_LockOnRifle_A_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.OnRotationUpdated
	 */
	struct UABP_LockOnRifle_A_C_OnRotationUpdated_Params
	{
	public:
		bool                                                       hasTargetLockon;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J4LT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            socketRotation;                                          // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.ExecuteUbergraph_ABP_LockOnRifle_A
	 */
	struct UABP_LockOnRifle_A_C_ExecuteUbergraph_ABP_LockOnRifle_A_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
