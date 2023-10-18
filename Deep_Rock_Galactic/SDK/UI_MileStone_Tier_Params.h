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
	 * Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
	 */
	struct UUI_Milestone_Tier_C_InitTierImage_Params
	{
	public:
		class UImage*                                              Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
	 */
	struct UUI_Milestone_Tier_C_SetTier_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
	 */
	struct UUI_Milestone_Tier_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
	 */
	struct UUI_Milestone_Tier_C_ExecuteUbergraph_UI_Milestone_Tier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
