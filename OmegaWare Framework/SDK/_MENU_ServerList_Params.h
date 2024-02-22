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
	 * Function _MENU_ServerList._MENU_ServerList_C.OnKeyDown
	 */
	struct U_MENU_ServerList_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.GetWidgetMousePosition
	 */
	struct U_MENU_ServerList_C_GetWidgetMousePosition_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           OutLocalPos;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.GetHoveredEntryInfo
	 */
	struct U_MENU_ServerList_C_GetHoveredEntryInfo_Params
	{
	public:
		class UITM_ServerList_Entry_C*                             EntryWidget;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WidgetMouseOffset;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QLDD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ServerID;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.Disable Progression Mods and Join
	 */
	struct U_MENU_ServerList_C_DisableProgressionModsandJoin_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.UpdateFromGametype
	 */
	struct U_MENU_ServerList_C_UpdateFromGametype_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.UpdateFromWorkEnvironment
	 */
	struct U_MENU_ServerList_C_UpdateFromWorkEnvironment_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromSearchField
	 */
	struct U_MENU_ServerList_C_UpdateSearchOptionsFromSearchField_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromRestrictedMission
	 */
	struct U_MENU_ServerList_C_UpdateSearchOptionsFromRestrictedMission_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.GetActiveDifficulties
	 */
	struct U_MENU_ServerList_C_GetActiveDifficulties_Params
	{
	public:
		TArray<class UDifficultySetting*>                          Array;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SetSortFunction
	 */
	struct U_MENU_ServerList_C_SetSortFunction_Params
	{
	public:
		EServerSortOrder                                           NewSortingMethod;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths
	 */
	struct U_MENU_ServerList_C_GetColumnWidths_Params
	{
	public:
		TArray<float>                                              OutWidths;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType
	 */
	struct U_MENU_ServerList_C_SetSelectedServerType_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SetServerType
	 */
	struct U_MENU_ServerList_C_SetServerType_Params
	{
	public:
		ESteamServerJoinStatus                                     ServerType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance
	 */
	struct U_MENU_ServerList_C_SetSearchDistance_Params
	{
	public:
		ESteamSearchRegion                                         Distance;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W61Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries
	 */
	struct U_MENU_ServerList_C_CacheUnusedEntries_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry
	 */
	struct U_MENU_ServerList_C_GetCachedEntry_Params
	{
	public:
		class UITM_ServerList_Entry_C*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry
	 */
	struct U_MENU_ServerList_C_AddOrUpdateEntry_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              OutServerID;                                             // 0x0108(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UITM_ServerList_Entry_C*                             OutWidget;                                               // 0x0118(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.ShowNoServersFound
	 */
	struct U_MENU_ServerList_C_ShowNoServersFound_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance
	 */
	struct U_MENU_ServerList_C_SetSelectedSearchDistance_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp
	 */
	struct U_MENU_ServerList_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList
	 */
	struct U_MENU_ServerList_C_PopulateServerList_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     servers;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus
	 */
	struct U_MENU_ServerList_C_CreateSubMenus_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A
	 */
	struct U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A
	 */
	struct U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	 */
	struct U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	 */
	struct U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726
	 */
	struct U_MENU_ServerList_C_OnFailure_0624A35A4162400123C5FFB790E37726_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726
	 */
	struct U_MENU_ServerList_C_OnSuccess_0624A35A4162400123C5FFB790E37726_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38
	 */
	struct U_MENU_ServerList_C_OnFailure_2F44709544BBB762D8D1EDB23AB84A38_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38
	 */
	struct U_MENU_ServerList_C_OnSuccess_2F44709544BBB762D8D1EDB23AB84A38_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471
	 */
	struct U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471
	 */
	struct U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE
	 */
	struct U_MENU_ServerList_C_OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE
	 */
	struct U_MENU_ServerList_C_OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.Construct
	 */
	struct U_MENU_ServerList_C_Construct_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.JoinServer
	 */
	struct U_MENU_ServerList_C_JoinServer_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword
	 */
	struct U_MENU_ServerList_C_JoinServerWithoutPassword_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword
	 */
	struct U_MENU_ServerList_C_JoinServerWithPassword_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.Back Pressed
	 */
	struct U_MENU_ServerList_C_BackPressed_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged
	 */
	struct U_MENU_ServerList_C_ServelistChanged_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission
	 */
	struct U_MENU_ServerList_C_RestrictToMission_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted
	 */
	struct U_MENU_ServerList_C_ClearRestricted_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.PreConstruct
	 */
	struct U_MENU_ServerList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession
	 */
	struct U_MENU_ServerList_C_OnJoiningSession_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnShown
	 */
	struct U_MENU_ServerList_C_OnShown_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList
	 */
	struct U_MENU_ServerList_C_RefreshServerList_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnClosed
	 */
	struct U_MENU_ServerList_C_OnClosed_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.RefreshFriendslist
	 */
	struct U_MENU_ServerList_C_RefreshFriendslist_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.FriendsListUpdated
	 */
	struct U_MENU_ServerList_C_FriendsListUpdated_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YGA8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorStr;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.FriendServerlistShouldBeUpdated
	 */
	struct U_MENU_ServerList_C_FriendServerlistShouldBeUpdated_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.CreateFriendslist
	 */
	struct U_MENU_ServerList_C_CreateFriendslist_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnIsUGCAllowed
	 */
	struct U_MENU_ServerList_C_OnIsUGCAllowed_Params
	{
	public:
		class APlayerState*                                        CheckedPlayerState;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintableUserPrivileges                               CheckedPrivilege;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintablePrivilegeResults                             PrivilegeResult;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.JoinModdedServer
	 */
	struct U_MENU_ServerList_C_JoinModdedServer_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.OnJoiningFailed
	 */
	struct U_MENU_ServerList_C_OnJoiningFailed_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature
	 */
	struct U_MENU_ServerList_C_BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.ModdedSaveLoaded
	 */
	struct U_MENU_ServerList_C_ModdedSaveLoaded_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.JoiningBlocked
	 */
	struct U_MENU_ServerList_C_JoiningBlocked_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.SavegameSwitchCancelled
	 */
	struct U_MENU_ServerList_C_SavegameSwitchCancelled_Params
	{	};

	/**
	 * Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList
	 */
	struct U_MENU_ServerList_C_ExecuteUbergraph__MENU_ServerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NUET[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
