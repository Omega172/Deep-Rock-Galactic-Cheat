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
	 * 		Name   -> PredefinedFunction UAFE_3p_JetBoots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_3p_JetBoots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_3p_JetBoots.AFE_3p_JetBoots_C");
		return ptr;
	}

}


