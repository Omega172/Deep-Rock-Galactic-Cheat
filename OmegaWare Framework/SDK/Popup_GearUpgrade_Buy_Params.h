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
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
	 */
	struct UPopup_GearUpgrade_Buy_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
	 */
	struct UPopup_GearUpgrade_Buy_C_Show_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPopup_GearUpgrade_Buy_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UPopup_GearUpgrade_Buy_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
	 */
	struct UPopup_GearUpgrade_Buy_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
	 */
	struct UPopup_GearUpgrade_Buy_C_Back_Params
	{	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
	 */
	struct UPopup_GearUpgrade_Buy_C_Buy_Params
	{	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed
	 */
	struct UPopup_GearUpgrade_Buy_C_OnClosed_Params
	{	};

	/**
	 * Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
	 */
	struct UPopup_GearUpgrade_Buy_C_ExecuteUbergraph_Popup_GearUpgrade_Buy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
