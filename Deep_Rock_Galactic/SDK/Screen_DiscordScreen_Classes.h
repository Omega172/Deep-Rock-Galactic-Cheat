#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Screen_DiscordScreen.Screen_DiscordScreen_C
	 * Size -> 0x0169 (FullSize[0x03C9] - InheritedSize[0x0260])
	 */
	class UScreen_DiscordScreen_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_Menu_MinimalWindow_C*                         Basic_Menu_MinimalWindow;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable_C*                             ClaimRewardButton;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConsoleScreen_Notification_C*                       ConsoleScreen_Notification;                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ContentSwitcher;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalFactionSelection_C*                ITM_CommunityGoalFactionSelection;                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalProgress_C*                        ITM_CommunityGoalProgress;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalRecruitment_C*                     ITM_CommunityGoalRecruitment;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalReward_C*                          ITM_CommunityGoalReward;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalReward_C*                          ITM_CommunityGoalReward_163;                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LOADING;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Progress;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RECRUITMENT;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Reward;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SELECTFACTION;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   Twitch_Loading;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ScreenChanged;                                           // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                CCTitle;                                                 // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CCText;                                                  // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DDTitle;                                                 // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DDText;                                                  // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MMTitle;                                                 // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MMText;                                                  // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Faction;                                                 // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9DXZ[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UITM_CommunityGoal_C*>                        GoalsArray;                                              // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        GoalStateTimer;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ECommunityUIState                                          CurrentState;                                            // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECommunityUIState                                          LastState;                                               // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRecruitmentPeriod;                                     // 0x03B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7XM0[0x5];                                   // 0x03B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCommunityGoalFaction*>                       FactionData;                                             // 0x03B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       IsGoalPeriod;                                            // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuildProgressUI(bool ForceRefresh);
		void RefreshCurrentState();
		void SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID);
		void AwardRewards();
		void MinersUnionTier(float* DSMUTier);
		void BuildRewardUI();
		void CurrentPlayerFaction(class UCommunityGoalFaction** CurrentFaction);
		void SetGoalState(bool isGoal, bool isRecruitment);
		void SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int32_t>* Members);
		void TestCommunityGoals();
		void Construct();
		void DoRunningText(const class FText& Text, int32_t Index, class UTextBlock* Target);
		void PreConstruct(bool IsDesignTime);
		void CheckState();
		void RegisterEvents();
		void OnFactionsDataRecievedEvent(TArray<class FString> Goals, TArray<float> Values, TArray<int32_t> Members);
		void OnCGSDataReceivedEvent(bool stateReceived);
		void RequestData();
		void Destruct();
		void ResetFactionCheckState();
		void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
		void OnFactionChangedEvent();
		void RefreshUi();
		void OnGoalInitialized();
		void ExecuteUbergraph_Screen_DiscordScreen(int32_t EntryPoint);
		void ScreenChanged__DelegateSignature(ECommunityUIState CurrentState, ECommunityUIState previousState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
