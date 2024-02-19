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
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterIcon
	 */
	struct UOBJ_2nd_KillFleas_C_GetInMissionCounterIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterText
	 */
	struct UOBJ_2nd_KillFleas_C_GetInMissionCounterText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetMissionIcon
	 */
	struct UOBJ_2nd_KillFleas_C_GetMissionIcon_Params
	{
	public:
		struct FObjectiveMissionIcon                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveIcon
	 */
	struct UOBJ_2nd_KillFleas_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveAmount
	 */
	struct UOBJ_2nd_KillFleas_C_GetObjectiveAmount_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionText
	 */
	struct UOBJ_2nd_KillFleas_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveDescription
	 */
	struct UOBJ_2nd_KillFleas_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_558M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
