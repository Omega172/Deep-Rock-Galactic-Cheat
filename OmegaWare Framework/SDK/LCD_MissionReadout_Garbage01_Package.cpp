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
	 * 		Name   -> Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.Construct
	 * 		Flags  -> ()
	 */
	void ULCD_MissionReadout_Garbage01_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.Construct");
		
		ULCD_MissionReadout_Garbage01_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.ExecuteUbergraph_LCD_MissionReadout_Garbage01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_Garbage01_C::ExecuteUbergraph_LCD_MissionReadout_Garbage01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.ExecuteUbergraph_LCD_MissionReadout_Garbage01");
		
		ULCD_MissionReadout_Garbage01_C_ExecuteUbergraph_LCD_MissionReadout_Garbage01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULCD_MissionReadout_Garbage01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULCD_MissionReadout_Garbage01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C");
		return ptr;
	}

}


