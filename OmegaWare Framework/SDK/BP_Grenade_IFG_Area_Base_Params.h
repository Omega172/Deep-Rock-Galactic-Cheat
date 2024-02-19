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
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.OnRep_Actice
	 */
	struct ABP_Grenade_IFG_Area_Base_C_OnRep_Actice_Params
	{	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.UserConstructionScript
	 */
	struct ABP_Grenade_IFG_Area_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Grenade_IFG_Area_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
	 */
	struct ABP_Grenade_IFG_Area_Base_C_BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       entered;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ActiveWeakeningEffect
	 */
	struct ABP_Grenade_IFG_Area_Base_C_ActiveWeakeningEffect_Params
	{	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XDKN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ExecuteUbergraph_BP_Grenade_IFG_Area_Base
	 */
	struct ABP_Grenade_IFG_Area_Base_C_ExecuteUbergraph_BP_Grenade_IFG_Area_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
