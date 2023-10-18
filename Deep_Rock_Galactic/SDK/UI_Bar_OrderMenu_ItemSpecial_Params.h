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
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetSelectedDrinkableType
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_GetSelectedDrinkableType_Params
	{
	public:
		class UDrinkableDataAsset*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.HasPlayerRank
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_HasPlayerRank_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8T5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetTemporaryBuf
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_GetTemporaryBuf_Params
	{
	public:
		class UTemporaryBuff*                                      buff;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.UpdateItemStatus
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_UpdateItemStatus_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetBorderColor
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_GetBorderColor_Params
	{
	public:
		struct FLinearColor                                        OutputColor;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.IsInteractable
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.No_026492834E69A68487066993DA576F51
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_No_026492834E69A68487066993DA576F51_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Yes_026492834E69A68487066993DA576F51
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_Yes_026492834E69A68487066993DA576F51_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Construct
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnCreditsChanged
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnCreditsChanged_Params
	{
	public:
		int32_t                                                    Credits;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPlayerProgressChanged
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnPlayerProgressChanged_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Stars;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Select
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_Select_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Unselect
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_Unselect_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHoverFinished
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnHoverFinished_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BuyFailed
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_BuyFailed_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.TryUnlock
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_TryUnlock_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.SetDrinkable
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_SetDrinkable_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.PreConstruct
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinkUnlocked__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnDrinkUnlocked__DelegateSignature_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnSelected__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnSelected__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPurchaseDenied__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnPurchaseDenied__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnUnhover__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnUnhover__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                OrderItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHover__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnHover__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                OrderItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinksPurchased__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_ItemSpecial_C_OnDrinksPurchased__DelegateSignature_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
