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
	 * BlueprintGeneratedClass LVL_SpaceRig.LVL_SpaceRig_C
	 * Size -> 0x0228 (FullSize[0x0450] - InheritedSize[0x0228])
	 */
	class ALVL_SpaceRig_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      SunSpeed;                                                // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentNumberOfBarrelsInDroppod;                         // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentNumberOfBarrels;                                  // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DesiredBarrelNumber;                                     // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MedbayBantersPlayed;                                     // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Playersspawned;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFSDAchievement*                                     TimeWellSpentAchievement;                                // 0x0248(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFSDAchievement*                                     ForeignObjectsInTheLaunchbay;                            // 0x0250(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      Preload_Widgets;                                         // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAudioComponent*>                             AmbientAudioComponents;                                  // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FLinearColor                                        BarLightColor;                                           // 0x0278(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           CurrentAmbienceCue;                                      // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           DefaultAmbienceCue;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty;   // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEmitter*                                            P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                  SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;  // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;       // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0378(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASign_MemorialUnlock_C*                              Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APointLight*                                         Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DropPod_Rig_C*                                   BP_DropPod_Rig_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TrashCompactorDirection_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerBox*                                         TriggerBox_TrashCompactor_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Phys_Newsstand_FreeBeer_C*                       BP_Phys_Newsstand_FreeBeer4_EdGraph_0_RefProperty;       // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Phys_Newsstand_FreeBeer_C*                       BP_Phys_Newsstand_FreeBeer3_EdGraph_0_RefProperty;       // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Phys_Newsstand_FreeBeer_C*                       BP_Phys_Newsstand_FreeBeer2_EdGraph_0_RefProperty;       // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Phys_Newsstand_FreeBeer_C*                       BP_Phys_Newsstand_FreeBeer_2_EdGraph_0_RefProperty;      // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ConfettiPlane_C*                                 BP_ConfettiPlane3_EdGraph_0_RefProperty;                 // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ConfettiPlane_C*                                 BP_ConfettiPlane2_EdGraph_0_RefProperty;                 // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ConfettiPlane_C*                                 BP_ConfettiPlane_4_EdGraph_0_RefProperty;                // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                  SK_Banner3_EdGraph_0_RefProperty;                        // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ModularLamp_C*                                   BP_Lamp_BASE3_EdGraph_2_RefProperty;                     // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ModularLamp_C*                                   BP_Lamp_BASE2_5_EdGraph_2_RefProperty;                   // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateAmbienceAudioComponents();
		void OnRep_BarLightColor();
		void GetEventOrDefaultAmbiance(class USoundCue** OutAmbiance);
		void SetBeerEventActive(bool IsActive);
		void OnLoaded_C80486AD4277C47F32FE05A37AB96333(class UClass* Loaded);
		void ReceiveBeginPlay();
		void OnLeaveSpacerig_Event_1();
		void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
		void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
		void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
		void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
		void Playmedbaybanter(class AFSDPlayerController* Playercontroller);
		void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnFreeBeerRewardChanged(bool IsBeersFree);
		void OnCountdownChanged_Event_1(bool Active);
		void StreamSubLevels();
		void BndEvt__LVL_SpaceRig_TriggerBox_TrashCompactor_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void SpawnTrashCompactor(float Seed);
		void OnStreamerModeChanged(bool NewValue);
		void HandleEventSpecifics();
		void ExecuteUbergraph_LVL_SpaceRig(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
