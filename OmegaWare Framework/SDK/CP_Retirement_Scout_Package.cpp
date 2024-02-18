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
	 * 		Name   -> PredefinedFunction UCP_Retirement_Scout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_Retirement_Scout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_Retirement_Scout.CP_Retirement_Scout_C");
		return ptr;
	}

}


