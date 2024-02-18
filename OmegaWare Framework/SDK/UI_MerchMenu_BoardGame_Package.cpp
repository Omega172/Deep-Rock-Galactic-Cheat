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
	 * 		Name   -> PredefinedFunction UUI_MerchMenu_BoardGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MerchMenu_BoardGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MerchMenu_BoardGame.UI_MerchMenu_BoardGame_C");
		return ptr;
	}

}


