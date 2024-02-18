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
	 * 		Name   -> PredefinedFunction UConsoleScreen_Cheats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_Cheats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_Cheats.ConsoleScreen_Cheats_C");
		return ptr;
	}

}


