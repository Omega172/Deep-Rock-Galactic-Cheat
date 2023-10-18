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
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.LoadCloudSaves
	 */
	struct UMenu_RestoreSaves_C_LoadCloudSaves_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.UpdateCloudSaveUI
	 */
	struct UMenu_RestoreSaves_C_UpdateCloudSaveUI_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
	 */
	struct UMenu_RestoreSaves_C_CreateCloudSaveList_Params
	{
	public:
		TArray<class UFSDSaveGame*>                                Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
	 */
	struct UMenu_RestoreSaves_C_ClearList_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
	 */
	struct UMenu_RestoreSaves_C_CreateSaveList_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
	 */
	struct UMenu_RestoreSaves_C_Construct_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UMenu_RestoreSaves_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
	 */
	struct UMenu_RestoreSaves_C_Back_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
	 */
	struct UMenu_RestoreSaves_C_OnShown_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
	 */
	struct UMenu_RestoreSaves_C_OnClosed_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
	 */
	struct UMenu_RestoreSaves_C_Refresh_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
	 */
	struct UMenu_RestoreSaves_C_CloudFailed_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
	 */
	struct UMenu_RestoreSaves_C_CloadSaveGames_Params
	{
	public:
		TArray<class UFSDSaveGame*>                                savegames;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UMenu_RestoreSaves_C_BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReceiveOkCommand
	 */
	struct UMenu_RestoreSaves_C_ReceiveOkCommand_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.PreConstruct
	 */
	struct UMenu_RestoreSaves_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReenableLoadmoreButton
	 */
	struct UMenu_RestoreSaves_C_ReenableLoadmoreButton_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.Timeout
	 */
	struct UMenu_RestoreSaves_C_Timeout_Params
	{	};

	/**
	 * Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
	 */
	struct UMenu_RestoreSaves_C_ExecuteUbergraph_Menu_RestoreSaves_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
