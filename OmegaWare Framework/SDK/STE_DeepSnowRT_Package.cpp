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
	 * 		Name   -> PredefinedFunction USTE_DeepSnowRT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_DeepSnowRT_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_DeepSnowRT.STE_DeepSnowRT_C");
		return ptr;
	}

}


