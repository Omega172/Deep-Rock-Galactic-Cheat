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
	 * 		Name   -> PredefinedFunction ALockOnRifle_Mag_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALockOnRifle_Mag_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LockOnRifle_Mag_Empty.LockOnRifle_Mag_Empty_C");
		return ptr;
	}

}


