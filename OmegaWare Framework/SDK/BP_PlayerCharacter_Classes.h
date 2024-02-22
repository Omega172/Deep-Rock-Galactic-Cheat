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
	 * BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
	 * Size -> 0x0280 (FullSize[0x10C0] - InheritedSize[0x0E40])
	 */
	class ABP_PlayerCharacter_C : public APlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E40(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Mesh_Lamp;                                               // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_InfectedState_C*                                 BP_InfectedState;                                        // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USingleUsableComponent*                              BeastMasterUsable;                                       // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_EnemyControlState_C*                             BP_EnemyControlState;                                    // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                FilmFaceLight;                                           // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PushingState_C*                                  BP_PushingState;                                         // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_TrackMovementState_C*                            BP_TrackMovementState;                                   // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   SelfieSpringArmPoint;                                    // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SelfieSpringArm;                                         // 0x0E88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Fixed_Selfie_Points;                                     // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SelfieCameraSetup;                                       // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShieldBoostUsable*                                  ShieldBoostUsable;                                       // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_AudioControl_LowHealth_C*                        BP_AudioControl;                                         // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_AttachedState_C*                                 BP_AttachedState;                                        // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PilotingState_C*                                 BP_PilotingState;                                        // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DeadState_C*                                     BP_DeadState;                                            // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PhotographyState_C*                              BP_PhotographyState;                                     // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PassedOut_C*                                     BP_PassedOut;                                            // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_IntoxicationComponent_C*                         BP_IntoxicationComponent;                                // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FrozenState_C*                                   BP_FrozenState;                                          // 0x0EE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ScannerArrow;                                            // 0x0EE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_GrabbedState_C*                                  BP_GrabbedState;                                         // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                FP_PointLight_CloseShine_Ground;                         // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ShoulderCamLocation;                                     // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 ShoulderCamArm;                                          // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                DebugPointLight;                                         // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint6;                                         // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint5;                                         // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint4;                                         // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint3;                                         // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint2;                                         // 0x0F48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint1;                                         // 0x0F50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint;                                          // 0x0F58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SelfiePoint_C*                                   BP_SelfiePoint8;                                         // 0x0F60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DropShadow;                                              // 0x0F68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFragileDebrisCleaner*                               FragileDebrisCleanerCore;                                // 0x0F70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFragileDebrisCleaner*                               FragileDebrisCleanerFeet;                                // 0x0F78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Ambient_Dust;                                          // 0x0F80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FlyingState_C*                                   BP_FlyingState;                                          // 0x0F88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 TP_SpotLight_shadow;                                     // 0x0F90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TP_SpotLight;                                            // 0x0F98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 FP_SpotLight_Light;                                      // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FP_SpotLight;                                            // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                EmergencyLight;                                          // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                FP_PointLight_CloseShine;                                // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_NoMovementState_C*                               BP_NoMovementState;                                      // 0x0FC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ZipLineState_C*                                  BP_ZipLineState;                                         // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_UsingState_C*                                    BP_UsingState;                                           // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ShieldRegenAudio;                                        // 0x0FD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URadarPointComponent*                                radarPoint;                                              // 0x0FE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ParalyzedState_C*                                BP_ParalyzedState;                                       // 0x0FE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_SpotCloseShine;                               // 0x0FF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DownedState_C*                                   BP_DownedState;                                          // 0x0FF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FallingState_C*                                  BP_FallingState;                                         // 0x1000(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WalkingState_C*                                  BP_WalkingState;                                         // 0x1008(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_LightCone;                                            // 0x1010(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Lamp_rim;                                           // 0x1018(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    UsableCollision;                                         // 0x1020(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889; // 0x1028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889; // 0x102C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8X8L[0x3];                                   // 0x102D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  EmergencyTimeline;                                       // 0x1030(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61; // 0x1038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61; // 0x103C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61; // 0x1040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UVTM[0x7];                                   // 0x1041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ShieldRegenTimeline;                                     // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldRegenTime;                                         // 0x1050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDamageTime;                                          // 0x1054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBP_SelfiePoint_C*>                           FixedSelfiePointList;                                    // 0x1058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UBP_SelfiePoint_C*                                   ActiveSelfiePoint;                                       // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasHUDVisible;                                           // 0x1070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5KC8[0x7];                                   // 0x1071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReverbEffect*                                       PreDownReverb;                                           // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FScaledEffect                                       MixerConfetti;                                           // 0x1080(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UParticleSystem*                                     InstantReviveParticles;                                  // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          InstantReviveCue;                                        // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftShiftPressed;                                        // 0x10A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftCtrPressed;                                          // 0x10A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL8L[0x6];                                   // 0x10A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        SelfieZoomTimer;                                         // 0x10A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SelfieMoveRightTimer;                                    // 0x10B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SelfieMoveUpTimer;                                       // 0x10B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateWeaponLicenseStat();
		class UUsableComponent* GetBeastMasterUsableComponent();
		void GotoNextSelfiePoint(bool ForceExitSelfieMode);
		void SetActiveSelfiePoint(class UBP_SelfiePoint_C* InSelfiePoint);
		bool DamageCausesReaction(class UDamageClass* DamageClass);
		class USceneComponent* GetDownCameraAttachPoint();
		class USceneComponent* GetDownCameraRotationPoint();
		void ChromaEffect(unsigned char Effect);
		void CharacterAudioThrottled(class UDialogDataAsset* Shout);
		void UpdateHeadLight();
		void ShieldRegenTimeline__FinishedFunc();
		void ShieldRegenTimeline__UpdateFunc();
		void EmergencyTimeline__FinishedFunc();
		void EmergencyTimeline__UpdateFunc();
		void InpActEvt_P_K2Node_InputKeyEvent_17(const struct FKey& Key);
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(const struct FKey& Key);
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_14(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_13(const struct FKey& Key);
		void InpActEvt_PageDown_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_PageDown_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_PageUp_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_PageUp_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void InpActEvt_Home_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Home_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_End_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_End_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Insert_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Insert_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Delete_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Delete_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void BP_OnControllerReady();
		void ReceiveBeginPlay();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount);
		void StopRegenAudio();
		void BP_OnUpdateMeshes();
		void CharacterStateChanged(ECharacterState NewState);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
		void InitSelfieCam();
		void SetDustVisible(bool Visible);
		void ReceiveOnHeadlightOn();
		void ResetSaveGameIDInEditor();
		void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
		void MixerClientSpawnConfettii(const struct FVector& Location, const struct FRotator& Rotation);
		void MixerServerSpawnConfettii(const struct FVector& Location, const struct FRotator& Rotation);
		void MixerSpawnConfetti(const struct FVector& Location, const struct FRotator& Rotation);
		void PrepareForEndScreen();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const struct FDamageData& DamageData, bool anyHealthLost);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const struct FDamageData& DamageData, bool anyHealthLost);
		void Receive_ShowFieldMedicInstantReviveEffects();
		void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
		void SelfieZoom(float InDelta);
		void TickSelfieZoom();
		void SelfieMoveUp(float InDirection);
		void TickSelfieMoveUp();
		void SelfieMoveRight(float InDirection);
		void TickSelfieMoveRight();
		void ReceivePossessed(class AController* NewController);
		void Cheat_Medical();
		void UpdateMissionStats();
		void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
