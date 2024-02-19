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
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.StopMissile
	 */
	struct APRJ_MicroMissile_C_StopMissile_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.IncreaseDamage
	 */
	struct APRJ_MicroMissile_C_IncreaseDamage_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__FinishedFunc
	 */
	struct APRJ_MicroMissile_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__UpdateFunc
	 */
	struct APRJ_MicroMissile_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.UnstableFuelMixUpdate
	 */
	struct APRJ_MicroMissile_C_UnstableFuelMixUpdate_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartLightIntensityIncrease
	 */
	struct APRJ_MicroMissile_C_StartLightIntensityIncrease_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartBlink
	 */
	struct APRJ_MicroMissile_C_StartBlink_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnUpgradeElementAdded
	 */
	struct APRJ_MicroMissile_C_OnUpgradeElementAdded_Params
	{
	public:
		class UProjectileUpgradeElement*                           element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.TurnUpLightIndicator
	 */
	struct APRJ_MicroMissile_C_TurnUpLightIndicator_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnInitialized
	 */
	struct APRJ_MicroMissile_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.CountSeconds
	 */
	struct APRJ_MicroMissile_C_CountSeconds_Params
	{	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.Explode
	 */
	struct APRJ_MicroMissile_C_Explode_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.Impact
	 */
	struct APRJ_MicroMissile_C_Impact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnImpacted
	 */
	struct APRJ_MicroMissile_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6L1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_MicroMissile.PRJ_MicroMissile_C.ExecuteUbergraph_PRJ_MicroMissile
	 */
	struct APRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
