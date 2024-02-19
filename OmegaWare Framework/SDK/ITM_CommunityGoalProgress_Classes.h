#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * WidgetBlueprintGeneratedClass ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C
	 * Size -> 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
	 */
	class UITM_CommunityGoalProgress_C : public UFSDUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_Menu_ColorBar_C*                              Basic_Menu_ColorBar;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoal_C*                                CurrentFactionGoal;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoal_C*                                Faction1Goal;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoal_C*                                Faction2Goal;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoal_TotalProgress_C*                  ITM_CommunityGoal_TotalProgress;                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalInformation_C*                     ITM_CommunityGoalInformation;                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Progress;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalCountdown_C*                       ProgressCountDown;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    CurrentFaction;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H21A[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UITM_CommunityGoalRewardToolTip_C*                   ToolTipRef;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetInfoToCurrentFaction();
		void SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int32_t>* Members, float MinersUnionTier, bool ForceRefresh);
		void TestCommunityGoal();
		void SetTime(float Seconds);
		void Construct();
		void CHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
		void F1Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
		void F2Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
		void CHEnd();
		void F1End();
		void F2End();
		void TotalHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
		void TotalEnd();
		void ExecuteUbergraph_ITM_CommunityGoalProgress(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
