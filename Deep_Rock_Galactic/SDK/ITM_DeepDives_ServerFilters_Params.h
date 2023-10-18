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
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetGametypeFilter
	 */
	struct UITM_DeepDives_ServerFilters_C_GetGametypeFilter_Params
	{
	public:
		TArray<EGameType>                                          SelectedGametypes;                                       // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdatePasswordFilter
	 */
	struct UITM_DeepDives_ServerFilters_C_UpdatePasswordFilter_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetAutoRefresh
	 */
	struct UITM_DeepDives_ServerFilters_C_GetAutoRefresh_Params
	{
	public:
		bool                                                       AutoRefresh;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CVE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.FilterSession
	 */
	struct UITM_DeepDives_ServerFilters_C_FilterSession_Params
	{
	public:
		struct FBlueprintSessionResult                             InSession;                                               // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldFilter;                                            // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENEW[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.IsDifficultySelected
	 */
	struct UITM_DeepDives_ServerFilters_C_IsDifficultySelected_Params
	{
	public:
		class UDifficultySetting*                                  InDifficulty;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdateSearchDistance
	 */
	struct UITM_DeepDives_ServerFilters_C_UpdateSearchDistance_Params
	{
	public:
		ESteamSearchRegion                                         SearchRegion;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYVJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetTextFilter
	 */
	struct UITM_DeepDives_ServerFilters_C_GetTextFilter_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.PreConstruct
	 */
	struct UITM_DeepDives_ServerFilters_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.Construct
	 */
	struct UITM_DeepDives_ServerFilters_C_Construct_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.RefreshSettings
	 */
	struct UITM_DeepDives_ServerFilters_C_RefreshSettings_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.ExecuteUbergraph_ITM_DeepDives_ServerFilters
	 */
	struct UITM_DeepDives_ServerFilters_C_ExecuteUbergraph_ITM_DeepDives_ServerFilters_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SL5F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.OnSearchFiltersChanged__DelegateSignature
	 */
	struct UITM_DeepDives_ServerFilters_C_OnSearchFiltersChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
