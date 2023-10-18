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
	 * Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
	 */
	struct UITM_DeepDive_StageIcon_C_SetClaimStatusActive_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
	 */
	struct UITM_DeepDive_StageIcon_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
	 */
	struct UITM_DeepDive_StageIcon_C_SetActive_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
	 */
	struct UITM_DeepDive_StageIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
	 */
	struct UITM_DeepDive_StageIcon_C_ExecuteUbergraph_ITM_DeepDive_StageIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
