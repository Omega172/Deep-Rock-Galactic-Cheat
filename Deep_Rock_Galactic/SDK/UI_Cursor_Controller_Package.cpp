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
	 * 		Name   -> Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnHover
	 * 		Flags  -> ()
	 */
	void UUI_Cursor_Controller_C::OnHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnHover");
		
		UUI_Cursor_Controller_C_OnHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnUnhover
	 * 		Flags  -> ()
	 */
	void UUI_Cursor_Controller_C::OnUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnUnhover");
		
		UUI_Cursor_Controller_C_OnUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Cursor_Controller.UI_Cursor_Controller_C.ExecuteUbergraph_UI_Cursor_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Cursor_Controller_C::ExecuteUbergraph_UI_Cursor_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.ExecuteUbergraph_UI_Cursor_Controller");
		
		UUI_Cursor_Controller_C_ExecuteUbergraph_UI_Cursor_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Cursor_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Cursor_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Cursor_Controller.UI_Cursor_Controller_C");
		return ptr;
	}

}


