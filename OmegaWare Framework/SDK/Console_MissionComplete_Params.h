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
	 * Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult
	 */
	struct UConsole_MissionComplete_C_GetMissionResult_Params
	{
	public:
		class UMissionResultInfo*                                  MissionResultInfo;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct
	 */
	struct UConsole_MissionComplete_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen
	 */
	struct UConsole_MissionComplete_C_BeginScreen_Params
	{	};

	/**
	 * Function Console_MissionComplete.Console_MissionComplete_C.Construct
	 */
	struct UConsole_MissionComplete_C_Construct_Params
	{	};

	/**
	 * Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete
	 */
	struct UConsole_MissionComplete_C_ExecuteUbergraph_Console_MissionComplete_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FA3W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
