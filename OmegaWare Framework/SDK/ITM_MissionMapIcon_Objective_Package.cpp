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
	 * 		Name   -> Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_MissionMapIcon_Objective_C::SetData(class UTexture2D* Texture, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData");
		
		UITM_MissionMapIcon_Objective_C_SetData_Params params {};
		params.Texture = Texture;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MissionMapIcon_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MissionMapIcon_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C");
		return ptr;
	}

}


