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
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize
	 */
	struct APRJ_LineCutter2_C_AdjustLineSize_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript
	 */
	struct APRJ_LineCutter2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__FinishedFunc
	 */
	struct APRJ_LineCutter2_C_ProjectileSlowdown__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__UpdateFunc
	 */
	struct APRJ_LineCutter2_C_ProjectileSlowdown__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile
	 */
	struct APRJ_LineCutter2_C_DisableProjectile_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine
	 */
	struct APRJ_LineCutter2_C_ExpandLine_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage
	 */
	struct APRJ_LineCutter2_C_DoDamage_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay
	 */
	struct APRJ_LineCutter2_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion
	 */
	struct APRJ_LineCutter2_C_StartLineExpansion_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall
	 */
	struct APRJ_LineCutter2_C_CheckTerrainCall_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset
	 */
	struct APRJ_LineCutter2_C_K2_OnReset_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy
	 */
	struct APRJ_LineCutter2_C_LinelifespanDestroy_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode
	 */
	struct APRJ_LineCutter2_C_Explode_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing
	 */
	struct APRJ_LineCutter2_C_LineReducing_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne
	 */
	struct APRJ_LineCutter2_C_ThereCanBeOnlyOne_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed
	 */
	struct APRJ_LineCutter2_C_OnLineDestroyed_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.SetExtraBeamVisibility
	 */
	struct APRJ_LineCutter2_C_SetExtraBeamVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.LeaveTrail
	 */
	struct APRJ_LineCutter2_C_LeaveTrail_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartSpawningTrail
	 */
	struct APRJ_LineCutter2_C_StartSpawningTrail_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnInitialized
	 */
	struct APRJ_LineCutter2_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2
	 */
	struct APRJ_LineCutter2_C_ExecuteUbergraph_PRJ_LineCutter2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PS2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
