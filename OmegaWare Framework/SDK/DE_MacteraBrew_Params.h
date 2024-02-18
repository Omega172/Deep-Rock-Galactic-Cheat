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
	 * Function DE_MacteraBrew.DE_MacteraBrew_C.OnStopEffect
	 */
	struct UDE_MacteraBrew_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_MacteraBrew.DE_MacteraBrew_C.OnStartEffect
	 */
	struct UDE_MacteraBrew_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_MacteraBrew.DE_MacteraBrew_C.ExecuteUbergraph_DE_MacteraBrew
	 */
	struct UDE_MacteraBrew_C_ExecuteUbergraph_DE_MacteraBrew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0L1S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
