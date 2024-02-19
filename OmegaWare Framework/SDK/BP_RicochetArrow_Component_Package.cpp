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
	 * 		Name   -> PredefinedFunction UBP_RicochetArrow_Component_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RicochetArrow_Component_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RicochetArrow_Component.BP_RicochetArrow_Component_C");
		return ptr;
	}

}


