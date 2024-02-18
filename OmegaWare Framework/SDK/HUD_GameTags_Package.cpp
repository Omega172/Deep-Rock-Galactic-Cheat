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
	 * 		Name   -> Function HUD_GameTags.HUD_GameTags_C.UpdateSandboxTag
	 * 		Flags  -> ()
	 */
	void UHUD_GameTags_C::UpdateSandboxTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GameTags.HUD_GameTags_C.UpdateSandboxTag");
		
		UHUD_GameTags_C_UpdateSandboxTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GameTags.HUD_GameTags_C.UpdateExperimentalTag
	 * 		Flags  -> ()
	 */
	void UHUD_GameTags_C::UpdateExperimentalTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GameTags.HUD_GameTags_C.UpdateExperimentalTag");
		
		UHUD_GameTags_C_UpdateExperimentalTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GameTags.HUD_GameTags_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_GameTags_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GameTags.HUD_GameTags_C.Construct");
		
		UHUD_GameTags_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GameTags.HUD_GameTags_C.ExecuteUbergraph_HUD_GameTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GameTags_C::ExecuteUbergraph_HUD_GameTags(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GameTags.HUD_GameTags_C.ExecuteUbergraph_HUD_GameTags");
		
		UHUD_GameTags_C_ExecuteUbergraph_HUD_GameTags_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_GameTags_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_GameTags_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_GameTags.HUD_GameTags_C");
		return ptr;
	}

}


