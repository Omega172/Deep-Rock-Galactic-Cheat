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
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables
	 */
	struct UUI_Bar_OrderMenu_C_GetDrinkables_Params
	{
	public:
		TArray<class UDrinkableDataAsset*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
		class UDrinkableDataAsset*                                 SpecialEventBeer;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
	 */
	struct UUI_Bar_OrderMenu_C_SetMenu_Params
	{
	public:
		class UDrinkableDataAsset*                                 Special;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UDrinkableDataAsset*>                         Drinks;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDrinkableDataAsset*                                 SpecialEventBeer;                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
	 */
	struct UUI_Bar_OrderMenu_C_OnDrinkAdded_Params
	{
	public:
		class UUI_Bar_OrderMenu_Item_C*                            DrinkWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
	 */
	struct UUI_Bar_OrderMenu_C_OnDrinksPurchased_Event_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
	 */
	struct UUI_Bar_OrderMenu_C_CancelOrder_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
	 */
	struct UUI_Bar_OrderMenu_C_OnShown_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
	 */
	struct UUI_Bar_OrderMenu_C_OnHover_Event_Params
	{
	public:
		class USpaceRigBarMenuItem*                                OrderItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USpaceRigBarMenuItem*                                NewItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
	 */
	struct UUI_Bar_OrderMenu_C_OnPurchaseDenied_Event_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                OrderItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
	 */
	struct UUI_Bar_OrderMenu_C_OnClosed_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
	 */
	struct UUI_Bar_OrderMenu_C_SetBartender_Params
	{
	public:
		class ASpaceRigBar*                                        BarActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
	 */
	struct UUI_Bar_OrderMenu_C_OnNewDrinkableSpecial_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
	 */
	struct UUI_Bar_OrderMenu_C_ReceiveCloseCommand_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked
	 */
	struct UUI_Bar_OrderMenu_C_OnDrinkUnlocked_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct
	 */
	struct UUI_Bar_OrderMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Hovered Drinkable type changed
	 */
	struct UUI_Bar_OrderMenu_C_HoveredDrinkabletypechanged_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
	 */
	struct UUI_Bar_OrderMenu_C_ExecuteUbergraph_UI_Bar_OrderMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_805Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_C_OnRoundSelected__DelegateSignature_Params
	{
	public:
		class ASpaceRigBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDrinkableDataAsset*                                 RequestedDrink;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
