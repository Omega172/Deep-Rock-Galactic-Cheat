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
	 * 		Name   -> PredefinedFunction USTE_LeaveShieldProtectiveAura_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_LeaveShieldProtectiveAura_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_LeaveShieldProtectiveAura.STE_LeaveShieldProtectiveAura_C");
		return ptr;
	}

}


