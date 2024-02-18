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
	 * 		Name   -> Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Upscaling_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.Construct");
		
		UOptions_GFX_Upscaling_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.SettingsUpdated
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Upscaling_C::SettingsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.SettingsUpdated");
		
		UOptions_GFX_Upscaling_C_SettingsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.ExecuteUbergraph_Options_GFX_Upscaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_GFX_Upscaling_C::ExecuteUbergraph_Options_GFX_Upscaling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.ExecuteUbergraph_Options_GFX_Upscaling");
		
		UOptions_GFX_Upscaling_C_ExecuteUbergraph_Options_GFX_Upscaling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_GFX_Upscaling_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GFX_Upscaling.Options_GFX_Upscaling_C.SettingsChanged__DelegateSignature");
		
		UOptions_GFX_Upscaling_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_GFX_Upscaling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_GFX_Upscaling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_GFX_Upscaling.Options_GFX_Upscaling_C");
		return ptr;
	}

}


