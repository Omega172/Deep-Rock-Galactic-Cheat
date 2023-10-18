/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionTemplate*                            Template                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseSimpleIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionIconBasic_C::SetTemplate(class UMissionTemplate* Template, bool UseSimpleIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate");
		
		UITM_MisSel_MissionIconBasic_C_SetTemplate_Params params {};
		params.Template = Template;
		params.UseSimpleIcon = UseSimpleIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionIconBasic_C::SetSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected");
		
		UITM_MisSel_MissionIconBasic_C_SetSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionIconBasic_C::SetMission(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission");
		
		UITM_MisSel_MissionIconBasic_C_SetMission_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionIconBasic_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct");
		
		UITM_MisSel_MissionIconBasic_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FObjectiveMissionIcon                       MissionIcon                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UITM_MisSel_MissionIconBasic_C::SetData(const struct FObjectiveMissionIcon& MissionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData");
		
		UITM_MisSel_MissionIconBasic_C_SetData_Params params {};
		params.MissionIcon = MissionIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionIconBasic_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic");
		
		UITM_MisSel_MissionIconBasic_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_MissionIconBasic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_MissionIconBasic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C");
		return ptr;
	}

}


