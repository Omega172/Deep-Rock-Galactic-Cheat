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
	 * 		Name   -> Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Cookable_HighExplosive_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.Construct");
		
		UHUD_Cookable_HighExplosive_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.UpdateCookTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Cookable_HighExplosive_C::UpdateCookTime(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.UpdateCookTime");
		
		UHUD_Cookable_HighExplosive_C_UpdateCookTime_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.ExecuteUbergraph_HUD_Cookable_HighExplosive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Cookable_HighExplosive_C::ExecuteUbergraph_HUD_Cookable_HighExplosive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C.ExecuteUbergraph_HUD_Cookable_HighExplosive");
		
		UHUD_Cookable_HighExplosive_C_ExecuteUbergraph_HUD_Cookable_HighExplosive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Cookable_HighExplosive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Cookable_HighExplosive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C");
		return ptr;
	}

}


