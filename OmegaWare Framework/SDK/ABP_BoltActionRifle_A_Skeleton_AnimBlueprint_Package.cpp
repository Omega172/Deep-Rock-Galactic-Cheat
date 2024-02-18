/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.AnimGraph");
		
		UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint");
		
		UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C");
		return ptr;
	}

}


