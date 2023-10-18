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
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetEditorCharacterClass
	 */
	struct ABP_PlayerControllerBase_C_GetEditorCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled
	 */
	struct ABP_PlayerControllerBase_C_SetIsEscapeMenuEnabled_Params
	{
	public:
		bool                                                       IsEscapeMenuEnabled;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector
	 */
	struct ABP_PlayerControllerBase_C_SetHasShownCharacterSelector_Params
	{
	public:
		bool                                                       HasShown;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter
	 */
	struct ABP_PlayerControllerBase_C_ItemFilter_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TEAC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics
	 */
	struct ABP_PlayerControllerBase_C_SetClassAnalytics_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics
	 */
	struct ABP_PlayerControllerBase_C_SetUnlockAnalytics_Params
	{
	public:
		TArray<class UClass*>                                      Primary;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UClass*>                                      Secundary;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems
	 */
	struct ABP_PlayerControllerBase_C_GetUnlockedItems_Params
	{
	public:
		EItemCategory                                              Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UI01[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      UnlockedItems;                                           // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel
	 */
	struct ABP_PlayerControllerBase_C_ReStartAnsel_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel
	 */
	struct ABP_PlayerControllerBase_C_StartAnsel_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel
	 */
	struct ABP_PlayerControllerBase_C_StopAnsel_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated
	 */
	struct ABP_PlayerControllerBase_C_CreateInviteRequestIfNotCreated_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3
	 */
	struct ABP_PlayerControllerBase_C_InpActEvt_AcceptInvite_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2
	 */
	struct ABP_PlayerControllerBase_C_InpActEvt_RejectInvite_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1
	 */
	struct ABP_PlayerControllerBase_C_InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1
	 */
	struct ABP_PlayerControllerBase_C_InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerControllerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode
	 */
	struct ABP_PlayerControllerBase_C_SetPhotographyMode_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera
	 */
	struct ABP_PlayerControllerBase_C_ReturnClientCamera_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling
	 */
	struct ABP_PlayerControllerBase_C_SetupInviteHandling_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification
	 */
	struct ABP_PlayerControllerBase_C_SetupRetirementNotification_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event
	 */
	struct ABP_PlayerControllerBase_C_OnCharacterCanRetire_Event_Params
	{
	public:
		class UClass*                                              CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics
	 */
	struct ABP_PlayerControllerBase_C_UpdateAnalytics_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera
	 */
	struct ABP_PlayerControllerBase_C_AdjustCamera_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User
	 */
	struct ABP_PlayerControllerBase_C_SetupChangeUser_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser
	 */
	struct ABP_PlayerControllerBase_C_ChangeUser_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply
	 */
	struct ABP_PlayerControllerBase_C_ChangeUserReply_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location
	 */
	struct ABP_PlayerControllerBase_C_ResetPlayerLocation_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CustomEvent_2
	 */
	struct ABP_PlayerControllerBase_C_CustomEvent_2_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SpawnHUDAsync
	 */
	struct ABP_PlayerControllerBase_C_SpawnHUDAsync_Params
	{	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnJoinRequest
	 */
	struct ABP_PlayerControllerBase_C_OnJoinRequest_Params
	{
	public:
		struct FDiscordUserDataSDK                                 joinRequest;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply
	 */
	struct ABP_PlayerControllerBase_C_EventOnJoinRequestReply_Params
	{
	public:
		int32_t                                                    Reply;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase
	 */
	struct ABP_PlayerControllerBase_C_ExecuteUbergraph_BP_PlayerControllerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature
	 */
	struct ABP_PlayerControllerBase_C_ReplyToInviteRequest__DelegateSignature_Params
	{
	public:
		int32_t                                                    Reply;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
