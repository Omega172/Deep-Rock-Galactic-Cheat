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
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
	 */
	struct UUI_TeamDisplay_C_GetParents_Params
	{
	public:
		TArray<class FString>                                      Names1;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
	 */
	struct UUI_TeamDisplay_C_GetTeam_Params
	{
	public:
		TArray<class AFSDPlayerState*>                             OutTeamMembers;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
	 */
	struct UUI_TeamDisplay_C_UpdateIcons_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
	 */
	struct UUI_TeamDisplay_C_Construct_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
	 */
	struct UUI_TeamDisplay_C_OnFirstWindowOpened_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
	 */
	struct UUI_TeamDisplay_C_OnLastWindowClosed_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
	 */
	struct UUI_TeamDisplay_C_SetupInviteFriends_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
	 */
	struct UUI_TeamDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
	 */
	struct UUI_TeamDisplay_C_UpdateFriendInviteVisibility_Params
	{	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
	 */
	struct UUI_TeamDisplay_C_OnPlayerJoined_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
	 */
	struct UUI_TeamDisplay_C_OnPlayerLeave_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.OnSessionLeaderChanged
	 */
	struct UUI_TeamDisplay_C_OnSessionLeaderChanged_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
	 */
	struct UUI_TeamDisplay_C_ExecuteUbergraph_UI_TeamDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
