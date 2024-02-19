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
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::CheckMinersManualNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications");
		
		UWND_AssignmentMissionComplete_C_CheckMinersManualNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::UpdateGoogleAnalytics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics");
		
		UWND_AssignmentMissionComplete_C_UpdateGoogleAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowLastMission                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_AssignmentMissionComplete_C::UpdateCampaignProgressBar(bool ShowLastMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar");
		
		UWND_AssignmentMissionComplete_C_UpdateCampaignProgressBar_Params params {};
		params.ShowLastMission = ShowLastMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen
	 * 		Flags  -> ()
	 */
	bool UWND_AssignmentMissionComplete_C::IsWindowOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen");
		
		UWND_AssignmentMissionComplete_C_IsWindowOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWND_AssignmentMissionComplete_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp");
		
		UWND_AssignmentMissionComplete_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_AssignmentMissionComplete_C::SetFrameColor(ENUM_MenuColors Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor");
		
		UWND_AssignmentMissionComplete_C_SetFrameColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            MissionCompleteShout                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_AssignmentMissionComplete_C::GetMissionCompleteShout(class UDialogDataAsset** MissionCompleteShout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout");
		
		UWND_AssignmentMissionComplete_C_GetMissionCompleteShout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionCompleteShout != nullptr)
			*MissionCompleteShout = params.MissionCompleteShout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URewardWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_AssignmentMissionComplete_C::CreateRewardWidget(class UReward* Reward, class URewardWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget");
		
		UWND_AssignmentMissionComplete_C_CreateRewardWidget_Params params {};
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UReward*>                             List                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWND_AssignmentMissionComplete_C::AddRewardList(TArray<class UReward*> List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List");
		
		UWND_AssignmentMissionComplete_C_AddRewardList_Params params {};
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_AssignmentMissionComplete_C::AddReward(class UReward* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward");
		
		UWND_AssignmentMissionComplete_C_AddReward_Params params {};
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_AssignmentMissionComplete_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct");
		
		UWND_AssignmentMissionComplete_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWND_AssignmentMissionComplete_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown");
		
		UWND_AssignmentMissionComplete_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed");
		
		UWND_AssignmentMissionComplete_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_AssignmentMissionComplete_C::SetMissionControlPaused(bool IsPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused");
		
		UWND_AssignmentMissionComplete_C_SetMissionControlPaused_Params params {};
		params.IsPaused = IsPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::Continue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue");
		
		UWND_AssignmentMissionComplete_C_Continue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::CursorInputHack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack");
		
		UWND_AssignmentMissionComplete_C_CursorInputHack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::InitWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window");
		
		UWND_AssignmentMissionComplete_C_InitWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::StartMissionControlSpeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak");
		
		UWND_AssignmentMissionComplete_C_StartMissionControlSpeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnAppearFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished");
		
		UWND_AssignmentMissionComplete_C_OnAppearFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnMissionControlFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished");
		
		UWND_AssignmentMissionComplete_C_OnMissionControlFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::CountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down");
		
		UWND_AssignmentMissionComplete_C_CountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::RewardClaimed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed");
		
		UWND_AssignmentMissionComplete_C_RewardClaimed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnNewTopWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow");
		
		UWND_AssignmentMissionComplete_C_OnNewTopWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnProgressBarMoveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished");
		
		UWND_AssignmentMissionComplete_C_OnProgressBarMoveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnUpdateProgressBarFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished");
		
		UWND_AssignmentMissionComplete_C_OnUpdateProgressBarFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep
	 * 		Flags  -> ()
	 */
	void UWND_AssignmentMissionComplete_C::OnProgressBarUpdateStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep");
		
		UWND_AssignmentMissionComplete_C_OnProgressBarUpdateStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_AssignmentMissionComplete_C::ExecuteUbergraph_WND_AssignmentMissionComplete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete");
		
		UWND_AssignmentMissionComplete_C_ExecuteUbergraph_WND_AssignmentMissionComplete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_AssignmentMissionComplete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_AssignmentMissionComplete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C");
		return ptr;
	}

}


