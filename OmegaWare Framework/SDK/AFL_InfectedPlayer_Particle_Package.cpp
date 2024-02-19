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
	 * 		Name   -> PredefinedFunction UAFL_InfectedPlayer_Particle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFL_InfectedPlayer_Particle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFL_InfectedPlayer_Particle.AFL_InfectedPlayer_Particle_C");
		return ptr;
	}

}


