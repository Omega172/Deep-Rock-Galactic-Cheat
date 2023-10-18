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
	 * 		Name   -> PredefinedFunction APRW_Drone_Nurse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRW_Drone_Nurse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRW_Drone_Nurse.PRW_Drone_Nurse_C");
		return ptr;
	}

}


