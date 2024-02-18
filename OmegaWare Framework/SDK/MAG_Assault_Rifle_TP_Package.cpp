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
	 * 		Name   -> PredefinedFunction AMAG_Assault_Rifle_TP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_Assault_Rifle_TP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_Assault_Rifle_TP.MAG_Assault_Rifle_TP_C");
		return ptr;
	}

}


