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
	 * 		Name   -> Function HUD_Salvage_Defend_PlayerSlot.HUD_Salvage_Defend_PlayerSlot_C.SetPlayerSlotFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFilled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Salvage_Defend_PlayerSlot_C::SetPlayerSlotFilled(bool InFilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend_PlayerSlot.HUD_Salvage_Defend_PlayerSlot_C.SetPlayerSlotFilled");
		
		UHUD_Salvage_Defend_PlayerSlot_C_SetPlayerSlotFilled_Params params {};
		params.InFilled = InFilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Salvage_Defend_PlayerSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Salvage_Defend_PlayerSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Salvage_Defend_PlayerSlot.HUD_Salvage_Defend_PlayerSlot_C");
		return ptr;
	}

}


