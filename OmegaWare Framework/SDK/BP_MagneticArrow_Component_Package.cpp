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
	 * 		Name   -> PredefinedFunction UBP_MagneticArrow_Component_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MagneticArrow_Component_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MagneticArrow_Component.BP_MagneticArrow_Component_C");
		return ptr;
	}

}


