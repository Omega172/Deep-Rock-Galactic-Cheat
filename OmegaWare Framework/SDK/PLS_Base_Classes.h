#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * BlueprintGeneratedClass PLS_Base.PLS_Base_C
	 * Size -> 0x0040 (FullSize[0x04F8] - InheritedSize[0x04B8])
	 */
	class APLS_Base_C : public AProceduralSetup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           OutlineMaterial;                                         // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class URoomGenerator*>                              StartingRooms;                                           // 0x04D0(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             CompletedGenerationPass;                                 // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMusicLibrary*                                       MusicOverride;                                           // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnsureSafelandingsite();
		class UProceduralController* GetProceduralController();
		void SpawnCriticalItems(ECriticalItemPass pass);
		bool HasSelectedCharacter();
		void CallGenerationComplete(int32_t pass, EPLS_Passes PLSPass);
		void PlayMusicAndAmbient(int32_t musicIndex);
		void SaveInitialState();
		void CreateCaveGraph();
		void GetRandomRoom(TArray<class URoomGenerator*>* Rooms, bool RemoveRoom, class URoomGenerator** Room);
		void OnLoaded_11827D59481E498DEC10999DAE2915BF(class UClass* Loaded);
		void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass* Loaded);
		void ReceiveBeginPlay();
		void BaseLayerCommitDone();
		void FinalCommitDone();
		void CreateSpawn();
		void Generate_Graph();
		void Generate_Pass_2();
		void Generate_Pass_4();
		void FinalPass();
		void Generate_Pass_5_Server();
		void Generate_Pass_5_Clients();
		void GenerateLandscape();
		void Generate_Pass_5();
		void Generate_Pass_8();
		void BeginLiveGeneration();
		void OnPLSDataRecieved();
		void AddRoomToInitialState(const struct FRoomNode& RoomNode);
		void CreateGraphSecondPass();
		void Generate_Tunnels();
		void StartGenerationOnClient(class AFSDPlayerController* client);
		void GenerateLandscapeFromData(int32_t Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles);
		void CarveTunnels();
		void Generate_Pass_1();
		void Generate_Pass_0_Client();
		void OnCarverDataRecieved(EDebrisItemPass pass);
		void Generate_Pass_3();
		void Generate_Pass_7();
		void Generate_CriticalLargePass();
		void Generate_CriticalLargePass_Client();
		void StartMusicAndAmbient(int32_t Music);
		void ExecuteUbergraph_PLS_Base(int32_t EntryPoint);
		void CompletedGenerationPass__DelegateSignature(int32_t pass, EPLS_Passes PLSPass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
