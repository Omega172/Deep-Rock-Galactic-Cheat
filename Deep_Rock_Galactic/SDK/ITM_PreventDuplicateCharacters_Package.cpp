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
	 * 		Name   -> Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_PreventDuplicateCharacters_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");
		
		UITM_PreventDuplicateCharacters_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState
	 * 		Flags  -> ()
	 */
	void UITM_PreventDuplicateCharacters_C::UpdateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState");
		
		UITM_PreventDuplicateCharacters_C_UpdateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_PreventDuplicateCharacters_C::ExecuteUbergraph_ITM_PreventDuplicateCharacters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters");
		
		UITM_PreventDuplicateCharacters_C_ExecuteUbergraph_ITM_PreventDuplicateCharacters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_PreventDuplicateCharacters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_PreventDuplicateCharacters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C");
		return ptr;
	}

}


