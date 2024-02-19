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
	 * 		Name   -> PredefinedFunction UAFLS_ShieldBoost_Activation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFLS_ShieldBoost_Activation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_ShieldBoost_Activation.AFLS_ShieldBoost_Activation_C");
		return ptr;
	}

}


