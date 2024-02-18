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
	 * Function WND_Skins.WND_Skins_C.SelectSkinOrEquipped
	 */
	struct UWND_Skins_C_SelectSkinOrEquipped_Params
	{
	public:
		class UItemSkin*                                           InSkin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemSkin*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.RefreshLoadout
	 */
	struct UWND_Skins_C_RefreshLoadout_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.ClearSkins
	 */
	struct UWND_Skins_C_ClearSkins_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnUnlockedSkin
	 */
	struct UWND_Skins_C_OnUnlockedSkin_Params
	{
	public:
		class UItemSkin*                                           SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.RefreshSelectorButton
	 */
	struct UWND_Skins_C_RefreshSelectorButton_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.RefreshWindowItems
	 */
	struct UWND_Skins_C_RefreshWindowItems_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.GetItemsWindow
	 */
	struct UWND_Skins_C_GetItemsWindow_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.UpdateBorder
	 */
	struct UWND_Skins_C_UpdateBorder_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.IsWindowVisible
	 */
	struct UWND_Skins_C_IsWindowVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UO7Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Skins.WND_Skins_C.PopulateSkinWindow
	 */
	struct UWND_Skins_C_PopulateSkinWindow_Params
	{
	public:
		bool                                                       isEmpty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZRM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Skins.WND_Skins_C.SetWindowVisible
	 */
	struct UWND_Skins_C_SetWindowVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VisibilityChanged;                                       // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewVisibility;                                           // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.AddSkin
	 */
	struct UWND_Skins_C_AddSkin_Params
	{
	public:
		class UItemSkin*                                           InSkin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItem;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InPlayerCharacter;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InIndex;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YJ7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UITM_SkinItem_C*                                     OutSkinWidget;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.SetSkinData
	 */
	struct UWND_Skins_C_SetSkinData_Params
	{
	public:
		class UItemID*                                             itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  PlayerCharacterClass;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_Skins_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.PreConstruct
	 */
	struct UWND_Skins_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnSkinWidgetAdded
	 */
	struct UWND_Skins_C_OnSkinWidgetAdded_Params
	{
	public:
		class UITM_SkinItem_C*                                     SkinWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnSkinClicked
	 */
	struct UWND_Skins_C_OnSkinClicked_Params
	{
	public:
		class UITM_SkinItem_C*                                     Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnHoveringSkin
	 */
	struct UWND_Skins_C_OnHoveringSkin_Params
	{
	public:
		class UITM_SkinItem_C*                                     SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.PreviewSkin
	 */
	struct UWND_Skins_C_PreviewSkin_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnUnhoveringSkin
	 */
	struct UWND_Skins_C_OnUnhoveringSkin_Params
	{
	public:
		class UITM_SkinItem_C*                                     SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.Construct
	 */
	struct UWND_Skins_C_Construct_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnFocusLost
	 */
	struct UWND_Skins_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature
	 */
	struct UWND_Skins_C_BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHovered;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnSkinChangedEvent_Event_1
	 */
	struct UWND_Skins_C_OnSkinChangedEvent_Event_1_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.ExecuteUbergraph_WND_Skins
	 */
	struct UWND_Skins_C_ExecuteUbergraph_WND_Skins_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Skins.WND_Skins_C.OnOpened__DelegateSignature
	 */
	struct UWND_Skins_C_OnOpened__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Skins.WND_Skins_C.PingSkin__DelegateSignature
	 */
	struct UWND_Skins_C_PingSkin__DelegateSignature_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
