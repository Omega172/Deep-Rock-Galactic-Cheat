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
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WarningAndMutator_C::Update(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update");
		
		UITM_WarningAndMutator_C_Update_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.OnClicked_Even_Warning
	 * 		Flags  -> ()
	 */
	void UITM_WarningAndMutator_C::OnClicked_Even_Warning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.OnClicked_Even_Warning");
		
		UITM_WarningAndMutator_C_OnClicked_Even_Warning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.CustomEvent_Mutator
	 * 		Flags  -> ()
	 */
	void UITM_WarningAndMutator_C::CustomEvent_Mutator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.CustomEvent_Mutator");
		
		UITM_WarningAndMutator_C_CustomEvent_Mutator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WarningAndMutator_C::ExecuteUbergraph_ITM_WarningAndMutator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator");
		
		UITM_WarningAndMutator_C_ExecuteUbergraph_ITM_WarningAndMutator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_WarningAndMutator_C::MutatorClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature");
		
		UITM_WarningAndMutator_C_MutatorClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_WarningAndMutator_C::WarningClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature");
		
		UITM_WarningAndMutator_C_WarningClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_WarningAndMutator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_WarningAndMutator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_WarningAndMutator.ITM_WarningAndMutator_C");
		return ptr;
	}

}


