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
	 * 		Name   -> PredefinedFunction AITM_BarGlass_Item_Gutwrecker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_BarGlass_Item_Gutwrecker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item_Gutwrecker.ITM_BarGlass_Item_Gutwrecker_C");
		return ptr;
	}

}


