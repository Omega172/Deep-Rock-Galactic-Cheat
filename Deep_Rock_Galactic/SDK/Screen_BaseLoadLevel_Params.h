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
	 * Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq
	 */
	struct UScreen_BaseLoadLevel_C_StartLoadSeq_Params
	{	};

	/**
	 * Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader
	 */
	struct UScreen_BaseLoadLevel_C_StopLoader_Params
	{	};

	/**
	 * Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.CharacterPossesed
	 */
	struct UScreen_BaseLoadLevel_C_CharacterPossesed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel
	 */
	struct UScreen_BaseLoadLevel_C_ExecuteUbergraph_Screen_BaseLoadLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXI0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
