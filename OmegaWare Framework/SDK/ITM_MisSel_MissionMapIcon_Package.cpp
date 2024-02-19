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
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::SetMutators(class UGeneratedMission* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutators");
		
		UITM_MisSel_MissionMapIcon_C_SetMutators_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonScalable2_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMissionSelection_Mode                             Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::SetButtonState(class UBasic_ButtonScalable2_C* Button, bool Enabled, EMissionSelection_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState");
		
		UITM_MisSel_MissionMapIcon_C_SetButtonState_Params params {};
		params.Button = Button;
		params.Enabled = Enabled;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionMapIcon_C::ShouldEnableSoloButton(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton");
		
		UITM_MisSel_MissionMapIcon_C_ShouldEnableSoloButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionMapIcon_C::ShouldEnableHostButton(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton");
		
		UITM_MisSel_MissionMapIcon_C_ShouldEnableHostButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionMapIcon_C::ShouldEnableJoinButton(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton");
		
		UITM_MisSel_MissionMapIcon_C_ShouldEnableJoinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             AsBPPlayerControllerSpaceRig                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::GetPlayerController(class ABP_PlayerController_SpaceRig_C** AsBPPlayerControllerSpaceRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController");
		
		UITM_MisSel_MissionMapIcon_C_GetPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPPlayerControllerSpaceRig != nullptr)
			*AsBPPlayerControllerSpaceRig = params.AsBPPlayerControllerSpaceRig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::SelectOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions");
		
		UITM_MisSel_MissionMapIcon_C_SelectOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::GetActiveSelectionMode(EMissionSelection_Mode* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode");
		
		UITM_MisSel_MissionMapIcon_C_GetActiveSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            sessions                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::GetNumberOfActiveMissions(TArray<struct FBlueprintSessionResult>* Array, int32_t* sessions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions");
		
		UITM_MisSel_MissionMapIcon_C_GetNumberOfActiveMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (sessions != nullptr)
			*sessions = params.sessions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission
	 * 		Flags  -> ()
	 */
	bool UITM_MisSel_MissionMapIcon_C::HasMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission");
		
		UITM_MisSel_MissionMapIcon_C_HasMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_MisSel_FullBiome_C*                     BiomeController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::SetData(class UGeneratedMission* mission, class UITM_MisSel_FullBiome_C* BiomeController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData");
		
		UITM_MisSel_MissionMapIcon_C_SetData_Params params {};
		params.mission = mission;
		params.BiomeController = BiomeController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset");
		
		UITM_MisSel_MissionMapIcon_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::Unselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect");
		
		UITM_MisSel_MissionMapIcon_C_Unselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct");
		
		UITM_MisSel_MissionMapIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::ServerUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate");
		
		UITM_MisSel_MissionMapIcon_C_ServerUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionMapIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct");
		
		UITM_MisSel_MissionMapIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");
		
		UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_MissionMapIcon_C::OnTeamMemberCampaignMissionChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent");
		
		UITM_MisSel_MissionMapIcon_C_OnTeamMemberCampaignMissionChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShowChallengeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inHighlight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::ShowChallengeIcon(bool inHighlight, class UTexture2D* Icon, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShowChallengeIcon");
		
		UITM_MisSel_MissionMapIcon_C_ShowChallengeIcon_Params params {};
		params.inHighlight = inHighlight;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionMapIcon_C::ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon");
		
		UITM_MisSel_MissionMapIcon_C_ExecuteUbergraph_ITM_MisSel_MissionMapIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_MissionMapIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_MissionMapIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C");
		return ptr;
	}

}


