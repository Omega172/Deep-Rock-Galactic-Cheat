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
	 * 		Name   -> Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Gameplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.Construct");
		
		UOptions_Tab_Gameplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocalizedLanguageInfo                      SelectedLanguage                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptions_Tab_Gameplay_C::BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(const struct FLocalizedLanguageInfo& SelectedLanguage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature");
		
		UOptions_Tab_Gameplay_C_BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature_Params params {};
		params.SelectedLanguage = SelectedLanguage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.ExecuteUbergraph_Options_Tab_Gameplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Tab_Gameplay_C::ExecuteUbergraph_Options_Tab_Gameplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.ExecuteUbergraph_Options_Tab_Gameplay");
		
		UOptions_Tab_Gameplay_C_ExecuteUbergraph_Options_Tab_Gameplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Gameplay_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.SettingsChanged__DelegateSignature");
		
		UOptions_Tab_Gameplay_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Tab_Gameplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Tab_Gameplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Tab_Gameplay.Options_Tab_Gameplay_C");
		return ptr;
	}

}


