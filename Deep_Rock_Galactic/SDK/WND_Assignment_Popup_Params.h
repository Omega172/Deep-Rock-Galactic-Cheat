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
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.UpdateActiveButton
	 */
	struct UWND_Assignment_Popup_C_UpdateActiveButton_Params
	{	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.OnKeyDown
	 */
	struct UWND_Assignment_Popup_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.SetData
	 */
	struct UWND_Assignment_Popup_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_Assignment_Popup_C_BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_Assignment_Popup_C_BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWND_Assignment_Popup_C_BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.PreConstruct
	 */
	struct UWND_Assignment_Popup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.OnAnswer
	 */
	struct UWND_Assignment_Popup_C_OnAnswer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__WND_Assignment_Popup_B_AcceptNoMissionAssignment_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWND_Assignment_Popup_C_BndEvt__WND_Assignment_Popup_B_AcceptNoMissionAssignment_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.OnClosed
	 */
	struct UWND_Assignment_Popup_C_OnClosed_Params
	{	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.ExecuteUbergraph_WND_Assignment_Popup
	 */
	struct UWND_Assignment_Popup_C_ExecuteUbergraph_WND_Assignment_Popup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAHO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Assignment_Popup.WND_Assignment_Popup_C.Updated__DelegateSignature
	 */
	struct UWND_Assignment_Popup_C_Updated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
