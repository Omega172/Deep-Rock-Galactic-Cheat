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
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
	 */
	struct UOBJ_Elimination_Base_C_GetInMissionCounterIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
	 */
	struct UOBJ_Elimination_Base_C_GetInMissionCounterText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
	 */
	struct UOBJ_Elimination_Base_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
	 */
	struct UOBJ_Elimination_Base_C_GetObjectiveAmount_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
	 */
	struct UOBJ_Elimination_Base_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
	 */
	struct UOBJ_Elimination_Base_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FDLP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
	 */
	struct UOBJ_Elimination_Base_C_ReceiveTargetKilled_Params
	{	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned
	 */
	struct UOBJ_Elimination_Base_C_ReceiveTargetSpawned_Params
	{	};

	/**
	 * Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
	 */
	struct UOBJ_Elimination_Base_C_ExecuteUbergraph_OBJ_Elimination_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZ5P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
