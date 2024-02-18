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
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ApplyGraphicOptionsText
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::ApplyGraphicOptionsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ApplyGraphicOptionsText");
		
		UOptions_Tab_GFX_Console_C_ApplyGraphicOptionsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.AddStaticResolutionOption
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::AddStaticResolutionOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.AddStaticResolutionOption");
		
		UOptions_Tab_GFX_Console_C_AddStaticResolutionOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ForceMicrosoftNonHDR
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::ForceMicrosoftNonHDR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ForceMicrosoftNonHDR");
		
		UOptions_Tab_GFX_Console_C_ForceMicrosoftNonHDR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.Construct");
		
		UOptions_Tab_GFX_Console_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.UINeedsUpdate");
		
		UOptions_Tab_GFX_Console_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ExecuteUbergraph_Options_Tab_GFX_Console
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Tab_GFX_Console_C::ExecuteUbergraph_Options_Tab_GFX_Console(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.ExecuteUbergraph_Options_Tab_GFX_Console");
		
		UOptions_Tab_GFX_Console_C_ExecuteUbergraph_Options_Tab_GFX_Console_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_GFX_Console_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_GFX_Console.Options_Tab_GFX_Console_C.SettingsChanged__DelegateSignature");
		
		UOptions_Tab_GFX_Console_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Tab_GFX_Console_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Tab_GFX_Console_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Tab_GFX_Console.Options_Tab_GFX_Console_C");
		return ptr;
	}

}


