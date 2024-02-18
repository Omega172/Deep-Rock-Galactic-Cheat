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
	 * 		Name   -> Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_HUD_ElementPresetItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.PreConstruct");
		
		UOptions_HUD_ElementPresetItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_HUD_ElementPresetItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UOptions_HUD_ElementPresetItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.ExecuteUbergraph_Options_HUD_ElementPresetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_HUD_ElementPresetItem_C::ExecuteUbergraph_Options_HUD_ElementPresetItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.ExecuteUbergraph_Options_HUD_ElementPresetItem");
		
		UOptions_HUD_ElementPresetItem_C_ExecuteUbergraph_Options_HUD_ElementPresetItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_HUD_ElementPresetItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_HUD_ElementPresetItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C");
		return ptr;
	}

}


