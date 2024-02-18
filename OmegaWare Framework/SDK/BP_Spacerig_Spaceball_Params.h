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
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.UsedByClient
	 */
	struct ABP_Spacerig_Spaceball_C_UsedByClient_Params
	{
	public:
		EInputKeys                                                 Key;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YV76[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerCharacter*                                    KickedBy;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.PlayKickAnim
	 */
	struct ABP_Spacerig_Spaceball_C_PlayKickAnim_Params
	{
	public:
		class APlayerCharacter*                                    Kicker;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.Throw
	 */
	struct ABP_Spacerig_Spaceball_C_Throw_Params
	{
	public:
		struct FVector                                             force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WX9N[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ShootBall
	 */
	struct ABP_Spacerig_Spaceball_C_ShootBall_Params
	{
	public:
		float                                                      ChipValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ExecuteUbergraph_BP_Spacerig_Spaceball
	 */
	struct ABP_Spacerig_Spaceball_C_ExecuteUbergraph_BP_Spacerig_Spaceball_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
