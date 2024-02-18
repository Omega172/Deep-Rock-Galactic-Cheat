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
	 * 		Name   -> PredefinedFunction AMAG_RevolverDrumFP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_RevolverDrumFP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_RevolverDrumFP.MAG_RevolverDrumFP_C");
		return ptr;
	}

}


