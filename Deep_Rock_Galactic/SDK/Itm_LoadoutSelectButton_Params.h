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
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.PreConstruct
	 */
	struct UITM_LoadoutSelectButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetIcon
	 */
	struct UITM_LoadoutSelectButton_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetPasteButtonHover
	 */
	struct UITM_LoadoutSelectButton_C_SetPasteButtonHover_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetButtonPressed
	 */
	struct UITM_LoadoutSelectButton_C_SetButtonPressed_Params
	{
	public:
		ENUM_MenuColors                                            ColorSelector;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPressed;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetSelected
	 */
	struct UITM_LoadoutSelectButton_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetData
	 */
	struct UITM_LoadoutSelectButton_C_SetData_Params
	{
	public:
		bool                                                       ShowCopyPaste;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.ExecuteUbergraph_ITM_LoadoutSelectButton
	 */
	struct UITM_LoadoutSelectButton_C_ExecuteUbergraph_ITM_LoadoutSelectButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnCopyPasteHovered__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_OnCopyPasteHovered__DelegateSignature_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FWQH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnPaste__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_OnPaste__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          LoadoutButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
