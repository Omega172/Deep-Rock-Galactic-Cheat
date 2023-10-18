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
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight
	 */
	struct ABP_SentryGun_Redeployable_C_UpdateIndicatorLight_Params
	{
	public:
		bool                                                       FiredShot;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W0E1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
	 */
	struct ABP_SentryGun_Redeployable_C_ConditionallyEnableShadows_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
	 */
	struct ABP_SentryGun_Redeployable_C_GetDeployProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
	 */
	struct ABP_SentryGun_Redeployable_C_ToggleBuildMode_Params
	{
	public:
		bool                                                       InBuilding;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
	 */
	struct ABP_SentryGun_Redeployable_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
	 */
	struct ABP_SentryGun_Redeployable_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
	 */
	struct ABP_SentryGun_Redeployable_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveOnDeploy_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveOnDismantle_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveOnDismantled_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveOnDeployed_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
	 */
	struct ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveOnSentryGunOwnerChanged_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
	 */
	struct ABP_SentryGun_Redeployable_C_ActivateSpecialAttack_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
	 */
	struct ABP_SentryGun_Redeployable_C_MulticastSpecialAttackGFX_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
	 */
	struct ABP_SentryGun_Redeployable_C_ResetSpecialAttack_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
	 */
	struct ABP_SentryGun_Redeployable_C_UpdateShadows_Params
	{	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
	 */
	struct ABP_SentryGun_Redeployable_C_BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged
	 */
	struct ABP_SentryGun_Redeployable_C_ReceiveAmmoChanged_Params
	{
	public:
		int32_t                                                    Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    currentAmount;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
	 */
	struct ABP_SentryGun_Redeployable_C_ExecuteUbergraph_BP_SentryGun_Redeployable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
