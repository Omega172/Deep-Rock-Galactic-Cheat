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
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.SetData
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  inCharacterID;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USchematic*                                          InSchematic;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutValidReward;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YBC1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.PreConstruct
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.Construct
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.ExecuteUbergraph_UI_Forge_Rewards_SelectorItem
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_ExecuteUbergraph_UI_Forge_Rewards_SelectorItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverEnd__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_OnHoverEnd__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverBegin__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_OnHoverBegin__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnClicked__DelegateSignature
	 */
	struct UUI_Forge_Rewards_SelectorItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
