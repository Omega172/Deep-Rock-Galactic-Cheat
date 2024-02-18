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
	 * 		Name   -> PredefinedFunction USTE_TaserArrowArc_Enemies_Damage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_TaserArrowArc_Enemies_Damage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_TaserArrowArc_Enemies_Damage.STE_TaserArrowArc_Enemies_Damage_C");
		return ptr;
	}

}


