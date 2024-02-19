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
	 * Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation
	 */
	struct ABP_WormholeLocation_OutsideBase_C_OnPlayerEnterLocation_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation
	 */
	struct ABP_WormholeLocation_OutsideBase_C_OnPlayerLeaveLocation_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase
	 */
	struct ABP_WormholeLocation_OutsideBase_C_ExecuteUbergraph_BP_WormholeLocation_OutsideBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XI5P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
