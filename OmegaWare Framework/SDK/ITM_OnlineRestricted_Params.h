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
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Handle Key Down
	 */
	struct UITM_OnlineRestricted_C_HandleKeyDown_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutHandled;                                              // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6OCN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         OutReply;                                                // 0x0040(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetFontSize
	 */
	struct UITM_OnlineRestricted_C_SetFontSize_Params
	{
	public:
		int32_t                                                    inFontSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.OnKeyDown
	 */
	struct UITM_OnlineRestricted_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockSolution
	 */
	struct UITM_OnlineRestricted_C_SetBlockSolution_Params
	{
	public:
		EBlueprintablePrivilegeResults                             priviligeResults;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A5V8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockedReasonString
	 */
	struct UITM_OnlineRestricted_C_SetBlockedReasonString_Params
	{
	public:
		TArray<EBlueprintablePrivilegeResults>                     InResults;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Should Show Online Restriction
	 */
	struct UITM_OnlineRestricted_C_ShouldShowOnlineRestriction_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOV9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.PreConstruct
	 */
	struct UITM_OnlineRestricted_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Resolve Issue
	 */
	struct UITM_OnlineRestricted_C_ResolveIssue_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Refresh Block Reasons
	 */
	struct UITM_OnlineRestricted_C_RefreshBlockReasons_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Construct
	 */
	struct UITM_OnlineRestricted_C_Construct_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UITM_OnlineRestricted_C_BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Show external resolve UI right away
	 */
	struct UITM_OnlineRestricted_C_ShowexternalresolveUIrightaway_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_OnlineRestricted_C_BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.ExecuteUbergraph_ITM_OnlineRestricted
	 */
	struct UITM_OnlineRestricted_C_ExecuteUbergraph_ITM_OnlineRestricted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EFUN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
