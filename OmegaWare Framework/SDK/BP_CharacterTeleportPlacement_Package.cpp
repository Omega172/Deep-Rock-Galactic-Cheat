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
	 * 		Name   -> PredefinedFunction UBP_CharacterTeleportPlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CharacterTeleportPlacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterTeleportPlacement.BP_CharacterTeleportPlacement_C");
		return ptr;
	}

}


