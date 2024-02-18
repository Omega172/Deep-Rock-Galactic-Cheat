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
	 * Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStartEffect
	 */
	struct UDE_StrongerBarrelKicking_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStopEffect
	 */
	struct UDE_StrongerBarrelKicking_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.ExecuteUbergraph_DE_StrongerBarrelKicking
	 */
	struct UDE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
