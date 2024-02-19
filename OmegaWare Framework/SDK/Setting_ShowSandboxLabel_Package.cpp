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
	 * 		Name   -> Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.Construct
	 * 		Flags  -> ()
	 */
	void USetting_ShowSandboxLabel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.Construct");
		
		USetting_ShowSandboxLabel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USetting_ShowSandboxLabel_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		USetting_ShowSandboxLabel_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USetting_ShowSandboxLabel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.PreConstruct");
		
		USetting_ShowSandboxLabel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.ExecuteUbergraph_Setting_ShowSandboxLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USetting_ShowSandboxLabel_C::ExecuteUbergraph_Setting_ShowSandboxLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C.ExecuteUbergraph_Setting_ShowSandboxLabel");
		
		USetting_ShowSandboxLabel_C_ExecuteUbergraph_Setting_ShowSandboxLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetting_ShowSandboxLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetting_ShowSandboxLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C");
		return ptr;
	}

}


