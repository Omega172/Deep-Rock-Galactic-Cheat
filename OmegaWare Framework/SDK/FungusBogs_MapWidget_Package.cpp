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
	 * 		Name   -> Function FungusBogs_MapWidget.FungusBogs_MapWidget_C.GetBasePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                Panel                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFungusBogs_MapWidget_C::GetBasePanel(class UCanvasPanel** Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FungusBogs_MapWidget.FungusBogs_MapWidget_C.GetBasePanel");
		
		UFungusBogs_MapWidget_C_GetBasePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Panel != nullptr)
			*Panel = params.Panel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFungusBogs_MapWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFungusBogs_MapWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FungusBogs_MapWidget.FungusBogs_MapWidget_C");
		return ptr;
	}

}


