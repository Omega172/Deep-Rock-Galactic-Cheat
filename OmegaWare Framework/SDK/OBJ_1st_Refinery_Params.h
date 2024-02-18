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
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveAmount
	 */
	struct UOBJ_1st_Refinery_C_GetObjectiveAmount_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveDescription
	 */
	struct UOBJ_1st_Refinery_C_GetObjectiveDescription_Params
	{
	public:
		float                                                      missionLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VG6B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetInMissionText
	 */
	struct UOBJ_1st_Refinery_C_GetInMissionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveIcon
	 */
	struct UOBJ_1st_Refinery_C_GetObjectiveIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ReceiveRefinerySpawned
	 */
	struct UOBJ_1st_Refinery_C_ReceiveRefinerySpawned_Params
	{
	public:
		class AFSDRefinery*                                        InRefinery;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.OnRefineryStateChangedBP
	 */
	struct UOBJ_1st_Refinery_C_OnRefineryStateChangedBP_Params
	{
	public:
		ERefineryState                                             InRefineryState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ExecuteUbergraph_OBJ_1st_Refinery
	 */
	struct UOBJ_1st_Refinery_C_ExecuteUbergraph_OBJ_1st_Refinery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
