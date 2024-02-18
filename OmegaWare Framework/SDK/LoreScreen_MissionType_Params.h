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
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered
	 */
	struct ULoreScreen_MissionType_C_StepHovered_Params
	{
	public:
		struct FMissionStepDescription                             step;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StepIndex;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepsInRow;                                              // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
	 */
	struct ULoreScreen_MissionType_C_Construct_Params
	{	};

	/**
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent
	 */
	struct ULoreScreen_MissionType_C_RefreshContent_Params
	{	};

	/**
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered
	 */
	struct ULoreScreen_MissionType_C_StepUnhovered_Params
	{	};

	/**
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct
	 */
	struct ULoreScreen_MissionType_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
	 */
	struct ULoreScreen_MissionType_C_ExecuteUbergraph_LoreScreen_MissionType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
