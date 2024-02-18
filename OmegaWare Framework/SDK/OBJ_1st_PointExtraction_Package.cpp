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
	 * 		Name   -> Function OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C.GetMissionIcon
	 * 		Flags  -> ()
	 */
	struct FObjectiveMissionIcon UOBJ_1st_PointExtraction_C::GetMissionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C.GetMissionIcon");
		
		UOBJ_1st_PointExtraction_C_GetMissionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_1st_PointExtraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_1st_PointExtraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C");
		return ptr;
	}

}


