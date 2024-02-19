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
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets
	 */
	struct UUI_Bar_DrinkCost_C_SetCostWidgets_Params
	{
	public:
		TMap<class UResourceData*, int32_t>                        TargetMap;                                               // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost
	 */
	struct UUI_Bar_DrinkCost_C_ShowCost_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowUnlockPrice;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct
	 */
	struct UUI_Bar_DrinkCost_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged
	 */
	struct UUI_Bar_DrinkCost_C_OnFreeBeerRewardChanged_Params
	{
	public:
		bool                                                       IsBeersFree;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost
	 */
	struct UUI_Bar_DrinkCost_C_ShowFixedCost_Params
	{
	public:
		TMap<class UResourceData*, int32_t>                        Cost;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost
	 */
	struct UUI_Bar_DrinkCost_C_ExecuteUbergraph_UI_Bar_DrinkCost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
