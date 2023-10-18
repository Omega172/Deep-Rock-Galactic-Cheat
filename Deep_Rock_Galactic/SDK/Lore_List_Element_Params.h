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
	 * Function Lore_List_Element.Lore_List_Element_C.SetData
	 */
	struct ULore_List_Element_C_SetData_Params
	{
	public:
		class FText                                                Header;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                SubText;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          BackgroundImage;                                         // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          FrontImage;                                              // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5647[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FObjectiveMissionIcon                               MissionIcon;                                             // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ShowArrow;                                               // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_MM_ButtonStyle                                           IsEnabled;                                               // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.SetSelected
	 */
	struct ULore_List_Element_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.Construct
	 */
	struct ULore_List_Element_C_Construct_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.UpdateBorder
	 */
	struct ULore_List_Element_C_UpdateBorder_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.PlayIntroAnim
	 */
	struct ULore_List_Element_C_PlayIntroAnim_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.InputSourceChanged
	 */
	struct ULore_List_Element_C_InputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.HideNavIcon
	 */
	struct ULore_List_Element_C_HideNavIcon_Params
	{	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.PreConstruct
	 */
	struct ULore_List_Element_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.ExecuteUbergraph_Lore_List_Element
	 */
	struct ULore_List_Element_C_ExecuteUbergraph_Lore_List_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_List_Element.Lore_List_Element_C.OnClicked__DelegateSignature
	 */
	struct ULore_List_Element_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
