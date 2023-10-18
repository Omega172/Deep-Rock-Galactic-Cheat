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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.ShouldBreakArmorBeforeDamage
	 */
	struct APRJ_PlasmaCarbineShot_C_ShouldBreakArmorBeforeDamage_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.HandleImpact
	 */
	struct APRJ_PlasmaCarbineShot_C_HandleImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.BounceFeedback
	 */
	struct APRJ_PlasmaCarbineShot_C_BounceFeedback_Params
	{	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.OnImpacted
	 */
	struct APRJ_PlasmaCarbineShot_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_13SF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.MakeBouncy
	 */
	struct APRJ_PlasmaCarbineShot_C_MakeBouncy_Params
	{	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct APRJ_PlasmaCarbineShot_C_BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.DoEffects
	 */
	struct APRJ_PlasmaCarbineShot_C_DoEffects_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.DoOnSpawn
	 */
	struct APRJ_PlasmaCarbineShot_C_DoOnSpawn_Params
	{	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.OnInitialized
	 */
	struct APRJ_PlasmaCarbineShot_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.OnUpgradeElementAdded
	 */
	struct APRJ_PlasmaCarbineShot_C_OnUpgradeElementAdded_Params
	{
	public:
		class UProjectileUpgradeElement*                           element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.CustomEvent
	 */
	struct APRJ_PlasmaCarbineShot_C_CustomEvent_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRJ_PlasmaCarbineShot_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MF6G[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C.ExecuteUbergraph_PRJ_PlasmaCarbineShot
	 */
	struct APRJ_PlasmaCarbineShot_C_ExecuteUbergraph_PRJ_PlasmaCarbineShot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
