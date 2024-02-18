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
	 * Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyDown
	 */
	struct U_MENU_DeepDives_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.OnMouseButtonDown
	 */
	struct U_MENU_DeepDives_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.ConvertDurationToText
	 */
	struct U_MENU_DeepDives_C_ConvertDurationToText_Params
	{
	public:
		struct FTimespan                                           A;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.SetPage
	 */
	struct U_MENU_DeepDives_C_SetPage_Params
	{
	public:
		class UWidget*                                             InPage;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyUp
	 */
	struct U_MENU_DeepDives_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.OnShown
	 */
	struct U_MENU_DeepDives_C_OnShown_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.PreConstruct
	 */
	struct U_MENU_DeepDives_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature
	 */
	struct U_MENU_DeepDives_C_BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature_Params
	{
	public:
		bool                                                       EliteDeepDive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature
	 */
	struct U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature
	 */
	struct U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.Update Time
	 */
	struct U_MENU_DeepDives_C_UpdateTime_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.OnClosed
	 */
	struct U_MENU_DeepDives_C_OnClosed_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.First Time Shout
	 */
	struct U_MENU_DeepDives_C_FirstTimeShout_Params
	{	};

	/**
	 * Function _MENU_DeepDives._MENU_DeepDives_C.ExecuteUbergraph__MENU_DeepDives
	 */
	struct U_MENU_DeepDives_C_ExecuteUbergraph__MENU_DeepDives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
