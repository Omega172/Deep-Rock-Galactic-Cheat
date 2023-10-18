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
	 * Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
	 */
	struct UUI_MissionStat_Preview_C_Construct_Params
	{	};

	/**
	 * Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
	 */
	struct UUI_MissionStat_Preview_C_SetMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
	 */
	struct UUI_MissionStat_Preview_C_ExecuteUbergraph_UI_MissionStat_Preview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
