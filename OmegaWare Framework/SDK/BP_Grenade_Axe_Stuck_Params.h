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
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_SimulateAxePhysics
	 */
	struct ABP_Grenade_Axe_Stuck_C_OnRep_SimulateAxePhysics_Params
	{	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
	 */
	struct ABP_Grenade_Axe_Stuck_C_OnRep_StandOnMe_Params
	{	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem
	 */
	struct ABP_Grenade_Axe_Stuck_C_OnRep_AxeGrenadeItem_Params
	{	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
	 */
	struct ABP_Grenade_Axe_Stuck_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
	 */
	struct ABP_Grenade_Axe_Stuck_C_PickUpAxe_Params
	{
	public:
		class AThrownGrenadeItem*                                  ThrownGrenadeItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe
	 */
	struct ABP_Grenade_Axe_Stuck_C_DetachAxe_Params
	{	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
	 */
	struct ABP_Grenade_Axe_Stuck_C_Attach_Params
	{
	public:
		class AActor*                                              ParentActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ParentComponent;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ParentSocketName;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanRetrieve;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
	 */
	struct ABP_Grenade_Axe_Stuck_C_OnDestroyed_Event_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
	 */
	struct ABP_Grenade_Axe_Stuck_C_OnDeath_Event_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
	 */
	struct ABP_Grenade_Axe_Stuck_C_GoPhysical_Params
	{
	public:
		bool                                                       PassThrough;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanRetrieve;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
	 */
	struct ABP_Grenade_Axe_Stuck_C_MakeStandable_Params
	{
	public:
		bool                                                       CanRetrieve;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
	 */
	struct ABP_Grenade_Axe_Stuck_C_SetRetrieval_Params
	{
	public:
		bool                                                       CanRetrieve;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	 */
	struct ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
	 */
	struct ABP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
