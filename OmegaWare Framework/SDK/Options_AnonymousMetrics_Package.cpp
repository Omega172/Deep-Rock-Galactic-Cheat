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
	 * 		Name   -> Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_AnonymousMetrics_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct");
		
		UOptions_AnonymousMetrics_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_AnonymousMetrics_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
		
		UOptions_AnonymousMetrics_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowAnonymousMetrics                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_AnonymousMetrics_C::OnAnonymousMetricsChanged(bool AllowAnonymousMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged");
		
		UOptions_AnonymousMetrics_C_OnAnonymousMetricsChanged_Params params {};
		params.AllowAnonymousMetrics = AllowAnonymousMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_AnonymousMetrics_C::ExecuteUbergraph_Options_AnonymousMetrics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics");
		
		UOptions_AnonymousMetrics_C_ExecuteUbergraph_Options_AnonymousMetrics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_AnonymousMetrics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_AnonymousMetrics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_AnonymousMetrics.Options_AnonymousMetrics_C");
		return ptr;
	}

}


