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
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateToggleButton
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_UpdateToggleButton_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveToggleType
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveToggleType_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetNumberOfItems
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveGetNumberOfItems_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemDLC
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveItemDLC_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JN23[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDLCBase*                                            FromDLC;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.EquipRandomItem
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_EquipRandomItem_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateShuffleButton
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_UpdateShuffleButton_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetTextToLeft
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_GetTextToLeft_Params
	{
	public:
		bool                                                       TextToLeft;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetHovered
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetHovered_Params
	{
	public:
		bool                                                       InSlotHovered;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreviewItem
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceivePreviewItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutSuccess;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetRefreshSlotsOnChange
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetRefreshSlotsOnChange_Params
	{
	public:
		TArray<class UITM_Wardrobe_ItemSlot_Base_C*>               InOtherSlots;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemNotificationData
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveItemNotificationData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E8M1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UObject*>                                     Array;                                                   // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveInitialize
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveInitialize_Params
	{
	public:
		int32_t                                                    AvailableItems;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemUnhovered
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SelectorItemUnhovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemHovered
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SelectorItemHovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetSelectedIndex
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveGetSelectedIndex_Params
	{
	public:
		int32_t                                                    OutIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetItemName
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetItemName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Refresh
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_Refresh_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemClicked
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SelectorItemClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutCloseSelector;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FD0U[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreConstruct
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceivePreConstruct_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetItemWidgets
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_GetItemWidgets_Params
	{
	public:
		TArray<class UWidget*>                                     ItemWidgets;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		TArray<int32_t>                                            NewItemIndices;                                          // 0x0010(0x0010)  (Parm, OutParm)
		int32_t                                                    OutSelectedIndex;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveReleaseResource
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveReleaseResource_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTextToLeft
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetTextToLeft_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3F7U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Initialize
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_Initialize_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacterID;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTypeIcon
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetTypeIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotName
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetSlotName_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotSize
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetSlotSize_Params
	{
	public:
		int32_t                                                    InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSelected
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReleaseResources
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReleaseResources_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveEquipItem
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveEquipItem_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutSuccess;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGenerateItems
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ReceiveGenerateItems_Params
	{
	public:
		TArray<class UWidget*>                                     OutItemWidgets;                                          // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidgetClass
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetContentAsWidgetClass_Params
	{
	public:
		unsigned char                                              UnknownData_F9X5[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         OutWidget;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsTexture
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetContentAsTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidget
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_SetContentAsWidget_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateSelectionBorder
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_UpdateSelectionBorder_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.RefreshNextFrame
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_RefreshNextFrame_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PlayIntroAnim
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_PlayIntroAnim_Params
	{
	public:
		bool                                                       IsLeftSide;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NTRF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseEnter
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseLeave
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PreConstruct
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSlot_Base_C_OnEquippedChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
