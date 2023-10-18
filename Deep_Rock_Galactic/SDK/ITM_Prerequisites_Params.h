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
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.SetData
	 */
	struct UITM_Prerequisites_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequirementsMet;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.CreateValidSeedRequirement
	 */
	struct UITM_Prerequisites_C_CreateValidSeedRequirement_Params
	{
	public:
		class UCampaignRequirement*                                Requirement;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCampaign*                                           Campaign;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.CreateCampaignCompletedRequirement
	 */
	struct UITM_Prerequisites_C_CreateCampaignCompletedRequirement_Params
	{
	public:
		class UCamapaignCompletedRequirement*                      CampaignReq;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCampaign*                                           Campaign;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.CreateAnyRequirement
	 */
	struct UITM_Prerequisites_C_CreateAnyRequirement_Params
	{
	public:
		class UCampaignRequirement*                                Requirenent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCampaign*                                           Campaign;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.CreatePlayerRankBox
	 */
	struct UITM_Prerequisites_C_CreatePlayerRankBox_Params
	{
	public:
		int32_t                                                    RequiredRank;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Prerequisites.ITM_Prerequisites_C.CreateLevelRequirementBox
	 */
	struct UITM_Prerequisites_C_CreateLevelRequirementBox_Params
	{
	public:
		int32_t                                                    RequiredLevel;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SFIK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerCharacterID*                                  ID;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
