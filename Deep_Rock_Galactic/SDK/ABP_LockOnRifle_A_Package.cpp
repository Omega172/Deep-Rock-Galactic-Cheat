/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_LockOnRifle_A_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.AnimGraph");
		
		UABP_LockOnRifle_A_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetHasLockedTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasLockedTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_LockOnRifle_A_C::SetHasLockedTarget(bool HasLockedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetHasLockedTarget");
		
		UABP_LockOnRifle_A_C_SetHasLockedTarget_Params params {};
		params.HasLockedTarget = HasLockedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    WorldRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_LockOnRifle_A_C::SetRotation(const struct FRotator& WorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.SetRotation");
		
		UABP_LockOnRifle_A_C_SetRotation_Params params {};
		params.WorldRotation = WorldRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206
	 * 		Flags  -> ()
	 */
	void UABP_LockOnRifle_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206");
		
		UABP_LockOnRifle_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_LockOnRifle_A_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.BlueprintBeginPlay");
		
		UABP_LockOnRifle_A_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.OnRotationUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               hasTargetLockon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    socketRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_LockOnRifle_A_C::OnRotationUpdated(bool hasTargetLockon, const struct FRotator& socketRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.OnRotationUpdated");
		
		UABP_LockOnRifle_A_C_OnRotationUpdated_Params params {};
		params.hasTargetLockon = hasTargetLockon;
		params.socketRotation = socketRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.ExecuteUbergraph_ABP_LockOnRifle_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_LockOnRifle_A_C::ExecuteUbergraph_ABP_LockOnRifle_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockOnRifle_A.ABP_LockOnRifle_A_C.ExecuteUbergraph_ABP_LockOnRifle_A");
		
		UABP_LockOnRifle_A_C_ExecuteUbergraph_ABP_LockOnRifle_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_LockOnRifle_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_LockOnRifle_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LockOnRifle_A.ABP_LockOnRifle_A_C");
		return ptr;
	}

}


