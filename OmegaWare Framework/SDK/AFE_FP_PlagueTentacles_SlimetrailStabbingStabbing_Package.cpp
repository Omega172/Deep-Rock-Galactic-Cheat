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
	 * 		Name   -> PredefinedFunction UAFE_FP_PlagueTentacles_SlimetrailStabbingStabbing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_FP_PlagueTentacles_SlimetrailStabbingStabbing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_FP_PlagueTentacles_SlimetrailStabbingStabbing.AFE_FP_PlagueTentacles_SlimetrailStabbingStabbing_C");
		return ptr;
	}

}


