/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.GetMicAmplitudeSliderTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UOptions_InputAudioSource_C::GetMicAmplitudeSliderTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.GetMicAmplitudeSliderTooltip");
		
		UOptions_InputAudioSource_C_GetMicAmplitudeSliderTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.FillAudioDevices
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::FillAudioDevices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.FillAudioDevices");
		
		UOptions_InputAudioSource_C_FillAudioDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.Construct");
		
		UOptions_InputAudioSource_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.UINeedsUpdate");
		
		UOptions_InputAudioSource_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.ShowOptions");
		
		UOptions_InputAudioSource_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_InputAudioSource_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UOptions_InputAudioSource_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.CheckForNewDevices
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::CheckForNewDevices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.CheckForNewDevices");
		
		UOptions_InputAudioSource_C_CheckForNewDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.Destruct");
		
		UOptions_InputAudioSource_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_InputAudioSource_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.Tick");
		
		UOptions_InputAudioSource_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.ReenableSlider
	 * 		Flags  -> ()
	 */
	void UOptions_InputAudioSource_C::ReenableSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.ReenableSlider");
		
		UOptions_InputAudioSource_C_ReenableSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_InputAudioSource.Options_InputAudioSource_C.ExecuteUbergraph_Options_InputAudioSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_InputAudioSource_C::ExecuteUbergraph_Options_InputAudioSource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_InputAudioSource.Options_InputAudioSource_C.ExecuteUbergraph_Options_InputAudioSource");
		
		UOptions_InputAudioSource_C_ExecuteUbergraph_Options_InputAudioSource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_InputAudioSource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_InputAudioSource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_InputAudioSource.Options_InputAudioSource_C");
		return ptr;
	}

}


