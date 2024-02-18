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
	 * 		Name   -> PredefinedFunction UBP_ExplosiveEnemiesDamageMedium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ExplosiveEnemiesDamageMedium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplosiveEnemiesDamageMedium.BP_ExplosiveEnemiesDamageMedium_C");
		return ptr;
	}

}


