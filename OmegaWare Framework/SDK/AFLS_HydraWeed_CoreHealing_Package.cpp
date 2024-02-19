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
	 * 		Name   -> PredefinedFunction UAFLS_HydraWeed_CoreHealing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFLS_HydraWeed_CoreHealing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_HydraWeed_CoreHealing.AFLS_HydraWeed_CoreHealing_C");
		return ptr;
	}

}


