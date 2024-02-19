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
	 * 		Name   -> PredefinedFunction UAFLS_TemperatureShock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFLS_TemperatureShock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_TemperatureShock.AFLS_TemperatureShock_C");
		return ptr;
	}

}


