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
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveAmount
	 */
	struct UOBJ_1st_Escort_C_GetObjectiveAmount_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveDescription
	 */
	struct UOBJ_1st_Escort_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_847W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetInMissionText
	 */
	struct UOBJ_1st_Escort_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveIcon
	 */
	struct UOBJ_1st_Escort_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.ReceiveBeginPlay
	 */
	struct UOBJ_1st_Escort_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnEscortMuleSpawnedEvent
	 */
	struct UOBJ_1st_Escort_C_OnEscortMuleSpawnedEvent_Params
	{	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnMuleDied
	 */
	struct UOBJ_1st_Escort_C_OnMuleDied_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.SpawnGarage
	 */
	struct UOBJ_1st_Escort_C_SpawnGarage_Params
	{	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnAllDwarvesDown
	 */
	struct UOBJ_1st_Escort_C_OnAllDwarvesDown_Params
	{	};

	/**
	 * Function OBJ_1st_Escort.OBJ_1st_Escort_C.ExecuteUbergraph_OBJ_1st_Escort
	 */
	struct UOBJ_1st_Escort_C_ExecuteUbergraph_OBJ_1st_Escort_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U91O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
