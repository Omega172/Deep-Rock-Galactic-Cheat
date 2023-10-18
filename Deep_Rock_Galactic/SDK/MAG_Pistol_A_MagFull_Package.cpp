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
	 * 		Name   -> PredefinedFunction AMAG_Pistol_A_MagFull_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_Pistol_A_MagFull_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_Pistol_A_MagFull.MAG_Pistol_A_MagFull_C");
		return ptr;
	}

}


