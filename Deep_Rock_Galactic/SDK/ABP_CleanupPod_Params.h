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
	 * Function ABP_CleanupPod.ABP_CleanupPod_C.AnimGraph
	 */
	struct UABP_CleanupPod_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_CleanupPod.ABP_CleanupPod_C.SetOpen
	 */
	struct UABP_CleanupPod_C_SetOpen_Params
	{	};

	/**
	 * Function ABP_CleanupPod.ABP_CleanupPod_C.ExecuteUbergraph_ABP_CleanupPod
	 */
	struct UABP_CleanupPod_C_ExecuteUbergraph_ABP_CleanupPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
