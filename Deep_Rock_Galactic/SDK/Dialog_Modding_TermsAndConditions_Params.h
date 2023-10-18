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
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnModOverlayClosed
	 */
	struct UDialog_Modding_TermsAndConditions_C_OnModOverlayClosed_Params
	{
	public:
		class FString                                              LastURL;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnKeyUp
	 */
	struct UDialog_Modding_TermsAndConditions_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Construct
	 */
	struct UDialog_Modding_TermsAndConditions_C_Construct_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ShowTerms
	 */
	struct UDialog_Modding_TermsAndConditions_C_ShowTerms_Params
	{
	public:
		class UModioTermsWrapper*                                  Terms;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDialog_Modding_TermsAndConditions_C_BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDialog_Modding_TermsAndConditions_C_BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Disagree
	 */
	struct UDialog_Modding_TermsAndConditions_C_Disagree_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Agree
	 */
	struct UDialog_Modding_TermsAndConditions_C_Agree_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UDialog_Modding_TermsAndConditions_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UDialog_Modding_TermsAndConditions_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.DummyEventThatLeadToNowhere
	 */
	struct UDialog_Modding_TermsAndConditions_C_DummyEventThatLeadToNowhere_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ExecuteUbergraph_Dialog_Modding_TermsAndConditions
	 */
	struct UDialog_Modding_TermsAndConditions_C_ExecuteUbergraph_Dialog_Modding_TermsAndConditions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnAnswer__DelegateSignature
	 */
	struct UDialog_Modding_TermsAndConditions_C_OnAnswer__DelegateSignature_Params
	{
	public:
		bool                                                       Agree;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
