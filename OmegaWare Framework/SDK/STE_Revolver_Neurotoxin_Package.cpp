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
	 * 		Name   -> PredefinedFunction USTE_Revolver_Neurotoxin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_Revolver_Neurotoxin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_Revolver_Neurotoxin.STE_Revolver_Neurotoxin_C");
		return ptr;
	}

}


