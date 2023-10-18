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
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.GetMissionIcon
	 */
	struct UITM_CampaignItem_C_GetMissionIcon_Params
	{
	public:
		class UTexture2D*                                          MissionIcon;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.Ping
	 */
	struct UITM_CampaignItem_C_Ping_Params
	{	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct
	 */
	struct UITM_CampaignItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.Construct
	 */
	struct UITM_CampaignItem_C_Construct_Params
	{	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted
	 */
	struct UITM_CampaignItem_C_OnPingStarted_Params
	{	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished
	 */
	struct UITM_CampaignItem_C_OnPingFinished_Params
	{	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.SetScale
	 */
	struct UITM_CampaignItem_C_SetScale_Params
	{
	public:
		struct FVector2D                                           CompletedScale;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ActiveScale;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem
	 */
	struct UITM_CampaignItem_C_ExecuteUbergraph_ITM_CampaignItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MRBP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
