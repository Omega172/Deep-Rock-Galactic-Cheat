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
	 * 		Name   -> Function Options_PersonalMetrics.Options_PersonalMetrics_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_PersonalMetrics_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.Construct");
		
		UOptions_PersonalMetrics_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PersonalMetrics.Options_PersonalMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_PersonalMetrics_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
		
		UOptions_PersonalMetrics_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PersonalMetrics.Options_PersonalMetrics_C.OnPersonalMetricsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowPersonalMetrics                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_PersonalMetrics_C::OnPersonalMetricsChanged(bool AllowPersonalMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.OnPersonalMetricsChanged");
		
		UOptions_PersonalMetrics_C_OnPersonalMetricsChanged_Params params {};
		params.AllowPersonalMetrics = AllowPersonalMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_PersonalMetrics.Options_PersonalMetrics_C.ExecuteUbergraph_Options_PersonalMetrics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_PersonalMetrics_C::ExecuteUbergraph_Options_PersonalMetrics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.ExecuteUbergraph_Options_PersonalMetrics");
		
		UOptions_PersonalMetrics_C_ExecuteUbergraph_Options_PersonalMetrics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_PersonalMetrics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_PersonalMetrics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_PersonalMetrics.Options_PersonalMetrics_C");
		return ptr;
	}

}


