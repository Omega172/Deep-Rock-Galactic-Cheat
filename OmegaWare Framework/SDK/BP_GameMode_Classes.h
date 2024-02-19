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
	 * BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
	 * Size -> 0x0029 (FullSize[0x0519] - InheritedSize[0x04F0])
	 */
	class ABP_GameMode_C : public AFSDGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEnemyWaveManager*                                   EnemyWaveManager;                                        // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEncounterManager*                                   EncounterManager;                                        // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle;                                             // 0x0510(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       CanSpawnBosco;                                           // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetEditorCharacterClass(class UPlayerCharacterID** CharacterClass);
		void PreloadMuleClass();
		void TryPreloadCheatMenu();
		void GetEscapepodLocation(struct FTransform* Location);
		void EnableMuleButton();
		void DestroyNetworkedActors();
		void LoadToMission(class UMissionTemplate* mission);
		class UClass* GetDefaultPawnClassForController(class AController* InController);
		class AActor* ChoosePlayerStart(class AController* Player);
		void RecieveEndLevel();
		void ReceiveBeginPlay();
		void WaitForGeneration();
		void Recieve_ContinueTimerEnded();
		void CallDropPod();
		void TriggerEndWave(bool cancelAllWaves);
		void SpawnBosco(const struct FTransform& Location);
		void RemoveBosco();
		void HandleBoscoRespawn();
		void OnPlayerLeave(class AFSDPlayerState* PlayerState);
		void Loaded();
		void DonkeyButtonPressed();
		void LoadSpaceRig();
		void ExecuteUbergraph_BP_GameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
