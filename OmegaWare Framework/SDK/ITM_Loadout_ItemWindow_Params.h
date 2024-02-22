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
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter
	 */
	struct UITM_Loadout_ItemWindow_C_SetHideCounter_Params
	{
	public:
		bool                                                       HideCounter;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
	 */
	struct UITM_Loadout_ItemWindow_C_GetNextItem_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RCAU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItemID*                                             NextItem;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
	 */
	struct UITM_Loadout_ItemWindow_C_GetOwnedItems_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              InCategory;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_71WJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItemID*>                                     OwnedItems;                                              // 0x0010(0x0010)  (Parm, OutParm)
		bool                                                       NewWeaponNotification;                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
	 */
	struct UITM_Loadout_ItemWindow_C_GetSelectedItem_Params
	{
	public:
		class UItemID*                                             itemClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              ItemCategory;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
	 */
	struct UITM_Loadout_ItemWindow_C_SetCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
	 */
	struct UITM_Loadout_ItemWindow_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
	 */
	struct UITM_Loadout_ItemWindow_C_IsHovering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
	 */
	struct UITM_Loadout_ItemWindow_C_Construct_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
	 */
	struct UITM_Loadout_ItemWindow_C_SelectNext_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
	 */
	struct UITM_Loadout_ItemWindow_C_SelectPrevious_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
	 */
	struct UITM_Loadout_ItemWindow_C_SelectItem_Params
	{
	public:
		class UItemID*                                             InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
	 */
	struct UITM_Loadout_ItemWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished
	 */
	struct UITM_Loadout_ItemWindow_C_OnClickAnimFinished_Params
	{	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim
	 */
	struct UITM_Loadout_ItemWindow_C_PlayIntroAnim_Params
	{
	public:
		bool                                                       IsLeftSide;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKQ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
	 */
	struct UITM_Loadout_ItemWindow_C_ExecuteUbergraph_ITM_Loadout_ItemWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
	 */
	struct UITM_Loadout_ItemWindow_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
