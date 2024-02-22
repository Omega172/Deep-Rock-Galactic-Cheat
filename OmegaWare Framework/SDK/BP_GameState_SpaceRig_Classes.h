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
	 * BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C
	 * Size -> 0x00B8 (FullSize[0x07D8] - InheritedSize[0x0720])
	 */
	class ABP_GameState_SpaceRig_C : public ABP_GameState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnMisionSelected;                                        // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      MissionCountdown;                                        // 0x0738(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       MissionCountdownActive;                                  // 0x073C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_PFIS[0x3];                                   // 0x073D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMissionCountdownChanged;                               // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HostReady;                                               // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HostCountdownActive;                                     // 0x0751(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_1YEV[0x2];                                   // 0x0752(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HostCountdown;                                           // 0x0754(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHostCountdownChanged;                                  // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCountdownCompleted;                                    // 0x0768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHostTimerChanged;                                      // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMissionTimerChanged;                                   // 0x0788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllReady;                                                // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVPS[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlueprintSessionResult>                     ServerList;                                              // 0x07A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnServerListChanged;                                     // 0x07B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SearchingInProgress;                                     // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceQuickJoinSearch;                                    // 0x07C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y73L[0x6];                                   // 0x07C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCountdownChanged;                                      // 0x07C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool AreDeepDiveRequirementsMet();
		void HandleActiveCountdown();
		void OnRep_HostCountdown();
		void OnRep_HostCountdownActive();
		void OnRep_MissionTimerActive();
		void OnRep_MissionCountdown();
		void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
		void OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
		void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
		void ReceiveTick(float DeltaSeconds);
		void StartMissionTimer();
		void StopMissionTimer();
		void StartHostTimer();
		void StopHostTimer();
		void CountDownCompleted();
		void ReceiveBeginPlay();
		void Search();
		void ReceiveGeneratedMissionReplicated();
		void ManualRefreshServerList();
		void Shout_Cooldown_Started();
		void ExecuteUbergraph_BP_GameState_SpaceRig(int32_t EntryPoint);
		void OnCountdownChanged__DelegateSignature(bool Active);
		void OnServerListChanged__DelegateSignature();
		void OnMissionTimerChanged__DelegateSignature(float newTime);
		void OnHostTimerChanged__DelegateSignature(float newTime);
		void OnCountdownCompleted__DelegateSignature();
		void OnHostCountdownChanged__DelegateSignature(bool IsActive);
		void OnMissionCountdownChanged__DelegateSignature(bool IsActive);
		void OnMisionSelected__DelegateSignature(class UGeneratedMission* mission);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
