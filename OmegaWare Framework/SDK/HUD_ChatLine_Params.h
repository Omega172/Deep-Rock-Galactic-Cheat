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
	 * Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize
	 */
	struct UHUD_ChatLine_C_ChangeFontSize_Params
	{
	public:
		int32_t                                                    InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags
	 */
	struct UHUD_ChatLine_C_RemoveTags_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Result;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
	 */
	struct UHUD_ChatLine_C_EncloseText_Params
	{
	public:
		class FString                                              Pre;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Post;                                                    // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0038(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.StyledText
	 */
	struct UHUD_ChatLine_C_StyledText_Params
	{
	public:
		class FText                                                styleName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Result;                                                  // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
	 */
	struct UHUD_ChatLine_C_UpdateUserIcon_Params
	{
	public:
		EChatMessageType                                           MessageType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EChatSenderType                                            SenderType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
	 */
	struct UHUD_ChatLine_C_UpdateOpacity_Params
	{	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
	 */
	struct UHUD_ChatLine_C_SetMessage_Params
	{
	public:
		EChatMessageType                                           MsgType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VZZG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SenderStr;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EChatSenderType                                            SenderType;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YOER[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MsgStr;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.Construct
	 */
	struct UHUD_ChatLine_C_Construct_Params
	{	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.Tick
	 */
	struct UHUD_ChatLine_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
	 */
	struct UHUD_ChatLine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
	 */
	struct UHUD_ChatLine_C_ExecuteUbergraph_HUD_ChatLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
	 */
	struct UHUD_ChatLine_C_OnMessageHidden__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
