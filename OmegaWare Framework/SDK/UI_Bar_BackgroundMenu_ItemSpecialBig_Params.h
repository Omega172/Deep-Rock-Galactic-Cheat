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
	 * Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price
	 */
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkableshownprice_Params
	{	};

	/**
	 * Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable
	 */
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkable_Params
	{
	public:
		class UDrinkableDataAsset*                                 InDrinkable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct
	 */
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct
	 */
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig
	 */
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
