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
	 * 		Name   -> PredefinedFunction UDNA_Escort_LongComplex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDNA_Escort_LongComplex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DNA_Escort_LongComplex.DNA_Escort_LongComplex_C");
		return ptr;
	}

}


