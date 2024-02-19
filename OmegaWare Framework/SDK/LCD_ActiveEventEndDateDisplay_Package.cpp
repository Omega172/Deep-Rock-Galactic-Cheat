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
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1
	 * 		Flags  -> ()
	 */
	void ULCD_ActiveEventEndDateDisplay_C::SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1");
		
		ULCD_ActiveEventEndDateDisplay_C_SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ChangeEvent
	 * 		Flags  -> ()
	 */
	void ULCD_ActiveEventEndDateDisplay_C::ChangeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ChangeEvent");
		
		ULCD_ActiveEventEndDateDisplay_C_ChangeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.GetEventToDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDEvent*                                   EventToDisplay                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_ActiveEventEndDateDisplay_C::GetEventToDisplay(class UFSDEvent** EventToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.GetEventToDisplay");
		
		ULCD_ActiveEventEndDateDisplay_C_GetEventToDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventToDisplay != nullptr)
			*EventToDisplay = params.EventToDisplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.CheckForActiveEvents
	 * 		Flags  -> ()
	 */
	void ULCD_ActiveEventEndDateDisplay_C::CheckForActiveEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.CheckForActiveEvents");
		
		ULCD_ActiveEventEndDateDisplay_C_CheckForActiveEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Refresh
	 * 		Flags  -> ()
	 */
	void ULCD_ActiveEventEndDateDisplay_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Refresh");
		
		ULCD_ActiveEventEndDateDisplay_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Construct
	 * 		Flags  -> ()
	 */
	void ULCD_ActiveEventEndDateDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Construct");
		
		ULCD_ActiveEventEndDateDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ExecuteUbergraph_LCD_ActiveEventEndDateDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_ActiveEventEndDateDisplay_C::ExecuteUbergraph_LCD_ActiveEventEndDateDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ExecuteUbergraph_LCD_ActiveEventEndDateDisplay");
		
		ULCD_ActiveEventEndDateDisplay_C_ExecuteUbergraph_LCD_ActiveEventEndDateDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULCD_ActiveEventEndDateDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULCD_ActiveEventEndDateDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C");
		return ptr;
	}

}


