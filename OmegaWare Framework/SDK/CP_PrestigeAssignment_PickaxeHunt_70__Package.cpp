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
	 * 		Name   -> PredefinedFunction UCP_PrestigeAssignment_PickaxeHunt_70__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_PrestigeAssignment_PickaxeHunt_70__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_PrestigeAssignment_PickaxeHunt_70_.CP_PrestigeAssignment_PickaxeHunt_70__C");
		return ptr;
	}

}


