/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> PredefinedFunction ABP_Micro_Missile_Mag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Micro_Missile_Mag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Micro_Missile_Mag.BP_Micro_Missile_Mag_C");
		return ptr;
	}

}


