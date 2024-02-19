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
	 * 		Name   -> PredefinedFunction UJobs_List_Element_BG_CutCorner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJobs_List_Element_BG_CutCorner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Jobs_List_Element_BG_Cutcorner.Jobs_List_Element_BG_CutCorner_C");
		return ptr;
	}

}


