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
	 * Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.AnimGraph
	 */
	struct UABP_DroppodAirlock_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.BlueprintInitializeAnimation
	 */
	struct UABP_DroppodAirlock_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.BlueprintUpdateAnimation
	 */
	struct UABP_DroppodAirlock_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.ExecuteUbergraph_ABP_DroppodAirlock
	 */
	struct UABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
