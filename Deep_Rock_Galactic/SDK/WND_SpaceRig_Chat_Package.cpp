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
	 * 		Name   -> PredefinedFunction UWND_SpaceRig_Chat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_SpaceRig_Chat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_SpaceRig_Chat.WND_SpaceRig_Chat_C");
		return ptr;
	}

}


