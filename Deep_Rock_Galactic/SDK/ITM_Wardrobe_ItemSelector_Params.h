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
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemUnhovered
	 */
	struct UITM_Wardrobe_ItemSelector_C_ItemUnhovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5DBS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemHovered
	 */
	struct UITM_Wardrobe_ItemSelector_C_ItemHovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NO4Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetAnimOpenProgress
	 */
	struct UITM_Wardrobe_ItemSelector_C_SetAnimOpenProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemClicked
	 */
	struct UITM_Wardrobe_ItemSelector_C_ItemClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QN3C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetOpen
	 */
	struct UITM_Wardrobe_ItemSelector_C_SetOpen_Params
	{
	public:
		bool                                                       InOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PadRowWithBlanks
	 */
	struct UITM_Wardrobe_ItemSelector_C_PadRowWithBlanks_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ShowSlot
	 */
	struct UITM_Wardrobe_ItemSelector_C_ShowSlot_Params
	{
	public:
		class UITM_Wardrobe_ItemSlot_Base_C*                       InSlot;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ClearItems
	 */
	struct UITM_Wardrobe_ItemSelector_C_ClearItems_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.AddItem
	 */
	struct UITM_Wardrobe_ItemSelector_C_AddItem_Params
	{
	public:
		class UWidget*                                             InChildWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNewItem;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VIBT[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDLCBase*                                            FromDLC;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UITM_Wardrobe_ItemSelector_Entry_C*                  OutEntry;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             OutItemWidget;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PreConstruct
	 */
	struct UITM_Wardrobe_ItemSelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.Construct
	 */
	struct UITM_Wardrobe_ItemSelector_C_Construct_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenStarted
	 */
	struct UITM_Wardrobe_ItemSelector_C_OnAnimOpenStarted_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenFinished
	 */
	struct UITM_Wardrobe_ItemSelector_C_OnAnimOpenFinished_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnOtherSelectorOpen
	 */
	struct UITM_Wardrobe_ItemSelector_C_OnOtherSelectorOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector
	 */
	struct UITM_Wardrobe_ItemSelector_C_ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_C_OnSelectorOpenChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnItemClicked__DelegateSignature
	 */
	struct UITM_Wardrobe_ItemSelector_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1AO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
