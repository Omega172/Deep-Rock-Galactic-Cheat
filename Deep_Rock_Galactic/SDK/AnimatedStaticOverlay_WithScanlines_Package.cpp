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
	 * 		Name   -> PredefinedFunction UAnimatedStaticOverlay_WithScanlines_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatedStaticOverlay_WithScanlines_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AnimatedStaticOverlay_WithScanlines.AnimatedStaticOverlay_WithScanlines_C");
		return ptr;
	}

}


