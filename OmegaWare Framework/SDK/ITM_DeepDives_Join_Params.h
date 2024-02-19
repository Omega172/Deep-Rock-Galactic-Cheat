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
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.HandleKeyDown
	 */
	struct UITM_DeepDives_Join_C_HandleKeyDown_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutHandled;                                              // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJ3J[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         OutReply;                                                // 0x0040(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnKeyDown
	 */
	struct UITM_DeepDives_Join_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.DisableProgressionModsandJoin
	 */
	struct UITM_DeepDives_Join_C_DisableProgressionModsandJoin_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.UpdateTextSearchAndGametypeFilter
	 */
	struct UITM_DeepDives_Join_C_UpdateTextSearchAndGametypeFilter_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViewsIfVisible
	 */
	struct UITM_DeepDives_Join_C_PopulateServerViewsIfVisible_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateNext
	 */
	struct UITM_DeepDives_Join_C_PopulateNext_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ClearServerViews
	 */
	struct UITM_DeepDives_Join_C_ClearServerViews_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViews
	 */
	struct UITM_DeepDives_Join_C_PopulateServerViews_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_1FB10C08435EA9BCE39BD9ABFF154396
	 */
	struct UITM_DeepDives_Join_C_OnFailure_1FB10C08435EA9BCE39BD9ABFF154396_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396
	 */
	struct UITM_DeepDives_Join_C_OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_0B5BC1CF422A3FBD05716A89A13443B1
	 */
	struct UITM_DeepDives_Join_C_OnFailure_0B5BC1CF422A3FBD05716A89A13443B1_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1
	 */
	struct UITM_DeepDives_Join_C_OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Construct
	 */
	struct UITM_DeepDives_Join_C_Construct_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Open
	 */
	struct UITM_DeepDives_Join_C_Open_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoinServerClicked
	 */
	struct UITM_DeepDives_Join_C_OnJoinServerClicked_Params
	{
	public:
		struct FBlueprintSessionResult                             InSession;                                               // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Close Waiting Window
	 */
	struct UITM_DeepDives_Join_C_CloseWaitingWindow_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Join Server
	 */
	struct UITM_DeepDives_Join_C_JoinServer_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ModdedSaveLoaded
	 */
	struct UITM_DeepDives_Join_C_ModdedSaveLoaded_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnBlocked
	 */
	struct UITM_DeepDives_Join_C_OnBlocked_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Refresh
	 */
	struct UITM_DeepDives_Join_C_Refresh_Params
	{	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ExecuteUbergraph_ITM_DeepDives_Join
	 */
	struct UITM_DeepDives_Join_C_ExecuteUbergraph_ITM_DeepDives_Join_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoining__DelegateSignature
	 */
	struct UITM_DeepDives_Join_C_OnJoining__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
