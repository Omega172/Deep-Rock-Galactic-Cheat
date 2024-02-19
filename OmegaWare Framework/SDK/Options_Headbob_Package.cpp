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
	 * 		Name   -> Function Options_Headbob.Options_Headbob_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Headbob_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.Construct");
		
		UOptions_Headbob_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Headbob.Options_Headbob_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Headbob_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.UINeedsUpdate");
		
		UOptions_Headbob_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Headbob.Options_Headbob_C.ShowUI
	 * 		Flags  -> ()
	 */
	void UOptions_Headbob_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.ShowUI");
		
		UOptions_Headbob_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Headbob.Options_Headbob_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Headbob_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature");
		
		UOptions_Headbob_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Headbob.Options_Headbob_C.ExecuteUbergraph_Options_Headbob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Headbob_C::ExecuteUbergraph_Options_Headbob(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.ExecuteUbergraph_Options_Headbob");
		
		UOptions_Headbob_C_ExecuteUbergraph_Options_Headbob_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Headbob_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Headbob_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Headbob.Options_Headbob_C");
		return ptr;
	}

}


