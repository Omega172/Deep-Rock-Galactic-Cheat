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
	 * 		Name   -> Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_TipMachine_Display_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.Construct");
		
		UWidget_TipMachine_Display_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.ExecuteUbergraph_Widget_TipMachine_Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TipMachine_Display_C::ExecuteUbergraph_Widget_TipMachine_Display(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.ExecuteUbergraph_Widget_TipMachine_Display");
		
		UWidget_TipMachine_Display_C_ExecuteUbergraph_Widget_TipMachine_Display_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TipMachine_Display_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TipMachine_Display_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TipMachine_Display.Widget_TipMachine_Display_C");
		return ptr;
	}

}


