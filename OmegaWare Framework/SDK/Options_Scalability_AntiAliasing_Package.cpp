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
	 * 		Name   -> Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_AntiAliasing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.Construct");
		
		UOptions_Scalability_AntiAliasing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_AntiAliasing_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.UINeedsUpdate");
		
		UOptions_Scalability_AntiAliasing_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_AntiAliasing_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.ShowOptions");
		
		UOptions_Scalability_AntiAliasing_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Scalability_AntiAliasing_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature");
		
		UOptions_Scalability_AntiAliasing_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.ExecuteUbergraph_Options_Scalability_AntiAliasing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Scalability_AntiAliasing_C::ExecuteUbergraph_Options_Scalability_AntiAliasing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C.ExecuteUbergraph_Options_Scalability_AntiAliasing");
		
		UOptions_Scalability_AntiAliasing_C_ExecuteUbergraph_Options_Scalability_AntiAliasing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Scalability_AntiAliasing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Scalability_AntiAliasing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Scalability_AntiAliasing.Options_Scalability_AntiAliasing_C");
		return ptr;
	}

}


