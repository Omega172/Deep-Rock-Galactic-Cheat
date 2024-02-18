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
	 * Function ABP_MiniMule.ABP_MiniMule_C.AnimGraph
	 */
	struct UABP_MiniMule_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_MiniMule.ABP_MiniMule_C.BlueprintBeginPlay
	 */
	struct UABP_MiniMule_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_MiniMule.ABP_MiniMule_C.BlueprintUpdateAnimation
	 */
	struct UABP_MiniMule_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_MiniMule.ABP_MiniMule_C.ExecuteUbergraph_ABP_MiniMule
	 */
	struct UABP_MiniMule_C_ExecuteUbergraph_ABP_MiniMule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19FL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
