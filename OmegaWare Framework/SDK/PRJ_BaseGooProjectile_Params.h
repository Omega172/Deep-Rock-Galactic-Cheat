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
	 * Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnImpacted
	 */
	struct APRJ_BaseGooProjectile_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAJ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnUpgradeElementAdded
	 */
	struct APRJ_BaseGooProjectile_C_OnUpgradeElementAdded_Params
	{
	public:
		class UProjectileUpgradeElement*                           element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.DestroyProjectile
	 */
	struct APRJ_BaseGooProjectile_C_DestroyProjectile_Params
	{	};

	/**
	 * Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.ExecuteUbergraph_PRJ_BaseGooProjectile
	 */
	struct APRJ_BaseGooProjectile_C_ExecuteUbergraph_PRJ_BaseGooProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
