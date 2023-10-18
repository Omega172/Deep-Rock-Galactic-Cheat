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
	 * BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C
	 * Size -> 0x0218 (FullSize[0x0438] - InheritedSize[0x0220])
	 */
	class ACharacterSelectionSwitcher_C : public ACharacterSelectionSwitcher
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEndScreenSetups_C*                                  EndScreenSetups;                                         // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndScreenActorController_C*                         EndScreenActorController3;                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndScreenActorController_C*                         EndScreenActorController2;                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndScreenActorController_C*                         EndScreenActorController1;                               // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndScreenActorController_C*                         EndScreenActorController0;                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Dwarf_Rig;                                               // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PlayerCharacterClass;                                    // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerCharacter*                                    Character;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        Camera;                                                  // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              selectionLocation;                                       // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CustomizationLocation;                                   // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        IdleTimer;                                               // 0x0288(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EquippedIndex;                                           // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharselectionCameraLocation                               CurrentSelection;                                        // 0x0294(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_62XR[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Viewer3DCharacterClass;                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ViewerObject;                                            // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ViewWeaponCamLocation;                                   // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ViewWeaponObjectLocation;                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItem*                                               EquipedItem;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastManualRotate;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S2UH[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              View3DItemClass;                                         // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              EndScreenCamLocation;                                    // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      EndscreenActors;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FCharacterViewScene                                 Scene;                                                   // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AActor*>                                      EndScreenActorPositions_Four;                            // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      EndScreenActorPositions_Three;                           // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      EndScreenActorPositions_Two;                             // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      EndScreenActorPositions_One;                             // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class UEndScreenActorController_C*>                 CharAnimControllers;                                     // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FRandomStream                                       EndScreenRandomStream;                                   // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		TArray<class AActor*>                                      EndscreenOnlySceneActors;                                // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      CharacterViewSceneOnlyActors;                            // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class UFSDPhysicalMaterial*                                EndscreenPhysicalMaterial;                               // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Endscreen_Lamp_C*>                        EndScreenLamps;                                          // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class AActor*                                              ForgeCamLocation;                                        // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ForgeStartLocation;                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerTPAnimInstance*                               ForgeAnimInstance;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                  ForgeBench;                                              // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsIdling;                                                // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LDHR[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MatrixCore;                                              // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsForging;                                               // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7UP4[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequenceBase*>                           ForgeIdleBreaks;                                         // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimSequence*                                       Prop_AnimSeq;                                            // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Prop_Actor;                                              // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Victory_Pose;                                            // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Prop_ActorClass;                                         // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Prop_Pose;                                               // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Prop_Idle;                                               // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Victory_Idle;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RestartLoadoutIdle;                                      // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKBX[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDPhysicalMaterial*                                CharacerViewerFallbackPhysicalMaterial;                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PickaxeCameraLocation;                                   // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Podium;                                                  // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CraftingLocation;                                        // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CleanActors();
		class AActor* GetViewerActor();
		void RestartVanityIdleAnimMonatge();
		void CleanVictoryPoseStuff();
		void LoadVictoryPoseStuff(class UVictoryPose* VicPose);
		void FindEndscreenActorPos(int32_t numplayers, int32_t Index, class AActor** NewParam);
		void DestroyPreviousSceneActors();
		void AddYawWorldRotation(float Yaw);
		void SetPreviewItem(class UItemID* Item);
		void SelectCameraLocation(ECharselectionCameraLocation Selection);
		class APlayerCharacter* GetActiveCharacter();
		void RefreshCharacter(ECharselectionCameraLocation SelectionType);
		void OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(class UObject* Loaded);
		void OnLoaded_516F3DE24C233C61C7A1519D1101C230(class UObject* Loaded);
		void OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName);
		void OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName);
		void OnInterrupted_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName);
		void OnBlendOut_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName);
		void OnCompleted_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName);
		void OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName);
		void OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName);
		void OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName);
		void OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName);
		void OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName);
		void OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName);
		void OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName);
		void OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName);
		void OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName);
		void OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void OnShowCharacterSelector(class UClass* NewCharacter, ECharselectionCameraLocation selectionLocation);
		void SwitchToWeapon(int32_t WeaponIndex);
		void EquipSlot(int32_t EquipSlot);
		void StartIdles();
		void SetIdleBreak();
		void Hide();
		void Rotate(float Pitch, float Yaw);
		void VanityLoop();
		void DoStuff();
		void StartVanityIdles();
		void OnVanityItemEquipped(EVanitySlot Slot);
		void ShowViewer3D(class UClass* Actor, ECharselectionCameraLocation selectionLocation);
		void Equip(class UClass* itemClass, int32_t EquipSlot);
		void ReceiveTick(float DeltaSeconds);
		void ShowEndScreen(const struct FCharacterViewScene& viewScene);
		void ForgeLoop();
		void ForgeStart();
		void BreakEnd(class UAnimMontage* Montage, bool bInterrupted);
		void ForgeIdleLoop();
		void OnVictoryPoseChanged(class UVictoryPose* VictoryPose);
		void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
		void PoseDone(class UAnimMontage* Montage, bool bInterrupted);
		void OnCharacterRefresh();
		void SkipForging();
		void OnForgingDone();
		void ExecuteUbergraph_CharacterSelectionSwitcher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
