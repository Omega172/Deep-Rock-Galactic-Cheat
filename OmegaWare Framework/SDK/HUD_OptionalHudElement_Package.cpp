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
	 * 		Name   -> Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_OptionalHudElement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.Construct");
		
		UHUD_OptionalHudElement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.ExecuteUbergraph_HUD_OptionalHudElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_OptionalHudElement_C::ExecuteUbergraph_HUD_OptionalHudElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.ExecuteUbergraph_HUD_OptionalHudElement");
		
		UHUD_OptionalHudElement_C_ExecuteUbergraph_HUD_OptionalHudElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_OptionalHudElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_OptionalHudElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_OptionalHudElement.HUD_OptionalHudElement_C");
		return ptr;
	}

}


