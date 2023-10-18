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
	 * Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.PreConstruct
	 */
	struct UITM_WeeklyMissionOverlay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetData
	 */
	struct UITM_WeeklyMissionOverlay_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Headline;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShowTimer;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllRequirementsMet;                                      // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.Update Time
	 */
	struct UITM_WeeklyMissionOverlay_C_UpdateTime_Params
	{	};

	/**
	 * Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetInvalid
	 */
	struct UITM_WeeklyMissionOverlay_C_SetInvalid_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.ExecuteUbergraph_ITM_WeeklyMissionOverlay
	 */
	struct UITM_WeeklyMissionOverlay_C_ExecuteUbergraph_ITM_WeeklyMissionOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
