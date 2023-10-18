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
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_MicrowaveGun_A_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.AnimGraph");
		
		UABP_MicrowaveGun_A_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581
	 * 		Flags  -> ()
	 */
	void UABP_MicrowaveGun_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581");
		
		UABP_MicrowaveGun_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA
	 * 		Flags  -> ()
	 */
	void UABP_MicrowaveGun_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA");
		
		UABP_MicrowaveGun_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6
	 * 		Flags  -> ()
	 */
	void UABP_MicrowaveGun_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6");
		
		UABP_MicrowaveGun_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_MicrowaveGun_A_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.BlueprintUpdateAnimation");
		
		UABP_MicrowaveGun_A_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.AnimNotify_StartCharacterOverheat
	 * 		Flags  -> ()
	 */
	void UABP_MicrowaveGun_A_C::AnimNotify_StartCharacterOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.AnimNotify_StartCharacterOverheat");
		
		UABP_MicrowaveGun_A_C_AnimNotify_StartCharacterOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.ExecuteUbergraph_ABP_MicrowaveGun_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_MicrowaveGun_A_C::ExecuteUbergraph_ABP_MicrowaveGun_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.ExecuteUbergraph_ABP_MicrowaveGun_A");
		
		UABP_MicrowaveGun_A_C_ExecuteUbergraph_ABP_MicrowaveGun_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.OnStartCharacterOverheat__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UABP_MicrowaveGun_A_C::OnStartCharacterOverheat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C.OnStartCharacterOverheat__DelegateSignature");
		
		UABP_MicrowaveGun_A_C_OnStartCharacterOverheat__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_MicrowaveGun_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_MicrowaveGun_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C");
		return ptr;
	}

}


