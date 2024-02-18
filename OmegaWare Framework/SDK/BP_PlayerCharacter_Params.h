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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateWeaponLicenseStat
	 */
	struct ABP_PlayerCharacter_C_UpdateWeaponLicenseStat_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBeastMasterUsableComponent
	 */
	struct ABP_PlayerCharacter_C_GetBeastMasterUsableComponent_Params
	{
	public:
		class UUsableComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint
	 */
	struct ABP_PlayerCharacter_C_GotoNextSelfiePoint_Params
	{
	public:
		bool                                                       ForceExitSelfieMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S8TF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint
	 */
	struct ABP_PlayerCharacter_C_SetActiveSelfiePoint_Params
	{
	public:
		class UBP_SelfiePoint_C*                                   InSelfiePoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction
	 */
	struct ABP_PlayerCharacter_C_DamageCausesReaction_Params
	{
	public:
		class UDamageClass*                                        DamageClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
	 */
	struct ABP_PlayerCharacter_C_GetDownCameraAttachPoint_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
	 */
	struct ABP_PlayerCharacter_C_GetDownCameraRotationPoint_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
	 */
	struct ABP_PlayerCharacter_C_ChromaEffect_Params
	{
	public:
		unsigned char                                              Effect;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
	 */
	struct ABP_PlayerCharacter_C_CharacterAudioThrottled_Params
	{
	public:
		class UDialogDataAsset*                                    Shout;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
	 */
	struct ABP_PlayerCharacter_C_UpdateHeadLight_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
	 */
	struct ABP_PlayerCharacter_C_ShieldRegenTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
	 */
	struct ABP_PlayerCharacter_C_ShieldRegenTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
	 */
	struct ABP_PlayerCharacter_C_EmergencyTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
	 */
	struct ABP_PlayerCharacter_C_EmergencyTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
	 */
	struct ABP_PlayerCharacter_C_BP_OnControllerReady_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
	 */
	struct ABP_PlayerCharacter_C_StopRegenAudio_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
	 */
	struct ABP_PlayerCharacter_C_BP_OnUpdateMeshes_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
	 */
	struct ABP_PlayerCharacter_C_CharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
	 */
	struct ABP_PlayerCharacter_C_InitSelfieCam_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
	 */
	struct ABP_PlayerCharacter_C_SetDustVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
	 */
	struct ABP_PlayerCharacter_C_ReceiveOnHeadlightOn_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
	 */
	struct ABP_PlayerCharacter_C_ResetSaveGameIDInEditor_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
	 */
	struct ABP_PlayerCharacter_C_OnTemporaryBuffChanged_Params
	{
	public:
		class UTemporaryBuff*                                      buff;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    AffectedPlayer;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii
	 */
	struct ABP_PlayerCharacter_C_MixerClientSpawnConfettii_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii
	 */
	struct ABP_PlayerCharacter_C_MixerServerSpawnConfettii_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti
	 */
	struct ABP_PlayerCharacter_C_MixerSpawnConfetti_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen
	 */
	struct ABP_PlayerCharacter_C_PrepareForEndScreen_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZKCS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A3LN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects
	 */
	struct ABP_PlayerCharacter_C_Receive_ShowFieldMedicInstantReviveEffects_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
	 */
	struct ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
	 */
	struct ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom
	 */
	struct ABP_PlayerCharacter_C_SelfieZoom_Params
	{
	public:
		float                                                      InDelta;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom
	 */
	struct ABP_PlayerCharacter_C_TickSelfieZoom_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp
	 */
	struct ABP_PlayerCharacter_C_SelfieMoveUp_Params
	{
	public:
		float                                                      InDirection;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp
	 */
	struct ABP_PlayerCharacter_C_TickSelfieMoveUp_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight
	 */
	struct ABP_PlayerCharacter_C_SelfieMoveRight_Params
	{
	public:
		float                                                      InDirection;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight
	 */
	struct ABP_PlayerCharacter_C_TickSelfieMoveRight_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed
	 */
	struct ABP_PlayerCharacter_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cheat_Medical
	 */
	struct ABP_PlayerCharacter_C_Cheat_Medical_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update MissionStats
	 */
	struct ABP_PlayerCharacter_C_UpdateMissionStats_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
	 */
	struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7FX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
