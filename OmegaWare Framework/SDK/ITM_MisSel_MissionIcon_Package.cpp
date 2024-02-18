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
	 * 		Name   -> Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FObjectiveMissionIcon                       MissionIcon                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UITM_MisSel_MissionIcon_C::SetIcon(const struct FObjectiveMissionIcon& MissionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon");
		
		UITM_MisSel_MissionIcon_C_SetIcon_Params params {};
		params.MissionIcon = MissionIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionTemplate*                            InMissionTemplate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionIcon_C::SetData(class UMissionTemplate* InMissionTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData");
		
		UITM_MisSel_MissionIcon_C_SetData_Params params {};
		params.InMissionTemplate = InMissionTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct");
		
		UITM_MisSel_MissionIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionIcon_C::ExecuteUbergraph_ITM_MisSel_MissionIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon");
		
		UITM_MisSel_MissionIcon_C_ExecuteUbergraph_ITM_MisSel_MissionIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_MissionIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_MissionIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C");
		return ptr;
	}

}


