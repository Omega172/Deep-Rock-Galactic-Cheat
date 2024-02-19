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
	 * 		Name   -> PredefinedFunction UITM_MisSel_BG_Planet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_BG_Planet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_BG_Planet.ITM_MisSel_BG_Planet_C");
		return ptr;
	}

}


