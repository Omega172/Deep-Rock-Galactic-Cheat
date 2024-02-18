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
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RemoveDoorsIfTheyAreNotPushed
	 */
	struct ABP_SupplyPod_Spawn_C_OnRep_RemoveDoorsIfTheyAreNotPushed_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_LightsOff
	 */
	struct ABP_SupplyPod_Spawn_C_OnRep_LightsOff_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.DoorSlamAudio
	 */
	struct ABP_SupplyPod_Spawn_C_DoorSlamAudio_Params
	{
	public:
		class UPrimitiveComponent*                                 prim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.FindNearestPlayer
	 */
	struct ABP_SupplyPod_Spawn_C_FindNearestPlayer_Params
	{
	public:
		class APlayerCharacter*                                    fromCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    OutNearestPlayer;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.PushDoor
	 */
	struct ABP_SupplyPod_Spawn_C_PushDoor_Params
	{
	public:
		class UPrimitiveComponent*                                 prim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_SidesDestroyed
	 */
	struct ABP_SupplyPod_Spawn_C_OnRep_SidesDestroyed_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RocksParticlesDisabled
	 */
	struct ABP_SupplyPod_Spawn_C_OnRep_RocksParticlesDisabled_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_Character
	 */
	struct ABP_SupplyPod_Spawn_C_OnRep_Character_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__FinishedFunc
	 */
	struct ABP_SupplyPod_Spawn_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__UpdateFunc
	 */
	struct ABP_SupplyPod_Spawn_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDropStarted
	 */
	struct ABP_SupplyPod_Spawn_C_OnDropStarted_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveTick
	 */
	struct ABP_SupplyPod_Spawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodCloseToImpact
	 */
	struct ABP_SupplyPod_Spawn_C_OnDroppodCloseToImpact_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodImpact
	 */
	struct ABP_SupplyPod_Spawn_C_OnDroppodImpact_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Test Drop Pod
	 */
	struct ABP_SupplyPod_Spawn_C_TestDropPod_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveBeginPlay
	 */
	struct ABP_SupplyPod_Spawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.HandleWelcomeShouting
	 */
	struct ABP_SupplyPod_Spawn_C_HandleWelcomeShouting_Params
	{
	public:
		class APlayerCharacter*                                    LateJoinCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_SupplyPod_Spawn_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.CameraShake
	 */
	struct ABP_SupplyPod_Spawn_C_CameraShake_Params
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECameraShakePlaySpace                                      PlaySpace;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SPL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            UserPlaySpaceRot;                                        // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetController
	 */
	struct ABP_SupplyPod_Spawn_C_SetController_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetCharacter
	 */
	struct ABP_SupplyPod_Spawn_C_SetCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ExecuteUbergraph_BP_SupplyPod_Spawn
	 */
	struct ABP_SupplyPod_Spawn_C_ExecuteUbergraph_BP_SupplyPod_Spawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
