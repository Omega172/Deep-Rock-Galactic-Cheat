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
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
	 */
	struct UUI_DeathStats_View_C_SortStats_Params
	{
	public:
		TArray<class UMissionStat*>                                InStats;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UTexture2D*>                                  Categories;                                              // 0x0010(0x0010)  (Parm, OutParm)
		TArray<class UMissionStat*>                                SortedStats;                                             // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
	 */
	struct UUI_DeathStats_View_C_GetMissionStats_Params
	{
	public:
		TArray<class UMissionStat*>                                Assets;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
	 */
	struct UUI_DeathStats_View_C_StoreMode_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
	 */
	struct UUI_DeathStats_View_C_SetSelectedItem_Params
	{
	public:
		class UUI_InfirmaryStats_Item_C*                           SelectedLine;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
	 */
	struct UUI_DeathStats_View_C_SetStatsOwner_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
	 */
	struct UUI_DeathStats_View_C_ChangeName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.ReBuild
	 */
	struct UUI_DeathStats_View_C_ReBuild_Params
	{	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.PreConstruct
	 */
	struct UUI_DeathStats_View_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
	 */
	struct UUI_DeathStats_View_C_ExecuteUbergraph_UI_DeathStats_View_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
