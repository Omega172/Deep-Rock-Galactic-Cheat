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
	 * 		Name   -> Function Options_GFX_Gamma.Options_GFX_Gamma_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Gamma_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.Construct");
		
		UOptions_GFX_Gamma_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Gamma.Options_GFX_Gamma_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Gamma_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.UINeedsUpdate");
		
		UOptions_GFX_Gamma_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Gamma.Options_GFX_Gamma_C.ShowUI
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Gamma_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.ShowUI");
		
		UOptions_GFX_Gamma_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Gamma.Options_GFX_Gamma_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_GFX_Gamma_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");
		
		UOptions_GFX_Gamma_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Gamma.Options_GFX_Gamma_C.ExecuteUbergraph_Options_GFX_Gamma
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_GFX_Gamma_C::ExecuteUbergraph_Options_GFX_Gamma(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.ExecuteUbergraph_Options_GFX_Gamma");
		
		UOptions_GFX_Gamma_C_ExecuteUbergraph_Options_GFX_Gamma_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_GFX_Gamma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_GFX_Gamma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_GFX_Gamma.Options_GFX_Gamma_C");
		return ptr;
	}

}


