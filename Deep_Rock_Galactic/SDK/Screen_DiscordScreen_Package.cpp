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
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceRefresh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScreen_DiscordScreen_C::BuildProgressUI(bool ForceRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI");
		
		UScreen_DiscordScreen_C_BuildProgressUI_Params params {};
		params.ForceRefresh = ForceRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::RefreshCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState");
		
		UScreen_DiscordScreen_C_RefreshCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_CommunityGoalResult_C*                  ResultUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FactionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult");
		
		UScreen_DiscordScreen_C_SetResult_Params params {};
		params.ResultUI = ResultUI;
		params.FactionID = FactionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::AwardRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards");
		
		UScreen_DiscordScreen_C_AwardRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DSMUTier                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::MinersUnionTier(float* DSMUTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier");
		
		UScreen_DiscordScreen_C_MinersUnionTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DSMUTier != nullptr)
			*DSMUTier = params.DSMUTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::BuildRewardUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI");
		
		UScreen_DiscordScreen_C_BuildRewardUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       CurrentFaction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::CurrentPlayerFaction(class UCommunityGoalFaction** CurrentFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction");
		
		UScreen_DiscordScreen_C_CurrentPlayerFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentFaction != nullptr)
			*CurrentFaction = params.CurrentFaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isGoal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isRecruitment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScreen_DiscordScreen_C::SetGoalState(bool isGoal, bool isRecruitment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState");
		
		UScreen_DiscordScreen_C_SetGoalState_Params params {};
		params.isGoal = isGoal;
		params.isRecruitment = isRecruitment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Goals                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Values                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UScreen_DiscordScreen_C::SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int32_t>* Members)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals");
		
		UScreen_DiscordScreen_C_SetGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goals != nullptr)
			*Goals = params.Goals;
		if (Values != nullptr)
			*Values = params.Values;
		if (Members != nullptr)
			*Members = params.Members;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::TestCommunityGoals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals");
		
		UScreen_DiscordScreen_C_TestCommunityGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct");
		
		UScreen_DiscordScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::DoRunningText(const class FText& Text, int32_t Index, class UTextBlock* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text");
		
		UScreen_DiscordScreen_C_DoRunningText_Params params {};
		params.Text = Text;
		params.Index = Index;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScreen_DiscordScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct");
		
		UScreen_DiscordScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::CheckState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState");
		
		UScreen_DiscordScreen_C_CheckState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::RegisterEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents");
		
		UScreen_DiscordScreen_C_RegisterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Goals                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Values                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UScreen_DiscordScreen_C::OnFactionsDataRecievedEvent(TArray<class FString> Goals, TArray<float> Values, TArray<int32_t> Members)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent");
		
		UScreen_DiscordScreen_C_OnFactionsDataRecievedEvent_Params params {};
		params.Goals = Goals;
		params.Values = Values;
		params.Members = Members;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               stateReceived                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScreen_DiscordScreen_C::OnCGSDataReceivedEvent(bool stateReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent");
		
		UScreen_DiscordScreen_C_OnCGSDataReceivedEvent_Params params {};
		params.stateReceived = stateReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::RequestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData");
		
		UScreen_DiscordScreen_C_RequestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct");
		
		UScreen_DiscordScreen_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::ResetFactionCheckState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState");
		
		UScreen_DiscordScreen_C_ResetFactionCheckState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UScreen_DiscordScreen_C_BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::OnFactionChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent");
		
		UScreen_DiscordScreen_C_OnFactionChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::RefreshUi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui");
		
		UScreen_DiscordScreen_C_RefreshUi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized
	 * 		Flags  -> ()
	 */
	void UScreen_DiscordScreen_C::OnGoalInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized");
		
		UScreen_DiscordScreen_C_OnGoalInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::ExecuteUbergraph_Screen_DiscordScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen");
		
		UScreen_DiscordScreen_C_ExecuteUbergraph_Screen_DiscordScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECommunityUIState                                  CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECommunityUIState                                  previousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_DiscordScreen_C::ScreenChanged__DelegateSignature(ECommunityUIState CurrentState, ECommunityUIState previousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature");
		
		UScreen_DiscordScreen_C_ScreenChanged__DelegateSignature_Params params {};
		params.CurrentState = CurrentState;
		params.previousState = previousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreen_DiscordScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreen_DiscordScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Screen_DiscordScreen.Screen_DiscordScreen_C");
		return ptr;
	}

}


