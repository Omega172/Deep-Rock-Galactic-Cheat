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
	 * 		Name   -> PredefinedFunction UCP_Season04_CriticalCorruptionl_Part2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_Season04_CriticalCorruptionl_Part2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_Season04_CriticalCorruptionl_Part2.CP_Season04_CriticalCorruptionl_Part2_C");
		return ptr;
	}

}


