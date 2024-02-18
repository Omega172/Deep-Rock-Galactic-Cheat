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
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
	 */
	struct UUI_Perks_Buy_C_CanBuyPerk_Params
	{
	public:
		bool                                                       CanBuy;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BM5X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
	 */
	struct UUI_Perks_Buy_C_SetPerk_Params
	{
	public:
		class UPerkAsset*                                          InPerk;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTier;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
	 */
	struct UUI_Perks_Buy_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_FlatButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
	 */
	struct UUI_Perks_Buy_C_Construct_Params
	{	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
	 */
	struct UUI_Perks_Buy_C_OnPerkPointsChanged_Params
	{
	public:
		int32_t                                                    PerkPoints;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk
	 */
	struct UUI_Perks_Buy_C_BuySelectedPerk_Params
	{	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
	 */
	struct UUI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
	 */
	struct UUI_Perks_Buy_C_OnPerkClaimed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
