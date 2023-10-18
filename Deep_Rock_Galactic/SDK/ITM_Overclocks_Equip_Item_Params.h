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
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget
	 */
	struct UITM_Overclocks_Equip_Item_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState
	 */
	struct UITM_Overclocks_Equip_Item_C_SetState_Params
	{
	public:
		EItemUpgradeStatus                                         InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock
	 */
	struct UITM_Overclocks_Equip_Item_C_GetOverClock_Params
	{
	public:
		class UItemUpgrade*                                        Overclock;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock
	 */
	struct UITM_Overclocks_Equip_Item_C_SetOverclock_Params
	{
	public:
		class UItemUpgrade*                                        InOverclock;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize
	 */
	struct UITM_Overclocks_Equip_Item_C_SetIconSize_Params
	{
	public:
		int32_t                                                    NewSize;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct
	 */
	struct UITM_Overclocks_Equip_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item
	 */
	struct UITM_Overclocks_Equip_Item_C_ExecuteUbergraph_ITM_Overclocks_Equip_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_Item_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
