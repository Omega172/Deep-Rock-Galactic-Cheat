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
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Console_QualitySetting_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.Construct");
		
		UOptions_Console_QualitySetting_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Console_QualitySetting_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.UINeedsUpdate");
		
		UOptions_Console_QualitySetting_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Console_QualitySetting_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");
		
		UOptions_Console_QualitySetting_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Console_QualitySetting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.PreConstruct");
		
		UOptions_Console_QualitySetting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Console_QualitySetting_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.ShowOptions");
		
		UOptions_Console_QualitySetting_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.ExecuteUbergraph_Options_Console_QualitySetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Console_QualitySetting_C::ExecuteUbergraph_Options_Console_QualitySetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Console_QualitySetting.Options_Console_QualitySetting_C.ExecuteUbergraph_Options_Console_QualitySetting");
		
		UOptions_Console_QualitySetting_C_ExecuteUbergraph_Options_Console_QualitySetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Console_QualitySetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Console_QualitySetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Console_QualitySetting.Options_Console_QualitySetting_C");
		return ptr;
	}

}


