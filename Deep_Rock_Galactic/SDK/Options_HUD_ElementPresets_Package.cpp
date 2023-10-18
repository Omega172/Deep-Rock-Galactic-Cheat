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
	 * 		Name   -> Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHUDVisibilityPresets                              PresetID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_HUD_ElementPresets_C::AddPreset(EHUDVisibilityPresets PresetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset");
		
		UOptions_HUD_ElementPresets_C_AddPreset_Params params {};
		params.PresetID = PresetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_HUD_ElementPresets_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct");
		
		UOptions_HUD_ElementPresets_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_HUD_ElementPresets_C::ExecuteUbergraph_Options_HUD_ElementPresets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets");
		
		UOptions_HUD_ElementPresets_C_ExecuteUbergraph_Options_HUD_ElementPresets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_HUD_ElementPresets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_HUD_ElementPresets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_HUD_ElementPresets.Options_HUD_ElementPresets_C");
		return ptr;
	}

}


