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
	 * 		Name   -> PredefinedFunction UE3trailer_CamShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UE3trailer_CamShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass E3trailer_CamShake.E3trailer_CamShake_C");
		return ptr;
	}

}


