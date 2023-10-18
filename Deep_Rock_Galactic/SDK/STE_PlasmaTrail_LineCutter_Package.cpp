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
	 * 		Name   -> PredefinedFunction USTE_PlasmaTrail_LineCutter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_PlasmaTrail_LineCutter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_PlasmaTrail_LineCutter.STE_PlasmaTrail_LineCutter_C");
		return ptr;
	}

}


