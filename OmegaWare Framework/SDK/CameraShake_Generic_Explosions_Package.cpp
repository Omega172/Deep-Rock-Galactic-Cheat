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
	 * 		Name   -> PredefinedFunction UCameraShake_Generic_Explosions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraShake_Generic_Explosions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_Generic_Explosions.CameraShake_Generic_Explosions_C");
		return ptr;
	}

}


