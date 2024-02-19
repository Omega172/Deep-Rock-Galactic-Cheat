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
	 * 		Name   -> PredefinedFunction UCP_WPN_GuidedRocketSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_WPN_GuidedRocketSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_WPN_GuidedRocketSystem.CP_WPN_GuidedRocketSystem_C");
		return ptr;
	}

}


