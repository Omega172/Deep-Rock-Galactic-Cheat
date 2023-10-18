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
	 * Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph
	 */
	struct APLS_CaveGenerator_C_CreateCaveGraph_Params
	{	};

	/**
	 * Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateSpawn
	 */
	struct APLS_CaveGenerator_C_CreateSpawn_Params
	{	};

	/**
	 * Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator
	 */
	struct APLS_CaveGenerator_C_ExecuteUbergraph_PLS_CaveGenerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3C9G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
