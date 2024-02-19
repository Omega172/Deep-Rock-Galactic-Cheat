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
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::ChangeFontSize(int32_t InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize");
		
		UHUD_ChatLine_C_ChangeFontSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::RemoveTags(const class FString& Source, class FString* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags");
		
		UHUD_ChatLine_C_RemoveTags_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Pre                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Post                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UHUD_ChatLine_C::EncloseText(const class FString& Pre, const class FText& Text, const class FString& Post, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.EncloseText");
		
		UHUD_ChatLine_C_EncloseText_Params params {};
		params.Pre = Pre;
		params.Text = Text;
		params.Post = Post;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.StyledText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        styleName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UHUD_ChatLine_C::StyledText(const class FText& styleName, const class FText& Text, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.StyledText");
		
		UHUD_ChatLine_C_StyledText_Params params {};
		params.styleName = styleName;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatMessageType                                   MessageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EChatSenderType                                    SenderType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::UpdateUserIcon(EChatMessageType MessageType, EChatSenderType SenderType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon");
		
		UHUD_ChatLine_C_UpdateUserIcon_Params params {};
		params.MessageType = MessageType;
		params.SenderType = SenderType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
	 * 		Flags  -> ()
	 */
	void UHUD_ChatLine_C::UpdateOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity");
		
		UHUD_ChatLine_C_UpdateOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatMessageType                                   MsgType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SenderStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EChatSenderType                                    SenderType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MsgStr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::SetMessage(EChatMessageType MsgType, const class FString& SenderStr, EChatSenderType SenderType, const class FString& MsgStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.SetMessage");
		
		UHUD_ChatLine_C_SetMessage_Params params {};
		params.MsgType = MsgType;
		params.SenderStr = SenderStr;
		params.SenderType = SenderType;
		params.MsgStr = MsgStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ChatLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Construct");
		
		UHUD_ChatLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Tick");
		
		UHUD_ChatLine_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ChatLine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct");
		
		UHUD_ChatLine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ChatLine_C::ExecuteUbergraph_HUD_ChatLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine");
		
		UHUD_ChatLine_C_ExecuteUbergraph_HUD_ChatLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_ChatLine_C::OnMessageHidden__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature");
		
		UHUD_ChatLine_C_OnMessageHidden__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ChatLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ChatLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C");
		return ptr;
	}

}


