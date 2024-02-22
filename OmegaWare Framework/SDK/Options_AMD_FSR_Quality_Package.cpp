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
	 * 		Name   -> Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_AMD_FSR_Quality_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.Construct");
		
		UOptions_AMD_FSR_Quality_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_AMD_FSR_Quality_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.UINeedsUpdate");
		
		UOptions_AMD_FSR_Quality_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_AMD_FSR_Quality_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.ShowOptions");
		
		UOptions_AMD_FSR_Quality_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.BndEvt__Options_AMD_FSR_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_AMD_FSR_Quality_C::BndEvt__Options_AMD_FSR_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.BndEvt__Options_AMD_FSR_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");
		
		UOptions_AMD_FSR_Quality_C_BndEvt__Options_AMD_FSR_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.ExecuteUbergraph_Options_AMD_FSR_Quality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_AMD_FSR_Quality_C::ExecuteUbergraph_Options_AMD_FSR_Quality(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C.ExecuteUbergraph_Options_AMD_FSR_Quality");
		
		UOptions_AMD_FSR_Quality_C_ExecuteUbergraph_Options_AMD_FSR_Quality_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_AMD_FSR_Quality_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_AMD_FSR_Quality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_AMD_FSR_Quality.Options_AMD_FSR_Quality_C");
		return ptr;
	}

}


