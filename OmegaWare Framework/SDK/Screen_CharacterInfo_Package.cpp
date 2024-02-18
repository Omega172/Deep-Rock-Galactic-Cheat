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
	 * 		Name   -> PredefinedFunction UScreen_CharacterInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreen_CharacterInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Screen_CharacterInfo.Screen_CharacterInfo_C");
		return ptr;
	}

}


