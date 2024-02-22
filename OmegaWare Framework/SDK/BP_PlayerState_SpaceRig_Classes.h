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
	 * BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
	 * Size -> 0x003F (FullSize[0x0528] - InheritedSize[0x04E9])
	 */
	class ABP_PlayerState_SpaceRig_C : public ABP_PlayerState_C
	{
	public:
		unsigned char                                              UnknownData_ETY5[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UItemUpgradePreviewComponent*                        ItemUpgradePreview;                                      // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HealthInsuranceStatus;                                   // 0x0500(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VR3R[0x4];                                   // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStatChange;                                            // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FMissionStatItem>                            MissionStats;                                            // 0x0518(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify

	public:
		void GetMissionStatValue(class UMissionStat* MissionStat, class FText* StatValue, bool* Valid);
		void SendMissionStatData(class UMissionStat* MissionStat, float Value);
		void UpdateMissionStat(class UMissionStat* MissionStat, float Value);
		void IsListeningToMissionStat(class UMissionStat* MissionStat, bool* HasStat);
		void OnRep_MissionStats();
		void GetHealthInsuranceStatus(int32_t* HealthInsuranceStatus);
		void UserConstructionScript();
		void WatchStat(class UMissionStat* MissionStat);
		void ReceiveBeginPlay();
		void CheckCampaign();
		void OnMissionStatChanged(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
		void Server_UpdateStat(class UMissionStat* MissionStat, float StatValue);
		void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32_t EntryPoint);
		void OnStatChange__DelegateSignature(class UMissionStat* MissionStat, const class FText& StatValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
