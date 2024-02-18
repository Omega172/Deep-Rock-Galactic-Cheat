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
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled
	 */
	struct APRJ_ChargedBlasterShot_C_OnRep_AoEEnabled_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript
	 */
	struct APRJ_ChargedBlasterShot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc
	 */
	struct APRJ_ChargedBlasterShot_C_GrowTimeLine__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc
	 */
	struct APRJ_ChargedBlasterShot_C_GrowTimeLine__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted
	 */
	struct APRJ_ChargedBlasterShot_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5X8A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	 */
	struct APRJ_ChargedBlasterShot_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRJ_ChargedBlasterShot_C_BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZX5F[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled
	 */
	struct APRJ_ChargedBlasterShot_C_OnAoEDamageEnabled_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UpdateFNRadius
	 */
	struct APRJ_ChargedBlasterShot_C_UpdateFNRadius_Params
	{
	public:
		float                                                      NewRadius;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnInitialized
	 */
	struct APRJ_ChargedBlasterShot_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot
	 */
	struct APRJ_ChargedBlasterShot_C_ExecuteUbergraph_PRJ_ChargedBlasterShot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
