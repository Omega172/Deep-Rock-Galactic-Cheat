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
	 * 		Name   -> Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_ResolutioScale_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.Construct");
		
		UOptions_Scalability_ResolutioScale_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_ResolutioScale_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.UINeedsUpdate");
		
		UOptions_Scalability_ResolutioScale_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ShowUI
	 * 		Flags  -> ()
	 */
	void UOptions_Scalability_ResolutioScale_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ShowUI");
		
		UOptions_Scalability_ResolutioScale_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Scalability_ResolutioScale_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");
		
		UOptions_Scalability_ResolutioScale_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ExecuteUbergraph_Options_Scalability_ResolutioScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Scalability_ResolutioScale_C::ExecuteUbergraph_Options_Scalability_ResolutioScale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ExecuteUbergraph_Options_Scalability_ResolutioScale");
		
		UOptions_Scalability_ResolutioScale_C_ExecuteUbergraph_Options_Scalability_ResolutioScale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Scalability_ResolutioScale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Scalability_ResolutioScale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C");
		return ptr;
	}

}


