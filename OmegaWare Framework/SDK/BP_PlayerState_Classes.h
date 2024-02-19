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
	 * BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
	 * Size -> 0x0031 (FullSize[0x04E9] - InheritedSize[0x04B8])
	 */
	class ABP_PlayerState_C : public AFSDPlayerState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPlayerResourceComponent*                            PlayerResource;                                          // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       LateJoinFinished;                                        // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TestDropThing;                                           // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YYS[0x6];                                   // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PodSpawnClass;                                           // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PodBeacnClass;                                           // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TestLateJoin;                                            // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		TArray<struct FCreditsReward> GetDeepDiveCreditsReward(int32_t StagesCompleted, int32_t goldCollected);
		void GetRessupyBeaconClass(class UClass** PodSpawnClass);
		void GetRessuplySpawnClass(class UClass** PodSpawnClass);
		void SpawnPlayerInPod(class AFSDPlayerController* Player);
		void SpawnPlayerDirectly(class AController* Player);
		void OnLoaded_E2B28351414D5B2A20966496F0955946(class UClass* Loaded);
		void OnLoaded_97A4F0694E71C770F24EA6A654B14857(class UClass* Loaded);
		void OnLateJoinFinished();
		void ReceiveBeginPlay();
		void LogState();
		void CharacterSelected();
		void TestLatjoin();
		void RespawnPlayer();
		void ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
