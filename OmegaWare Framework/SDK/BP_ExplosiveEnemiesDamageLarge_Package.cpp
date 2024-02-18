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
	 * 		Name   -> PredefinedFunction UBP_ExplosiveEnemiesDamageLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ExplosiveEnemiesDamageLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplosiveEnemiesDamageLarge.BP_ExplosiveEnemiesDamageLarge_C");
		return ptr;
	}

}


