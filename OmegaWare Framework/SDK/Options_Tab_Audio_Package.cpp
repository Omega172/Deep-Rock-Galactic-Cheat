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
	 * 		Name   -> Function Options_Tab_Audio.Options_Tab_Audio_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Audio_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.Construct");
		
		UOptions_Tab_Audio_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Audio.Options_Tab_Audio_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Audio_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.UINeedsUpdate");
		
		UOptions_Tab_Audio_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Audio.Options_Tab_Audio_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Audio_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.ShowOptions");
		
		UOptions_Tab_Audio_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Audio.Options_Tab_Audio_C.ExecuteUbergraph_Options_Tab_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Tab_Audio_C::ExecuteUbergraph_Options_Tab_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.ExecuteUbergraph_Options_Tab_Audio");
		
		UOptions_Tab_Audio_C_ExecuteUbergraph_Options_Tab_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Tab_Audio.Options_Tab_Audio_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Tab_Audio_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.SettingsChanged__DelegateSignature");
		
		UOptions_Tab_Audio_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Tab_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Tab_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Tab_Audio.Options_Tab_Audio_C");
		return ptr;
	}

}


