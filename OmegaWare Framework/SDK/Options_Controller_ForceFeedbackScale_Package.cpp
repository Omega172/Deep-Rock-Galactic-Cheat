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
	 * 		Name   -> Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Controller_ForceFeedbackScale_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.Construct");
		
		UOptions_Controller_ForceFeedbackScale_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Controller_ForceFeedbackScale_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.UINeedsUpdate");
		
		UOptions_Controller_ForceFeedbackScale_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Controller_ForceFeedbackScale_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ShowOptions");
		
		UOptions_Controller_ForceFeedbackScale_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Controller_ForceFeedbackScale_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UOptions_Controller_ForceFeedbackScale_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ExecuteUbergraph_Options_Controller_ForceFeedbackScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Controller_ForceFeedbackScale_C::ExecuteUbergraph_Options_Controller_ForceFeedbackScale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ExecuteUbergraph_Options_Controller_ForceFeedbackScale");
		
		UOptions_Controller_ForceFeedbackScale_C_ExecuteUbergraph_Options_Controller_ForceFeedbackScale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Controller_ForceFeedbackScale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Controller_ForceFeedbackScale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C");
		return ptr;
	}

}


