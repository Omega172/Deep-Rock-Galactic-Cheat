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
	 * 		Name   -> Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Ctrl_InvertMouse_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.Construct");
		
		UOptions_Ctrl_InvertMouse_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Ctrl_InvertMouse_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.UINeedsUpdate");
		
		UOptions_Ctrl_InvertMouse_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Ctrl_InvertMouse_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ShowOptions");
		
		UOptions_Ctrl_InvertMouse_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Ctrl_InvertMouse_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UOptions_Ctrl_InvertMouse_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ExecuteUbergraph_Options_Ctrl_InvertMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Ctrl_InvertMouse_C::ExecuteUbergraph_Options_Ctrl_InvertMouse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ExecuteUbergraph_Options_Ctrl_InvertMouse");
		
		UOptions_Ctrl_InvertMouse_C_ExecuteUbergraph_Options_Ctrl_InvertMouse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Ctrl_InvertMouse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Ctrl_InvertMouse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C");
		return ptr;
	}

}


