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
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnRep_bFallToGround
	 */
	struct APRJ_FlareGun_Projectile01_C_OnRep_bFallToGround_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.SpawnImpact
	 */
	struct APRJ_FlareGun_Projectile01_C_SpawnImpact_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
	 */
	struct APRJ_FlareGun_Projectile01_C_UpdateShadowRadius_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
	 */
	struct APRJ_FlareGun_Projectile01_C_StartFadeOut_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A261[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
	 */
	struct APRJ_FlareGun_Projectile01_C_GetHealthBaseComponentFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHealthComponentBase*                                Health;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
	 */
	struct APRJ_FlareGun_Projectile01_C_FallToGround_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
	 */
	struct APRJ_FlareGun_Projectile01_C_Light_Anim__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
	 */
	struct APRJ_FlareGun_Projectile01_C_Light_Anim__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
	 */
	struct APRJ_FlareGun_Projectile01_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E04O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	 */
	struct APRJ_FlareGun_Projectile01_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
	 */
	struct APRJ_FlareGun_Projectile01_C_OnDroppodImpact_Params
	{
	public:
		class ATeamTransport*                                      DropPod;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
	 */
	struct APRJ_FlareGun_Projectile01_C_HideAll_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
	 */
	struct APRJ_FlareGun_Projectile01_C_OnFlareExtinguish_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
	 */
	struct APRJ_FlareGun_Projectile01_C_OnUpdateShadowRadius_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare
	 */
	struct APRJ_FlareGun_Projectile01_C_ActivateFlare_Params
	{	};

	/**
	 * Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
	 */
	struct APRJ_FlareGun_Projectile01_C_ExecuteUbergraph_PRJ_FlareGun_Projectile01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
