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
	 * 		Name   -> PredefinedFunction UAFE_Stasis_Enemies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_Stasis_Enemies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_Stasis_Enemies.AFE_Stasis_Enemies_C");
		return ptr;
	}

}


