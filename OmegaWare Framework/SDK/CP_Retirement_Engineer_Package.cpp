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
	 * 		Name   -> PredefinedFunction UCP_Retirement_Engineer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_Retirement_Engineer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_Retirement_Engineer.CP_Retirement_Engineer_C");
		return ptr;
	}

}


