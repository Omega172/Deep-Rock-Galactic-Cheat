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
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetNumberOfItems
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetNumberOfItems_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveEquipItem
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutSuccess;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_APUW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.PreviewItem
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem_Params
	{
	public:
		class UVictoryPose*                                        Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutSuccess;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreviewItem
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutSuccess;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3I6G[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveItemNotificationData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BMLS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UObject*>                                     Array;                                                   // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveInitialize
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitialize_Params
	{
	public:
		int32_t                                                    AvailableItems;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex_Params
	{
	public:
		int32_t                                                    OutIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FKJN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_UpdateOrCreateItemWidget_Params
	{
	public:
		class UVictoryPose*                                        InVictoryMove;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             InReuseWidget;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InShowToolTip;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6WCU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             OutWidget;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGenerateItems
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGenerateItems_Params
	{
	public:
		TArray<class UWidget*>                                     OutItemWidgets;                                          // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateEquipped
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_UpdateEquipped_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreConstruct
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreConstruct_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.SetHovered
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered_Params
	{
	public:
		bool                                                       InSlotHovered;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves
	 */
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
