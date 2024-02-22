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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation
	 */
	struct ABP_DropPod_Base_C_GetDonkeyReturnPickupLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleSequenceComplete
	 */
	struct ABP_DropPod_Base_C_OnRep_MuleSequenceComplete_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.CollectMule
	 */
	struct ABP_DropPod_Base_C_CollectMule_Params
	{
	public:
		class AMULE*                                               MULE;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleUnloadTransform
	 */
	struct ABP_DropPod_Base_C_OnRep_MuleUnloadTransform_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.GetMuleUnloadTarget
	 */
	struct ABP_DropPod_Base_C_GetMuleUnloadTarget_Params
	{
	public:
		class AMULE*                                               MULE;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45HI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.EnableMulebay
	 */
	struct ABP_DropPod_Base_C_EnableMulebay_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_DoorState
	 */
	struct ABP_DropPod_Base_C_OnRep_DoorState_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OperateMuleBay
	 */
	struct ABP_DropPod_Base_C_OperateMuleBay_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9KV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp
	 */
	struct ABP_DropPod_Base_C_AnyPlayersOnRamp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7YXX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity
	 */
	struct ABP_DropPod_Base_C_HandleRampPhotosensitivity_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled
	 */
	struct ABP_DropPod_Base_C_SetPathBlockersEnabled_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose
	 */
	struct ABP_DropPod_Base_C_DestroyIfClose_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      DistanceSQ;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems
	 */
	struct ABP_DropPod_Base_C_RemoveDangerousCaveItems_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel
	 */
	struct ABP_DropPod_Base_C_SetAllPlayersAnsel_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6EB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState
	 */
	struct ABP_DropPod_Base_C_SetDoorState_Params
	{
	public:
		EDroppodDoorState                                          DoorState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown
	 */
	struct ABP_DropPod_Base_C_GetCountDown_Params
	{
	public:
		bool                                                       First;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7U6N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Widget_DropPod_AltitudeMeter_C*                  AsBPCountDownActor;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance
	 */
	struct ABP_DropPod_Base_C_OnRep_MuleInstance_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded
	 */
	struct ABP_DropPod_Base_C_OnMuleLoaded_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule
	 */
	struct ABP_DropPod_Base_C_GetMule_Params
	{
	public:
		class AMolly*                                              Donkey;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown
	 */
	struct ABP_DropPod_Base_C_SetStandingDown_Params
	{
	public:
		bool                                                       IsStandingDown;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QH3M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp
	 */
	struct ABP_DropPod_Base_C_CloseRamp_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp
	 */
	struct ABP_DropPod_Base_C_OpenRamp_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod
	 */
	struct ABP_DropPod_Base_C_OnAllPlayersLeftPod_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter
	 */
	struct ABP_DropPod_Base_C_SetPreferredCharacter_Params
	{
	public:
		class UChildActorComponent*                                Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  Class;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript
	 */
	struct ABP_DropPod_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__FinishedFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_5__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__UpdateFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_5__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc
	 */
	struct ABP_DropPod_Base_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay
	 */
	struct ABP_DropPod_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap
	 */
	struct ABP_DropPod_Base_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap
	 */
	struct ABP_DropPod_Base_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture
	 */
	struct ABP_DropPod_Base_C_StartDeparture_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact
	 */
	struct ABP_DropPod_Base_C_OnDroppodImpact_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence
	 */
	struct ABP_DropPod_Base_C_StartDonkeyUnloadSequence_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey
	 */
	struct ABP_DropPod_Base_C_UnloadDonkey_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted
	 */
	struct ABP_DropPod_Base_C_OnDrillingStarted_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey
	 */
	struct ABP_DropPod_Base_C_LoadDonkey_Params
	{
	public:
		class AMULE*                                               MULE;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06CN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RGI9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate
	 */
	struct ABP_DropPod_Base_C_DrillRotate_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter
	 */
	struct ABP_DropPod_Base_C_OnCharacterEnter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit
	 */
	struct ABP_DropPod_Base_C_OnCharacterExit_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel
	 */
	struct ABP_DropPod_Base_C_DropPodSetAnsel_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel
	 */
	struct ABP_DropPod_Base_C_AllSetAnsel_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_527Q[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove
	 */
	struct ABP_DropPod_Base_C_MakeTruckerDicesMove_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnFirstPlayerLeftPod
	 */
	struct ABP_DropPod_Base_C_OnFirstPlayerLeftPod_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveDestroyed
	 */
	struct ABP_DropPod_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRepDoorState
	 */
	struct ABP_DropPod_Base_C_OnRepDoorState_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.LowerMuleToGround
	 */
	struct ABP_DropPod_Base_C_LowerMuleToGround_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OpenMuleBay
	 */
	struct ABP_DropPod_Base_C_OpenMuleBay_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch_Event_1
	 */
	struct ABP_DropPod_Base_C_OnMuleBayOpenedDispatch_Event_1_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance
	 */
	struct ABP_DropPod_Base_C_SetMuleInstance_Params
	{
	public:
		class AMolly*                                              Donkey;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState
	 */
	struct ABP_DropPod_Base_C_OnRep_RampState_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged
	 */
	struct ABP_DropPod_Base_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base
	 */
	struct ABP_DropPod_Base_C_ExecuteUbergraph_BP_DropPod_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_OnMuleBayOpenedDispatch__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DropPod_Base.BP_DropPod_Base_C.DoorStateChanged__DelegateSignature
	 */
	struct ABP_DropPod_Base_C_DoorStateChanged__DelegateSignature_Params
	{
	public:
		EDroppodDoorState                                          DoorState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
