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
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Reset
	 */
	struct UUI_Forge_Rewards_Selector_C_Reset_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.EndPickReward
	 */
	struct UUI_Forge_Rewards_Selector_C_EndPickReward_Params
	{
	public:
		class USchematic*                                          InReward;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PopRandomReward
	 */
	struct UUI_Forge_Rewards_Selector_C_PopRandomReward_Params
	{
	public:
		TMap<class UPlayerCharacterID*, class USchematic*>         Rewards;                                                 // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FRandomStream                                       Random;                                                  // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		class UPlayerCharacterID*                                  OutCharacter;                                            // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USchematic*                                          OutReward;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Begin Pick Reward
	 */
	struct UUI_Forge_Rewards_Selector_C_BeginPickReward_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Construct
	 */
	struct UUI_Forge_Rewards_Selector_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnClicked
	 */
	struct UUI_Forge_Rewards_Selector_C_OnClicked_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroStarted
	 */
	struct UUI_Forge_Rewards_Selector_C_OnIntroStarted_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroEnded
	 */
	struct UUI_Forge_Rewards_Selector_C_OnIntroEnded_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.TryPing
	 */
	struct UUI_Forge_Rewards_Selector_C_TryPing_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature
	 */
	struct UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature
	 */
	struct UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature
	 */
	struct UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature
	 */
	struct UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnPingEnded
	 */
	struct UUI_Forge_Rewards_Selector_C_OnPingEnded_Params
	{	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PreConstruct
	 */
	struct UUI_Forge_Rewards_Selector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.ExecuteUbergraph_UI_Forge_Rewards_Selector
	 */
	struct UUI_Forge_Rewards_Selector_C_ExecuteUbergraph_UI_Forge_Rewards_Selector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnRewardSelected__DelegateSignature
	 */
	struct UUI_Forge_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params
	{
	public:
		class USchematic*                                          InReward;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
