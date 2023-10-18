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
	 * 		Name   -> Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_PreventLatejoinCharacterDuplication_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct");
		
		UOptions_PreventLatejoinCharacterDuplication_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_PreventLatejoinCharacterDuplication_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
		
		UOptions_PreventLatejoinCharacterDuplication_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged
	 * 		Flags  -> ()
	 */
	void UOptions_PreventLatejoinCharacterDuplication_C::OnGameUserSettingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged");
		
		UOptions_PreventLatejoinCharacterDuplication_C_OnGameUserSettingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_PreventLatejoinCharacterDuplication_C::ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication");
		
		UOptions_PreventLatejoinCharacterDuplication_C_ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_PreventLatejoinCharacterDuplication_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_PreventLatejoinCharacterDuplication_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C");
		return ptr;
	}

}


