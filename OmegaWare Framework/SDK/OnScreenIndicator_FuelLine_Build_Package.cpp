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
	 * 		Name   -> PredefinedFunction UOnScreenIndicator_FuelLine_Build_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnScreenIndicator_FuelLine_Build_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreenIndicator_FuelLine_Build.OnScreenIndicator_FuelLine_Build_C");
		return ptr;
	}

}


