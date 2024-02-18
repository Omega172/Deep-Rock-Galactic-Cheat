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
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData
	 */
	struct UWND_MissionBar_Normal_C_SetDifficultyData_Params
	{
	public:
		class UDifficultySetting*                                  Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
	 */
	struct UWND_MissionBar_Normal_C_CampaignChecks_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CampaignMission;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AreRestrictionsMet;                                      // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TNC[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
	 */
	struct UWND_MissionBar_Normal_C_SetGeneratedMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
	 */
	struct UWND_MissionBar_Normal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
	 */
	struct UWND_MissionBar_Normal_C_Construct_Params
	{	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_1
	 */
	struct UWND_MissionBar_Normal_C_OnDifficultyChanged_Event_1_Params
	{
	public:
		class UDifficultySetting*                                  Setting;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
	 */
	struct UWND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXIW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
