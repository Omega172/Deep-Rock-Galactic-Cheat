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
	 * 		Name   -> Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InUp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_KPI_Tab_C::HandleMouseEvent(const struct FPointerEvent& InMouseEvent, bool InUp, bool* OutHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent");
		
		UUI_KPI_Tab_C_HandleMouseEvent_Params params {};
		params.InMouseEvent = InMouseEvent;
		params.InUp = InUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandled != nullptr)
			*OutHandled = params.OutHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InUp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_KPI_Tab_C::HandleKeyEvent(const struct FKeyEvent& InKeyEvent, bool InUp, bool* OutHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent");
		
		UUI_KPI_Tab_C_HandleKeyEvent_Params params {};
		params.InKeyEvent = InKeyEvent;
		params.InUp = InUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandled != nullptr)
			*OutHandled = params.OutHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KPI_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KPI_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KPI_Tab.UI_KPI_Tab_C");
		return ptr;
	}

}


