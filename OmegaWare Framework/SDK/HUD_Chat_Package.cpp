/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.FilterBlockedUserMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFSDChatMessage                             InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EChatMessageType                                   FilteredMessageType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FilteredMessage                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::FilterBlockedUserMessage(const struct FFSDChatMessage& InMessage, EChatMessageType* FilteredMessageType, class FString* FilteredMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.FilterBlockedUserMessage");
		
		UHUD_Chat_C_FilterBlockedUserMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredMessageType != nullptr)
			*FilteredMessageType = params.FilteredMessageType;
		if (FilteredMessage != nullptr)
			*FilteredMessage = params.FilteredMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.FilterMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFSDChatMessage                             InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFSDChatMessage                             FilteredMessage                                            (Parm, OutParm)
	 */
	void UHUD_Chat_C::FilterMessage(const struct FFSDChatMessage& InMessage, struct FFSDChatMessage* FilteredMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.FilterMessage");
		
		UHUD_Chat_C_FilterMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredMessage != nullptr)
			*FilteredMessage = params.FilteredMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.FilterProfanityMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageToFilter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutMessage                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::FilterProfanityMessage(const class FString& MessageToFilter, class FString* OutMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.FilterProfanityMessage");
		
		UHUD_Chat_C_FilterProfanityMessage_Params params {};
		params.MessageToFilter = MessageToFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMessage != nullptr)
			*OutMessage = params.OutMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.SetMaxLinesFromFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::SetMaxLinesFromFontSize(int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.SetMaxLinesFromFontSize");
		
		UHUD_Chat_C_SetMaxLinesFromFontSize_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.UpdateChatMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               resetAge                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Chat_C::UpdateChatMessages(bool resetAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.UpdateChatMessages");
		
		UHUD_Chat_C_UpdateChatMessages_Params params {};
		params.resetAge = resetAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               isEmpty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Chat_C::IsStringNotEmpty(const class FString& String, bool* isEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty");
		
		UHUD_Chat_C_IsStringNotEmpty_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isEmpty != nullptr)
			*isEmpty = params.isEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.GetSenderType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatSenderType                                    SenderType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::GetSenderType(EChatSenderType* SenderType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.GetSenderType");
		
		UHUD_Chat_C_GetSenderType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SenderType != nullptr)
			*SenderType = params.SenderType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.OpenChat
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::OpenChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OpenChat");
		
		UHUD_Chat_C_OpenChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.BeginChat
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::BeginChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BeginChat");
		
		UHUD_Chat_C_BeginChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.OnOpenChat
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::OnOpenChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnOpenChat");
		
		UHUD_Chat_C_OnOpenChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.Update Chat Background
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::UpdateChatBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Update Chat Background");
		
		UHUD_Chat_C_UpdateChatBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.Add Chat Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFSDChatMessage                             Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Chat_C::AddChatMessage(const struct FFSDChatMessage& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Add Chat Message");
		
		UHUD_Chat_C_AddChatMessage_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::OnMessageHidden_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event");
		
		UHUD_Chat_C_OnMessageHidden_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Chat_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.PreConstruct");
		
		UHUD_Chat_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.CloseChat
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::CloseChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.CloseChat");
		
		UHUD_Chat_C_CloseChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::OnBackgroundFadeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished");
		
		UHUD_Chat_C_OnBackgroundFadeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");
		
		UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.SendChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::SendChatMessage(const class FText& InText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.SendChatMessage");
		
		UHUD_Chat_C_SendChatMessage_Params params {};
		params.InText = InText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.NewMesssage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFSDChatMessage                             Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Chat_C::NewMesssage(const struct FFSDChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.NewMesssage");
		
		UHUD_Chat_C_NewMesssage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Construct");
		
		UHUD_Chat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.OnFontSizeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::OnFontSizeChange(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnFontSizeChange");
		
		UHUD_Chat_C_OnFontSizeChange_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.PlatformDependentClose
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::PlatformDependentClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.PlatformDependentClose");
		
		UHUD_Chat_C_PlatformDependentClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.ChatOpenCooldown
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::ChatOpenCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.ChatOpenCooldown");
		
		UHUD_Chat_C_ChatOpenCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.ChatClosedCooldown
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::ChatClosedCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.ChatClosedCooldown");
		
		UHUD_Chat_C_ChatClosedCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_Chat_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Destruct");
		
		UHUD_Chat_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Chat_C::ExecuteUbergraph_HUD_Chat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat");
		
		UHUD_Chat_C_ExecuteUbergraph_HUD_Chat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Chat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Chat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Chat.HUD_Chat_C");
		return ptr;
	}

}


