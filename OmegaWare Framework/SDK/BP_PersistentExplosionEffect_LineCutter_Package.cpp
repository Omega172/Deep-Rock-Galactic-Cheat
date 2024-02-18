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
	 * 		Name   -> PredefinedFunction ABP_PersistentExplosionEffect_LineCutter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PersistentExplosionEffect_LineCutter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PersistentExplosionEffect_LineCutter.BP_PersistentExplosionEffect_LineCutter_C");
		return ptr;
	}

}


