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
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.UpdateMotionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_SonyInput_C::UpdateMotionVisibility(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.UpdateMotionVisibility");
		
		UOptions_SonyInput_C_UpdateMotionVisibility_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.UpdateSpeakerVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_SonyInput_C::UpdateSpeakerVisibility(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.UpdateSpeakerVisibility");
		
		UOptions_SonyInput_C_UpdateSpeakerVisibility_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.UpdateTerrainScannerVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_SonyInput_C::UpdateTerrainScannerVisibility(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.UpdateTerrainScannerVisibility");
		
		UOptions_SonyInput_C_UpdateTerrainScannerVisibility_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInput_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.Construct");
		
		UOptions_SonyInput_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_SonyInput_C::BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_SonyInput_C::BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_SonyInput_C::BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInput_C::BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInput_C::BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInput_C::BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UOptions_SonyInput_C_BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.ExecuteUbergraph_Options_SonyInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_SonyInput_C::ExecuteUbergraph_Options_SonyInput(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.ExecuteUbergraph_Options_SonyInput");
		
		UOptions_SonyInput_C_ExecuteUbergraph_Options_SonyInput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_SonyINput.Options_SonyInput_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_SonyInput_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_SonyINput.Options_SonyInput_C.SettingsChanged__DelegateSignature");
		
		UOptions_SonyInput_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_SonyInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_SonyInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_SonyINput.Options_SonyInput_C");
		return ptr;
	}

}


