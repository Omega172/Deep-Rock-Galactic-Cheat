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
	 * 		Name   -> PredefinedFunction USTE_Radiation_Hazard_Crystals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_Radiation_Hazard_Crystals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_Radiation_Hazard_Crystals.STE_Radiation_Hazard_Crystals_C");
		return ptr;
	}

}


