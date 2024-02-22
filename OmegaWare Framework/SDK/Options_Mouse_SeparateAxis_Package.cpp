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
	 * 		Name   -> Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Mouse_SeparateAxis_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.Construct");
		
		UOptions_Mouse_SeparateAxis_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Mouse_SeparateAxis_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.UINeedsUpdate");
		
		UOptions_Mouse_SeparateAxis_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Mouse_SeparateAxis_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ShowOptions");
		
		UOptions_Mouse_SeparateAxis_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Mouse_SeparateAxis_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UOptions_Mouse_SeparateAxis_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ExecuteUbergraph_Options_Mouse_SeparateAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Mouse_SeparateAxis_C::ExecuteUbergraph_Options_Mouse_SeparateAxis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ExecuteUbergraph_Options_Mouse_SeparateAxis");
		
		UOptions_Mouse_SeparateAxis_C_ExecuteUbergraph_Options_Mouse_SeparateAxis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Mouse_SeparateAxis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Mouse_SeparateAxis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C");
		return ptr;
	}

}


