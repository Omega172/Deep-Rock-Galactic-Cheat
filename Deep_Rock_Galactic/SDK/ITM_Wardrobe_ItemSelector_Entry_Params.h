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
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetFromDLC
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_SetFromDLC_Params
	{
	public:
		class UDLCBase*                                            InDLC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetHovered
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetSelected
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetIsNewItem
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_SetIsNewItem_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.UpdateBorder
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_UpdateBorder_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.CreateChild
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_CreateChild_Params
	{
	public:
		unsigned char                                              UnknownData_Y5ER[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             OutChild;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetChild
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_SetChild_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.PreConstruct
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_OnEntryClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JGH6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_OnEntryUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_Entry_C_OnEntryHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BZ3K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
