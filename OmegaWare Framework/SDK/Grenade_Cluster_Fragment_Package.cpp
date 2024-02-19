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
	 * 		Name   -> PredefinedFunction AGrenade_Cluster_Fragment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade_Cluster_Fragment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Cluster_Fragment.Grenade_Cluster_Fragment_C");
		return ptr;
	}

}


