﻿/**
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
	 * 		Name   -> Function ABP_Gatling.ABP_Gatling_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Gatling_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.AnimGraph");
		
		UABP_Gatling_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C
	 * 		Flags  -> ()
	 */
	void UABP_Gatling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C");
		
		UABP_Gatling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Gatling_C::ExecuteUbergraph_ABP_Gatling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling");
		
		UABP_Gatling_C_ExecuteUbergraph_ABP_Gatling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Gatling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Gatling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Gatling.ABP_Gatling_C");
		return ptr;
	}

}


