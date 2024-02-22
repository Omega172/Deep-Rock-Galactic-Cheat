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
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.OnRep_CurrPlagueCount
	 */
	struct UOBJ_WRN_Plague_C_OnRep_CurrPlagueCount_Params
	{	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterIcon
	 */
	struct UOBJ_WRN_Plague_C_GetInMissionCounterIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterText
	 */
	struct UOBJ_WRN_Plague_C_GetInMissionCounterText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveDescription
	 */
	struct UOBJ_WRN_Plague_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_02GS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionText
	 */
	struct UOBJ_WRN_Plague_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveIcon
	 */
	struct UOBJ_WRN_Plague_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ReceiveBeginPlay
	 */
	struct UOBJ_WRN_Plague_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ExecuteUbergraph_OBJ_WRN_Plague
	 */
	struct UOBJ_WRN_Plague_C_ExecuteUbergraph_OBJ_WRN_Plague_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
