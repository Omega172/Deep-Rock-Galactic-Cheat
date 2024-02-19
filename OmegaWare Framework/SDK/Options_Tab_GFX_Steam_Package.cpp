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
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.Construct");
		
		UOptions_Tab_GFX_Steam_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.UINeedsUpdate");
		
		UOptions_Tab_GFX_Steam_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.ShowOptions");
		
		UOptions_Tab_GFX_Steam_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.GraphicsOptionsChanged
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::GraphicsOptionsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.GraphicsOptionsChanged");
		
		UOptions_Tab_GFX_Steam_C_GraphicsOptionsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");
		
		UOptions_Tab_GFX_Steam_C_BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.OnDx12Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Tab_GFX_Steam_C::OnDx12Enabled(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.OnDx12Enabled");
		
		UOptions_Tab_GFX_Steam_C_OnDx12Enabled_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.SetBackToFullscreen
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::SetBackToFullscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.SetBackToFullscreen");
		
		UOptions_Tab_GFX_Steam_C_SetBackToFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.ExecuteUbergraph_Options_Tab_GFX_Steam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Tab_GFX_Steam_C::ExecuteUbergraph_Options_Tab_GFX_Steam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.ExecuteUbergraph_Options_Tab_GFX_Steam");
		
		UOptions_Tab_GFX_Steam_C_ExecuteUbergraph_Options_Tab_GFX_Steam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Steam_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C.SettingsChanged__DelegateSignature");
		
		UOptions_Tab_GFX_Steam_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Tab_GFX_Steam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Tab_GFX_Steam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Tab_GFX_Steam.Options_Tab_GFX_Steam_C");
		return ptr;
	}

}


