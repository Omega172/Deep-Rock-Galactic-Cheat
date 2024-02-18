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
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp
	 */
	struct UUI_NetworkErrorScreen_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt
	 */
	struct UUI_NetworkErrorScreen_C_FadeIt_Params
	{
	public:
		bool                                                       FadeIn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMFC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct
	 */
	struct UUI_NetworkErrorScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UUI_NetworkErrorScreen_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close
	 */
	struct UUI_NetworkErrorScreen_C_Close_Params
	{	};

	/**
	 * Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen
	 */
	struct UUI_NetworkErrorScreen_C_ExecuteUbergraph_UI_NetworkErrorScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
