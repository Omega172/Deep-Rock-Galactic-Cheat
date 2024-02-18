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
	 * 		Name   -> PredefinedFunction UAFLS_HeightenedSences_Warning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFLS_HeightenedSences_Warning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_HeightenedSences_Warning.AFLS_HeightenedSences_Warning_C");
		return ptr;
	}

}


