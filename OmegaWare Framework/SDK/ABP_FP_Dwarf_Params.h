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
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimGraph
	 */
	struct UABP_FP_Dwarf_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Mine
	 */
	struct UABP_FP_Dwarf_C_AnimNotify_Mine_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StartInspectWeapon
	 */
	struct UABP_FP_Dwarf_C_StartInspectWeapon_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StopInspectWeapon
	 */
	struct UABP_FP_Dwarf_C_StopInspectWeapon_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_BeginBuild
	 */
	struct UABP_FP_Dwarf_C_AnimNotify_BeginBuild_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_EndBuild
	 */
	struct UABP_FP_Dwarf_C_AnimNotify_EndBuild_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Generic
	 */
	struct UABP_FP_Dwarf_C_AnimNotify_Generic_Params
	{	};

	/**
	 * Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.ExecuteUbergraph_ABP_FP_Dwarf
	 */
	struct UABP_FP_Dwarf_C_ExecuteUbergraph_ABP_FP_Dwarf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATRD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
