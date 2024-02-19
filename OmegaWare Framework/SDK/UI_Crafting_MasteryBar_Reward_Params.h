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
	 * Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetFromLevel
	 */
	struct UUI_Crafting_MasteryBar_Reward_C_SetFromLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetResourceReward
	 */
	struct UUI_Crafting_MasteryBar_Reward_C_SetResourceReward_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1Q3M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.PreConstruct
	 */
	struct UUI_Crafting_MasteryBar_Reward_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.ExecuteUbergraph_UI_Crafting_MasteryBar_Reward
	 */
	struct UUI_Crafting_MasteryBar_Reward_C_ExecuteUbergraph_UI_Crafting_MasteryBar_Reward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
