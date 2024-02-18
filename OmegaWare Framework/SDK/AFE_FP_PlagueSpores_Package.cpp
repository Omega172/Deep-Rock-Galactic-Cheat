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
	 * 		Name   -> PredefinedFunction UAFE_FP_PlagueSpores_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_FP_PlagueSpores_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_FP_PlagueSpores.AFE_FP_PlagueSpores_C");
		return ptr;
	}

}


