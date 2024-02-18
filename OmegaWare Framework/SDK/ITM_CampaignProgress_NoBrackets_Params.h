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
	 * Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct
	 */
	struct UITM_CampaignProgress_NoBrackets_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct
	 */
	struct UITM_CampaignProgress_NoBrackets_C_Construct_Params
	{	};

	/**
	 * Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign
	 */
	struct UITM_CampaignProgress_NoBrackets_C_Update_Campaign_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh
	 */
	struct UITM_CampaignProgress_NoBrackets_C_Refresh_Params
	{	};

	/**
	 * Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets
	 */
	struct UITM_CampaignProgress_NoBrackets_C_ExecuteUbergraph_ITM_CampaignProgress_NoBrackets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
