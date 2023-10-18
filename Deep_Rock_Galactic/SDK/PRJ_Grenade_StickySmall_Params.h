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
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_Stick
	 */
	struct APRJ_Grenade_StickySmall_C_OnRep_Stick_Params
	{	};

	/**
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted
	 */
	struct APRJ_Grenade_StickySmall_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TWFM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay
	 */
	struct APRJ_Grenade_StickySmall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom
	 */
	struct APRJ_Grenade_StickySmall_C_Boom_Params
	{	};

	/**
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep
	 */
	struct APRJ_Grenade_StickySmall_C_Beep_Params
	{	};

	/**
	 * Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall
	 */
	struct APRJ_Grenade_StickySmall_C_ExecuteUbergraph_PRJ_Grenade_StickySmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
