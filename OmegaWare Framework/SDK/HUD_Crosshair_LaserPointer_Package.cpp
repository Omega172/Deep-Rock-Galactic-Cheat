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
	 * 		Name   -> Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crosshair_LaserPointer_C::SetDotVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible");
		
		UHUD_Crosshair_LaserPointer_C_SetDotVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Crosshair_LaserPointer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct");
		
		UHUD_Crosshair_LaserPointer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crosshair_LaserPointer_C::ExecuteUbergraph_HUD_Crosshair_LaserPointer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer");
		
		UHUD_Crosshair_LaserPointer_C_ExecuteUbergraph_HUD_Crosshair_LaserPointer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Crosshair_LaserPointer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Crosshair_LaserPointer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C");
		return ptr;
	}

}


