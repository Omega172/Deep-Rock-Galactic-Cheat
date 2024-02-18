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
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGoo
	 */
	struct APRJ_BigGooProjectile_C_SpawnSmallGoo_Params
	{
	public:
		struct FVector                                             InVec;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__FinishedFunc
	 */
	struct APRJ_BigGooProjectile_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__UpdateFunc
	 */
	struct APRJ_BigGooProjectile_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGooBalls
	 */
	struct APRJ_BigGooProjectile_C_SpawnSmallGooBalls_Params
	{
	public:
		struct FVector                                             ImpactNormal;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnUpgradeElementAdded
	 */
	struct APRJ_BigGooProjectile_C_OnUpgradeElementAdded_Params
	{
	public:
		class UProjectileUpgradeElement*                           element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnImpacted
	 */
	struct APRJ_BigGooProjectile_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JO3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnInitialized
	 */
	struct APRJ_BigGooProjectile_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.ExecuteUbergraph_PRJ_BigGooProjectile
	 */
	struct APRJ_BigGooProjectile_C_ExecuteUbergraph_PRJ_BigGooProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
