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
	 * 		Name   -> Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_MissionIcon_C*                   Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionTemplate*                            InMissionTemplate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDive_ObjectiveIcon_C::SetTemplateIcon(class UITM_MisSel_MissionIcon_C* Icon, class UMissionTemplate* InMissionTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon");
		
		UITM_DeepDive_ObjectiveIcon_C_SetTemplateIcon_Params params {};
		params.Icon = Icon;
		params.InMissionTemplate = InMissionTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MaskedImage_C*                           Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDive_ObjectiveIcon_C::SetObjectiveIcon(class UUI_MaskedImage_C* Icon, class UClass* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon");
		
		UITM_DeepDive_ObjectiveIcon_C_SetObjectiveIcon_Params params {};
		params.Icon = Icon;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDive_ObjectiveIcon_C::SetData(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData");
		
		UITM_DeepDive_ObjectiveIcon_C_SetData_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDive_ObjectiveIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct");
		
		UITM_DeepDive_ObjectiveIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDive_ObjectiveIcon_C::ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon");
		
		UITM_DeepDive_ObjectiveIcon_C_ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDive_ObjectiveIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDive_ObjectiveIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C");
		return ptr;
	}

}


