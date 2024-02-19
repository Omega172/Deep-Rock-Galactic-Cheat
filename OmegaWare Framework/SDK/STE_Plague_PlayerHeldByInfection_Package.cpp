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
	 * 		Name   -> PredefinedFunction USTE_Plague_PlayerHeldByInfection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_Plague_PlayerHeldByInfection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_Plague_PlayerHeldByInfection.STE_Plague_PlayerHeldByInfection_C");
		return ptr;
	}

}


