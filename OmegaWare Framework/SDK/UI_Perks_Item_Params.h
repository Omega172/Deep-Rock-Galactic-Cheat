#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function UI_Perks_Item.UI_Perks_Item_C.SetIconSize
	 */
	struct UUI_Perks_Item_C_SetIconSize_Params
	{
	public:
		int32_t                                                    InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.Set Selected
	 */
	struct UUI_Perks_Item_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.ShowAs
	 */
	struct UUI_Perks_Item_C_ShowAs_Params
	{
	public:
		class UPerkAsset*                                          InPerkAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRank;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkTierState                                             InState;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InHovered;                                               // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InPerkHighlighted;                                       // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InSelected;                                              // 0x000F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget
	 */
	struct UUI_Perks_Item_C_CreateToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset
	 */
	struct UUI_Perks_Item_C_GetPerkAsset_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkTierState                                             State;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U2Y2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Tier;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.Refresh
	 */
	struct UUI_Perks_Item_C_Refresh_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed
	 */
	struct UUI_Perks_Item_C_OnPerkClaimed_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClaimedTier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered
	 */
	struct UUI_Perks_Item_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.Construct
	 */
	struct UUI_Perks_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event
	 */
	struct UUI_Perks_Item_C_OnPerkHighlighted_Event_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHighlighted;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct
	 */
	struct UUI_Perks_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged
	 */
	struct UUI_Perks_Item_C_OnPerkPointsChanged_Params
	{
	public:
		int32_t                                                    PerkPoints;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnPingFinished
	 */
	struct UUI_Perks_Item_C_OnPingFinished_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item
	 */
	struct UUI_Perks_Item_C_ExecuteUbergraph_UI_Perks_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature
	 */
	struct UUI_Perks_Item_C_OnClick__DelegateSignature_Params
	{
	public:
		class UUI_Perks_Item_C*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature
	 */
	struct UUI_Perks_Item_C_OnHoverLeave__DelegateSignature_Params
	{
	public:
		class UUI_Perks_Item_C*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature
	 */
	struct UUI_Perks_Item_C_OnHoverEnter__DelegateSignature_Params
	{
	public:
		class UUI_Perks_Item_C*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
