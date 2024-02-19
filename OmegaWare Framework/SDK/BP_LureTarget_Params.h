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
	 * Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable
	 */
	struct ABP_LureTarget_C_GetIsTargetable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass
	 */
	struct ABP_LureTarget_C_GetTargetCenterMass_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent
	 */
	struct ABP_LureTarget_C_GetTargetHealthComponent_Params
	{
	public:
		class UHealthComponentBase*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.SetScaleDownLerp
	 */
	struct ABP_LureTarget_C_SetScaleDownLerp_Params
	{
	public:
		float                                                      Z;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      X;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.SetScaleUpLerp
	 */
	struct ABP_LureTarget_C_SetScaleUpLerp_Params
	{
	public:
		float                                                      Z;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      X;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.SetScaleLerpFromRandom
	 */
	struct ABP_LureTarget_C_SetScaleLerpFromRandom_Params
	{
	public:
		float                                                      ZRandomConnection;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YRandomConnection;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XRandomConnection;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript
	 */
	struct ABP_LureTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc
	 */
	struct ABP_LureTarget_C_GrowHologramZ__FinishedFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc
	 */
	struct ABP_LureTarget_C_GrowHologramZ__UpdateFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc
	 */
	struct ABP_LureTarget_C_Disappear__FinishedFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc
	 */
	struct ABP_LureTarget_C_Disappear__UpdateFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc
	 */
	struct ABP_LureTarget_C_Glitch__FinishedFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc
	 */
	struct ABP_LureTarget_C_Glitch__UpdateFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc
	 */
	struct ABP_LureTarget_C_Glitch2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc
	 */
	struct ABP_LureTarget_C_Glitch2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc
	 */
	struct ABP_LureTarget_C_GlitchAnimationRate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc
	 */
	struct ABP_LureTarget_C_GlitchAnimationRate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	 */
	struct ABP_LureTarget_C_BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature
	 */
	struct ABP_LureTarget_C_BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay
	 */
	struct ABP_LureTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects
	 */
	struct ABP_LureTarget_C_ShowDamageEffects_Params
	{
	public:
		class UParticleSystem*                                     Particles;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Orientation;                                             // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget
	 */
	struct ABP_LureTarget_C_ExecuteUbergraph_BP_LureTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
