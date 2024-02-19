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
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1");
		
		UITM_EscMenu_BriefingV2_C_SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::UpdateFromAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation");
		
		UITM_EscMenu_BriefingV2_C_UpdateFromAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBiome*                                      Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscMenu_BriefingV2_C::UpdateBiomeInfo(class UBiome* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo");
		
		UITM_EscMenu_BriefingV2_C_UpdateBiomeInfo_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get Tool Tip Widget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_EscMenu_BriefingV2_C::GetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get Tool Tip Widget");
		
		UITM_EscMenu_BriefingV2_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDeepDive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_EscMenu_BriefingV2_C::UpdateMissionStructure(bool* IsDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure");
		
		UITM_EscMenu_BriefingV2_C_UpdateMissionStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDeepDive != nullptr)
			*IsDeepDive = params.IsDeepDive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscMenu_BriefingV2_C::UpdateMissionInfo(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo");
		
		UITM_EscMenu_BriefingV2_C_UpdateMissionInfo_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_EscMenu_BriefingV2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct");
		
		UITM_EscMenu_BriefingV2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update");
		
		UITM_EscMenu_BriefingV2_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::UpdateMissionTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime");
		
		UITM_EscMenu_BriefingV2_C_UpdateMissionTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close");
		
		UITM_EscMenu_BriefingV2_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct");
		
		UITM_EscMenu_BriefingV2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscMenu_BriefingV2_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged");
		
		UITM_EscMenu_BriefingV2_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::MutatorClicked_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event");
		
		UITM_EscMenu_BriefingV2_C_MutatorClicked_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::WarningClicked_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event");
		
		UITM_EscMenu_BriefingV2_C_WarningClicked_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscMenu_BriefingV2_C::ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2");
		
		UITM_EscMenu_BriefingV2_C_ExecuteUbergraph_ITM_EscMenu_BriefingV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::BiomeClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_BiomeClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::WarningClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_WarningClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::MutatorClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_MutatorClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscMenu_BriefingV2_C::MissionTypeClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature");
		
		UITM_EscMenu_BriefingV2_C_MissionTypeClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_EscMenu_BriefingV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_EscMenu_BriefingV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C");
		return ptr;
	}

}


