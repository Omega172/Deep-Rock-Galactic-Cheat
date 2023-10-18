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
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_GetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder_Params
	{	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_GetIsLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_GetSlotType_Params
	{
	public:
		EPerkUsageType                                             SlotType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_SetLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground_Params
	{	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
	 */
	struct UITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadOut_PerksEquip_Slot_C*                      SlotWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
