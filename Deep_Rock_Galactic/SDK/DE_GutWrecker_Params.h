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
	 * Function DE_GutWrecker.DE_GutWrecker_C.ReceiveTick
	 */
	struct UDE_GutWrecker_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_GutWrecker.DE_GutWrecker_C.OnStartEffect
	 */
	struct UDE_GutWrecker_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_GutWrecker.DE_GutWrecker_C.OnStopEffect
	 */
	struct UDE_GutWrecker_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_GutWrecker.DE_GutWrecker_C.ExecuteUbergraph_DE_GutWrecker
	 */
	struct UDE_GutWrecker_C_ExecuteUbergraph_DE_GutWrecker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
