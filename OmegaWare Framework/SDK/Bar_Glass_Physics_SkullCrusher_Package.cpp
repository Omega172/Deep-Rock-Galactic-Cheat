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
	 * 		Name   -> PredefinedFunction ABar_Glass_Physics_SkullCrusher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABar_Glass_Physics_SkullCrusher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bar_Glass_Physics_SkullCrusher.Bar_Glass_Physics_SkullCrusher_C");
		return ptr;
	}

}


