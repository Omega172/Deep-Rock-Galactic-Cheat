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
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.NextStoreMode
	 */
	struct UUI_MissionStats_View_C_NextStoreMode_Params
	{	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats
	 */
	struct UUI_MissionStats_View_C_SortStats_Params
	{
	public:
		TArray<class UMissionStat*>                                InStats;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UTexture2D*>                                  Categories;                                              // 0x0010(0x0010)  (Parm, OutParm)
		TArray<class UMissionStat*>                                SortedStats;                                             // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats
	 */
	struct UUI_MissionStats_View_C_GetMissionStats_Params
	{
	public:
		TArray<class UMissionStat*>                                Assets;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct
	 */
	struct UUI_MissionStats_View_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.Construct
	 */
	struct UUI_MissionStats_View_C_Construct_Params
	{	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item
	 */
	struct UUI_MissionStats_View_C_SetSelectedItem_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             SelectedLine;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event
	 */
	struct UUI_MissionStats_View_C_OnHoverBegin_Event_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event
	 */
	struct UUI_MissionStats_View_C_OnHoverEnd_Event_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection
	 */
	struct UUI_MissionStats_View_C_SetupCategorySelection_Params
	{	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged
	 */
	struct UUI_MissionStats_View_C_OnCategorySelectionChanged_Params
	{	};

	/**
	 * Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View
	 */
	struct UUI_MissionStats_View_C_ExecuteUbergraph_UI_MissionStats_View_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
