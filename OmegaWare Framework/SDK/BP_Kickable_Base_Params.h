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
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation
	 */
	struct ABP_Kickable_Base_C_OnRep_KickSoundLocation_Params
	{	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	 */
	struct ABP_Kickable_Base_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Kickable_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.destroy
	 */
	struct ABP_Kickable_Base_C_destroy_Params
	{	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick
	 */
	struct ABP_Kickable_Base_C_Play_Kick_Params
	{
	public:
		class APlayerCharacter*                                    Kicker;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Kickable_Base_C_BndEvt__KickableMesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.Set Is Interactable
	 */
	struct ABP_Kickable_Base_C_SetIsInteractable_Params
	{
	public:
		bool                                                       Caninteract;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base
	 */
	struct ABP_Kickable_Base_C_ExecuteUbergraph_BP_Kickable_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
