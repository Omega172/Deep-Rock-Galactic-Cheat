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
	 * 		Name   -> PredefinedFunction UAFE_HeroGameplayTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_HeroGameplayTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_HeroGameplayTag.AFE_HeroGameplayTag_C");
		return ptr;
	}

}


