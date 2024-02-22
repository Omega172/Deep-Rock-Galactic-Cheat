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
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.BndEvt__BP_FriendlyShredder_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_FriendlyShredder_C_BndEvt__BP_FriendlyShredder_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.BndEvt__BP_FriendlyShredder_MeleeAttack_K2Node_ComponentBoundEvent_1_MeleeAttackDelegate__DelegateSignature
	 */
	struct ABP_FriendlyShredder_C_BndEvt__BP_FriendlyShredder_MeleeAttack_K2Node_ComponentBoundEvent_1_MeleeAttackDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.GiveSpeedBoost
	 */
	struct ABP_FriendlyShredder_C_GiveSpeedBoost_Params
	{	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.RemoveSpeedBoost
	 */
	struct ABP_FriendlyShredder_C_RemoveSpeedBoost_Params
	{	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.ReceiveTick
	 */
	struct ABP_FriendlyShredder_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.ReceiveBeginPlay
	 */
	struct ABP_FriendlyShredder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	 */
	struct ABP_FriendlyShredder_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.HandleRotationToTarget
	 */
	struct ABP_FriendlyShredder_C_HandleRotationToTarget_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.destroy
	 */
	struct ABP_FriendlyShredder_C_destroy_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.PlayAccelerationSound
	 */
	struct ABP_FriendlyShredder_C_PlayAccelerationSound_Params
	{	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.OnMessageAI
	 */
	struct ABP_FriendlyShredder_C_OnMessageAI_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FriendlyShredder.BP_FriendlyShredder_C.ExecuteUbergraph_BP_FriendlyShredder
	 */
	struct ABP_FriendlyShredder_C_ExecuteUbergraph_BP_FriendlyShredder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HI0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
