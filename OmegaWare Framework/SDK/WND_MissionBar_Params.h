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
	 * Function WND_MissionBar.WND_MissionBar_C.SetMissionType
	 */
	struct UWND_MissionBar_C_SetMissionType_Params
	{
	public:
		bool                                                       IsSingleMission;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YRUI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
	 */
	struct UWND_MissionBar_C_SetGeneratedMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
	 */
	struct UWND_MissionBar_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MissionBar.WND_MissionBar_C.Construct
	 */
	struct UWND_MissionBar_C_Construct_Params
	{	};

	/**
	 * Function WND_MissionBar.WND_MissionBar_C.PreConstruct
	 */
	struct UWND_MissionBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
	 */
	struct UWND_MissionBar_C_ExecuteUbergraph_WND_MissionBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
