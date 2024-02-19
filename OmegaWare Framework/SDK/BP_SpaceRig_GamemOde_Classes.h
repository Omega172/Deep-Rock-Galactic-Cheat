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
	 * BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C
	 * Size -> 0x0018 (FullSize[0x0520] - InheritedSize[0x0508])
	 */
	class ABP_SpaceRig_Gamemode_C : public AFSDGameModeSpaceRig
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDifficultyManager*                                  DifficultyManager;                                       // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool PlayerCanRestart(class APlayerController* Player);
		void SendMissionStartAnalytics();
		void SelectRandomAvailableClass(class AFSDPlayerState* Player);
		class AActor* ChoosePlayerStart(class AController* Player);
		void GetGameState(class ABP_GameState_SpaceRig_C** GameState);
		class UClass* GetDefaultPawnClassForController(class AController* InController);
		void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
		void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
		void OnFailure_509E599D4BB91C15BA2979B190501E9F();
		void OnSuccess_509E599D4BB91C15BA2979B190501E9F();
		void ReceiveBeginPlay();
		void OnCountdownComplete();
		void K2_OnLogout(class AController* ExitingController);
		void K2_OnRestartPlayer(class AController* NewPlayer);
		void ControllerReady(class AFSDPlayerController* Target);
		void InstantlyStartMission();
		void Ononlinepriviligechecked(class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
		void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
