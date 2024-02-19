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
	 * 		Name   -> PredefinedFunction UDNA_Motherlode_Long_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDNA_Motherlode_Long_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DNA_Motherlode_Long.DNA_Motherlode_Long_C");
		return ptr;
	}

}


