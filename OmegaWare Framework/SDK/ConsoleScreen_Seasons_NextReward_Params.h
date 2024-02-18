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
	 * Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.SetData
	 */
	struct UConsoleScreen_Seasons_NextReward_C_SetData_Params
	{
	public:
		struct FSeasonLevel                                        SeasonLevel;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.PreConstruct
	 */
	struct UConsoleScreen_Seasons_NextReward_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.Construct
	 */
	struct UConsoleScreen_Seasons_NextReward_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.ExecuteUbergraph_ConsoleScreen_Seasons_NextReward
	 */
	struct UConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CVSL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
