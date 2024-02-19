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
	 * 		Name   -> Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HazardBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_ObjectiveSecondary_C::SetData(class UClass* Objective, float missionLength, float HazardBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData");
		
		UITM_MisSel_ObjectiveSecondary_C_SetData_Params params {};
		params.Objective = Objective;
		params.missionLength = missionLength;
		params.HazardBonus = HazardBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_ObjectiveSecondary_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct");
		
		UITM_MisSel_ObjectiveSecondary_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_ObjectiveSecondary_C::ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary");
		
		UITM_MisSel_ObjectiveSecondary_C_ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_ObjectiveSecondary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_ObjectiveSecondary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C");
		return ptr;
	}

}


