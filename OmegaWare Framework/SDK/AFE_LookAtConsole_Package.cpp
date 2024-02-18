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
	 * 		Name   -> PredefinedFunction UAFE_LookAtConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_LookAtConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_LookAtConsole.AFE_LookAtConsole_C");
		return ptr;
	}

}


