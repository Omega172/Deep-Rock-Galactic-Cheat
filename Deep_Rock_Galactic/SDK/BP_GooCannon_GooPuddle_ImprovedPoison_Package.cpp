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
	 * 		Name   -> PredefinedFunction ABP_GooCannon_GooPuddle_ImprovedPoison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GooCannon_GooPuddle_ImprovedPoison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GooCannon_GooPuddle_ImprovedPoison.BP_GooCannon_GooPuddle_ImprovedPoison_C");
		return ptr;
	}

}


