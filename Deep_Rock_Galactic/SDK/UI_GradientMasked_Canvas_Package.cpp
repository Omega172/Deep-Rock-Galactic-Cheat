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
	 * 		Name   -> Function UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C.OnMaterialRefreshed
	 * 		Flags  -> ()
	 */
	void UUI_GradientMasked_Canvas_C::OnMaterialRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C.OnMaterialRefreshed");
		
		UUI_GradientMasked_Canvas_C_OnMaterialRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C.ExecuteUbergraph_UI_GradientMasked_Canvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Canvas_C::ExecuteUbergraph_UI_GradientMasked_Canvas(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C.ExecuteUbergraph_UI_GradientMasked_Canvas");
		
		UUI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GradientMasked_Canvas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GradientMasked_Canvas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C");
		return ptr;
	}

}


