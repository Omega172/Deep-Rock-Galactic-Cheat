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
	 * 		Name   -> PredefinedFunction UBP_FadeScreenSubSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FadeScreenSubSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FadeScreenSubSystem.BP_FadeScreenSubSystem_C");
		return ptr;
	}

}


