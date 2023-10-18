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
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_FindPlayerList_Params
	{
	public:
		TArray<class AFSDPlayerState*>                             OutPlayers;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnFailure_BB3F54234323B8FC909E35A9D25E3656
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_OnFailure_BB3F54234323B8FC909E35A9D25E3656_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnSuccess_BB3F54234323B8FC909E35A9D25E3656
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_OnSuccess_BB3F54234323B8FC909E35A9D25E3656_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_Construct_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_AddPlayer_Params
	{
	public:
		class AFSDPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_Update_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_OnPlayerJoined_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_OnPlayerLeave_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_InviteFriends_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2
	 */
	struct UHUD_TabPlayerList_InteractableV2_C_ExecuteUbergraph_HUD_TabPlayerList_InteractableV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
