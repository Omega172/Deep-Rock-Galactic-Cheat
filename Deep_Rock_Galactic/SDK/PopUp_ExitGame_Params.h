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
	 * Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp
	 */
	struct UPopup_ExitGame_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.OnShow
	 */
	struct UPopup_ExitGame_C_OnShow_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Message;                                                 // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPopup_ExitGame_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UPopup_ExitGame_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct
	 */
	struct UPopup_ExitGame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.Yes
	 */
	struct UPopup_ExitGame_C_Yes_Params
	{	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.No
	 */
	struct UPopup_ExitGame_C_No_Params
	{	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UPopup_ExitGame_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame
	 */
	struct UPopup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
