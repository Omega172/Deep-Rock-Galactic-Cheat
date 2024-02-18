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
	 * 		Name   -> PredefinedFunction UDNA_Refinery_Complex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDNA_Refinery_Complex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DNA_Refinery_Complex.DNA_Refinery_Complex_C");
		return ptr;
	}

}


