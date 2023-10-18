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
	 * Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetMissionIcon
	 */
	struct UOBJ_1st_Gather_AlienEggs_C_GetMissionIcon_Params
	{
	public:
		struct FObjectiveMissionIcon                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetNumberOfSpeicalEggs
	 */
	struct UOBJ_1st_Gather_AlienEggs_C_GetNumberOfSpeicalEggs_Params
	{
	public:
		TArray<class AActor*>                                      TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.TurnOnSpecialEggs
	 */
	struct UOBJ_1st_Gather_AlienEggs_C_TurnOnSpecialEggs_Params
	{	};

	/**
	 * Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.Receive_StartTracking
	 */
	struct UOBJ_1st_Gather_AlienEggs_C_Receive_StartTracking_Params
	{	};

	/**
	 * Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.ExecuteUbergraph_OBJ_1st_Gather_AlienEggs
	 */
	struct UOBJ_1st_Gather_AlienEggs_C_ExecuteUbergraph_OBJ_1st_Gather_AlienEggs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C7NQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
