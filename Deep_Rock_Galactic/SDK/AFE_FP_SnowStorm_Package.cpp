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
	 * 		Name   -> PredefinedFunction UAFE_FP_SnowStorm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_FP_SnowStorm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_FP_SnowStorm.AFE_FP_SnowStorm_C");
		return ptr;
	}

}


