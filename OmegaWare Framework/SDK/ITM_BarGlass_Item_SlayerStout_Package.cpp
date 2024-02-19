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
	 * 		Name   -> PredefinedFunction AITM_BarGlass_Item_SlayerStout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_BarGlass_Item_SlayerStout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item_SlayerStout.ITM_BarGlass_Item_SlayerStout_C");
		return ptr;
	}

}


