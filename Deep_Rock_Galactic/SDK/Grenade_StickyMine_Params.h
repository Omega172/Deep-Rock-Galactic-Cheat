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
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead
	 */
	struct AGrenade_StickyMine_C_OnRep_Dead_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries
	 */
	struct AGrenade_StickyMine_C_AddGearStateEntries_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed
	 */
	struct AGrenade_StickyMine_C_OnRep_Armed_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered
	 */
	struct AGrenade_StickyMine_C_OnRep_Triggered_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript
	 */
	struct AGrenade_StickyMine_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc
	 */
	struct AGrenade_StickyMine_C_RingPulse__FinishedFunc_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc
	 */
	struct AGrenade_StickyMine_C_RingPulse__UpdateFunc_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct AGrenade_StickyMine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AGrenade_StickyMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9LS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion
	 */
	struct AGrenade_StickyMine_C_TriggerExplosion_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed
	 */
	struct AGrenade_StickyMine_C_GetArmed_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse
	 */
	struct AGrenade_StickyMine_C_DoTriggerAreaPulse_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	 */
	struct AGrenade_StickyMine_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine
	 */
	struct AGrenade_StickyMine_C_DisarmMine_Params
	{
	public:
		class AThrownGrenadeItem*                                  ThrownGrenadeItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine
	 */
	struct AGrenade_StickyMine_C_KillMine_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast
	 */
	struct AGrenade_StickyMine_C_ExplodeLast_Params
	{	};

	/**
	 * Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine
	 */
	struct AGrenade_StickyMine_C_ExecuteUbergraph_Grenade_StickyMine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
