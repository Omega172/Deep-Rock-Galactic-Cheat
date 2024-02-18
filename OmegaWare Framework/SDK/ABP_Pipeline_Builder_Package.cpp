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
	 * 		Name   -> Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Pipeline_Builder_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.AnimGraph");
		
		UABP_Pipeline_Builder_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356
	 * 		Flags  -> ()
	 */
	void UABP_Pipeline_Builder_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356");
		
		UABP_Pipeline_Builder_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD
	 * 		Flags  -> ()
	 */
	void UABP_Pipeline_Builder_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD");
		
		UABP_Pipeline_Builder_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.ExecuteUbergraph_ABP_Pipeline_Builder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Pipeline_Builder_C::ExecuteUbergraph_ABP_Pipeline_Builder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.ExecuteUbergraph_ABP_Pipeline_Builder");
		
		UABP_Pipeline_Builder_C_ExecuteUbergraph_ABP_Pipeline_Builder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Pipeline_Builder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Pipeline_Builder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pipeline_Builder.ABP_Pipeline_Builder_C");
		return ptr;
	}

}


