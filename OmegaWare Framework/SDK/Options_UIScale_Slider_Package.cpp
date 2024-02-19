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
	 * 		Name   -> Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_UIScale_Slider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct");
		
		UOptions_UIScale_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_UIScale_Slider_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");
		
		UOptions_UIScale_Slider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_UIScale_Slider_C::ExecuteUbergraph_Options_UIScale_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider");
		
		UOptions_UIScale_Slider_C_ExecuteUbergraph_Options_UIScale_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_UIScale_Slider_C::OnVolumeChanged__DelegateSignature(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature");
		
		UOptions_UIScale_Slider_C_OnVolumeChanged__DelegateSignature_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_UIScale_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_UIScale_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_UIScale_Slider.Options_UIScale_Slider_C");
		return ptr;
	}

}


