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
	 * 		Name   -> Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerScanProgress_C::SetProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress");
		
		UHUD_LaserPointerScanProgress_C_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerScanProgress_C::ExecuteUbergraph_HUD_LaserPointerScanProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress");
		
		UHUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_LaserPointerScanProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_LaserPointerScanProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C");
		return ptr;
	}

}


