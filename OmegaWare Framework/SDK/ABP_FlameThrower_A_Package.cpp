/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FlameThrower_A_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.AnimGraph");
		
		UABP_FlameThrower_A_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8
	 * 		Flags  -> ()
	 */
	void UABP_FlameThrower_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8");
		
		UABP_FlameThrower_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.ExecuteUbergraph_ABP_FlameThrower_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FlameThrower_A_C::ExecuteUbergraph_ABP_FlameThrower_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.ExecuteUbergraph_ABP_FlameThrower_A");
		
		UABP_FlameThrower_A_C_ExecuteUbergraph_ABP_FlameThrower_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FlameThrower_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FlameThrower_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FlameThrower_A.ABP_FlameThrower_A_C");
		return ptr;
	}

}


