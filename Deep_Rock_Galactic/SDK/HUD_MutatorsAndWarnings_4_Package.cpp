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
	 * 		Name   -> Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_MutatorsAndWarnings_3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.Construct");
		
		UHUD_MutatorsAndWarnings_3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.ExecuteUbergraph_HUD_MutatorsAndWarnings_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_MutatorsAndWarnings_3_C::ExecuteUbergraph_HUD_MutatorsAndWarnings_4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.ExecuteUbergraph_HUD_MutatorsAndWarnings_4");
		
		UHUD_MutatorsAndWarnings_3_C_ExecuteUbergraph_HUD_MutatorsAndWarnings_4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_MutatorsAndWarnings_3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_MutatorsAndWarnings_3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C");
		return ptr;
	}

}


