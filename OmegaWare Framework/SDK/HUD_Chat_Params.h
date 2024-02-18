#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function HUD_Chat.HUD_Chat_C.FilterBlockedUserMessage
	 */
	struct UHUD_Chat_C_FilterBlockedUserMessage_Params
	{
	public:
		struct FFSDChatMessage                                     InMessage;                                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EChatMessageType                                           FilteredMessageType;                                     // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULY7[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FilteredMessage;                                         // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.FilterMessage
	 */
	struct UHUD_Chat_C_FilterMessage_Params
	{
	public:
		struct FFSDChatMessage                                     InMessage;                                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFSDChatMessage                                     FilteredMessage;                                         // 0x0060(0x0060)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.FilterProfanityMessage
	 */
	struct UHUD_Chat_C_FilterProfanityMessage_Params
	{
	public:
		class FString                                              MessageToFilter;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutMessage;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.SetMaxLinesFromFontSize
	 */
	struct UHUD_Chat_C_SetMaxLinesFromFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.UpdateChatMessages
	 */
	struct UHUD_Chat_C_UpdateChatMessages_Params
	{
	public:
		bool                                                       resetAge;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WEFE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
	 */
	struct UHUD_Chat_C_IsStringNotEmpty_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       isEmpty;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BHEC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.GetSenderType
	 */
	struct UHUD_Chat_C_GetSenderType_Params
	{
	public:
		EChatSenderType                                            SenderType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7KW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.OpenChat
	 */
	struct UHUD_Chat_C_OpenChat_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.BeginChat
	 */
	struct UHUD_Chat_C_BeginChat_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.OnOpenChat
	 */
	struct UHUD_Chat_C_OnOpenChat_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.Update Chat Background
	 */
	struct UHUD_Chat_C_UpdateChatBackground_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.Add Chat Message
	 */
	struct UHUD_Chat_C_AddChatMessage_Params
	{
	public:
		struct FFSDChatMessage                                     Msg;                                                     // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
	 */
	struct UHUD_Chat_C_OnMessageHidden_Event_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.PreConstruct
	 */
	struct UHUD_Chat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.CloseChat
	 */
	struct UHUD_Chat_C_CloseChat_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
	 */
	struct UHUD_Chat_C_OnBackgroundFadeFinished_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.SendChatMessage
	 */
	struct UHUD_Chat_C_SendChatMessage_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.NewMesssage
	 */
	struct UHUD_Chat_C_NewMesssage_Params
	{
	public:
		struct FFSDChatMessage                                     Message;                                                 // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.Construct
	 */
	struct UHUD_Chat_C_Construct_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.OnFontSizeChange
	 */
	struct UHUD_Chat_C_OnFontSizeChange_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.PlatformDependentClose
	 */
	struct UHUD_Chat_C_PlatformDependentClose_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.ChatOpenCooldown
	 */
	struct UHUD_Chat_C_ChatOpenCooldown_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.ChatClosedCooldown
	 */
	struct UHUD_Chat_C_ChatClosedCooldown_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.Destruct
	 */
	struct UHUD_Chat_C_Destruct_Params
	{	};

	/**
	 * Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
	 */
	struct UHUD_Chat_C_ExecuteUbergraph_HUD_Chat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
