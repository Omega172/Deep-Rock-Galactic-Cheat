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
	 * 		Name   -> PredefinedFunction UDNA_Star_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDNA_Star_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DNA_Star_Medium.DNA_Star_Medium_C");
		return ptr;
	}

}


