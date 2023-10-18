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
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveDescription
	 */
	struct UOBJ_1st_Facility_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TQU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionCounterText
	 */
	struct UOBJ_1st_Facility_C_GetInMissionCounterText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionText
	 */
	struct UOBJ_1st_Facility_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveAmount
	 */
	struct UOBJ_1st_Facility_C_GetObjectiveAmount_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.IsObjectiveResource
	 */
	struct UOBJ_1st_Facility_C_IsObjectiveResource_Params
	{
	public:
		class UResourceData*                                       InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionCounterIcon
	 */
	struct UOBJ_1st_Facility_C_GetInMissionCounterIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveIcon
	 */
	struct UOBJ_1st_Facility_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.ReceiveBeginPlay
	 */
	struct UOBJ_1st_Facility_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.OnCoreDeposited
	 */
	struct UOBJ_1st_Facility_C_OnCoreDeposited_Params
	{	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.Receive_AddEnemies
	 */
	struct UOBJ_1st_Facility_C_Receive_AddEnemies_Params
	{
	public:
		class AProceduralSetup*                                    Setup;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.OBJ_Updated
	 */
	struct UOBJ_1st_Facility_C_OBJ_Updated_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Facility.OBJ_1st_Facility_C.ExecuteUbergraph_OBJ_1st_Facility
	 */
	struct UOBJ_1st_Facility_C_ExecuteUbergraph_OBJ_1st_Facility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_40QO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
