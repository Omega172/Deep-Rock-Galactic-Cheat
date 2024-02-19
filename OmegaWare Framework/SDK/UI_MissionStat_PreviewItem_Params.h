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
	 * Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct
	 */
	struct UUI_MissionStat_PreviewItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick
	 */
	struct UUI_MissionStat_PreviewItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat
	 */
	struct UUI_MissionStat_PreviewItem_C_SetMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem
	 */
	struct UUI_MissionStat_PreviewItem_C_ExecuteUbergraph_UI_MissionStat_PreviewItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
