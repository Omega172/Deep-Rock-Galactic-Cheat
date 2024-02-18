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
	 * Function BP_Gem.BP_Gem_C.ReleaseToWorld
	 */
	struct ABP_Gem_C_ReleaseToWorld_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.SetPickedUp
	 */
	struct ABP_Gem_C_SetPickedUp_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.PointCleared
	 */
	struct ABP_Gem_C_PointCleared_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.All_PlayDugFree
	 */
	struct ABP_Gem_C_All_PlayDugFree_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_Gem_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.Throw
	 */
	struct ABP_Gem_C_Throw_Params
	{
	public:
		struct FVector                                             force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.ReceiveBeginPlay
	 */
	struct ABP_Gem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.Receive_OnDeposited
	 */
	struct ABP_Gem_C_Receive_OnDeposited_Params
	{
	public:
		class APlayerCharacter*                                    fromPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              toActor;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.Cheat_ReleaseToWorld
	 */
	struct ABP_Gem_C_Cheat_ReleaseToWorld_Params
	{	};

	/**
	 * Function BP_Gem.BP_Gem_C.OnAttachChanged
	 */
	struct ABP_Gem_C_OnAttachChanged_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.UpdateAttachState
	 */
	struct ABP_Gem_C_UpdateAttachState_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Gem.BP_Gem_C.ExecuteUbergraph_BP_Gem
	 */
	struct ABP_Gem_C_ExecuteUbergraph_BP_Gem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
