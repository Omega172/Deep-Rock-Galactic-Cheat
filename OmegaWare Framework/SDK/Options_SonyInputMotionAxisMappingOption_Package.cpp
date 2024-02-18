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
	 * 		Name   -> Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInputMotionAxisMappingOption_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.Construct");
		
		UOptions_SonyInputMotionAxisMappingOption_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInputMotionAxisMappingOption_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.UINeedsUpdate");
		
		UOptions_SonyInputMotionAxisMappingOption_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ShowUI
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInputMotionAxisMappingOption_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ShowUI");
		
		UOptions_SonyInputMotionAxisMappingOption_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_SonyInputMotionAxisMappingOption_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature");
		
		UOptions_SonyInputMotionAxisMappingOption_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_SonyInputMotionAxisMappingOption_C::ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption");
		
		UOptions_SonyInputMotionAxisMappingOption_C_ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_SonyInputMotionAxisMappingOption_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_SonyInputMotionAxisMappingOption_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C");
		return ptr;
	}

}


