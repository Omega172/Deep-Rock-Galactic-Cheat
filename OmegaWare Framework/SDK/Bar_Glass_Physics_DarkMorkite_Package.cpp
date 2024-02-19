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
	 * 		Name   -> PredefinedFunction ABar_Glass_Physics_DarkMorkite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABar_Glass_Physics_DarkMorkite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bar_Glass_Physics_DarkMorkite.Bar_Glass_Physics_DarkMorkite_C");
		return ptr;
	}

}


