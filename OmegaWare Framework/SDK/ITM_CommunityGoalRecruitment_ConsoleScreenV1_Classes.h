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
	 * WidgetBlueprintGeneratedClass ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class UITM_CommunityGoalRecruitment_ConsoleScreenV1_C : public UFSDUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_CommunityGoalResult_ConsoleScreenV1_C*          CurrentFactionGoalResult;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalResult_ConsoleScreenV1_C*          Faction1GoalResult;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CommunityGoalResult_ConsoleScreenV1_C*          Faction2GoalResult;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_ResetFaction_ConsoleScreenV1_C*                 ITM_ResetFaction;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RECRUITMENT;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CheckState;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCommunityGoalFaction*                               CurrentFaction;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FactionIndex;                                            // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8X27[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCommunityGoalFaction*>                       FactionsArray;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance

	public:
		void SetResultFactionID(class UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32_t FactionID);
		void BuildRecruitmentUI(class UCommunityGoalFaction* Faction);
		void Construct();
		void ResetFactionCheckState();
		void ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32_t EntryPoint);
		void CheckState__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
