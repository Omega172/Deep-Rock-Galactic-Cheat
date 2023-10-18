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
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetWidth
	 */
	struct UBasic_ExpandableMenu_C_SetWidth_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.InstaOpenMenu
	 */
	struct UBasic_ExpandableMenu_C_InstaOpenMenu_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight
	 */
	struct UBasic_ExpandableMenu_C_SetFixedSizeOpenHeight_Params
	{
	public:
		int32_t                                                    ItemCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ItemHeight;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight
	 */
	struct UBasic_ExpandableMenu_C_SetOpenHeight_Params
	{
	public:
		float                                                      OpenHeight;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered
	 */
	struct UBasic_ExpandableMenu_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3L9U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2
	 */
	struct UBasic_ExpandableMenu_C_SetHeader2_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1
	 */
	struct UBasic_ExpandableMenu_C_SetHeader1_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen
	 */
	struct UBasic_ExpandableMenu_C_SetMenuOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutIsOpen;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XNEZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle
	 */
	struct UBasic_ExpandableMenu_C_GetButtonStyle_Params
	{
	public:
		ENUM_MenuColors                                            Color;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73TZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         SlateBrush;                                              // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale
	 */
	struct UBasic_ExpandableMenu_C_SetHeightScale_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct
	 */
	struct UBasic_ExpandableMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu
	 */
	struct UBasic_ExpandableMenu_C_ExecuteUbergraph_Basic_ExpandableMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
