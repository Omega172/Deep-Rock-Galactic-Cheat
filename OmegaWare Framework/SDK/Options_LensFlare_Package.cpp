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
	 * 		Name   -> Function Options_LensFlare.Options_LensFlare_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_LensFlare_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_LensFlare.Options_LensFlare_C.Construct");
		
		UOptions_LensFlare_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_LensFlare.Options_LensFlare_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_LensFlare_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_LensFlare.Options_LensFlare_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");
		
		UOptions_LensFlare_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_LensFlare.Options_LensFlare_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_LensFlare_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_LensFlare.Options_LensFlare_C.ShowOptions");
		
		UOptions_LensFlare_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_LensFlare.Options_LensFlare_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_LensFlare_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_LensFlare.Options_LensFlare_C.UINeedsUpdate");
		
		UOptions_LensFlare_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_LensFlare.Options_LensFlare_C.ExecuteUbergraph_Options_LensFlare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_LensFlare_C::ExecuteUbergraph_Options_LensFlare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_LensFlare.Options_LensFlare_C.ExecuteUbergraph_Options_LensFlare");
		
		UOptions_LensFlare_C_ExecuteUbergraph_Options_LensFlare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_LensFlare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_LensFlare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_LensFlare.Options_LensFlare_C");
		return ptr;
	}

}


