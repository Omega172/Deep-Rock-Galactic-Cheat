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
	 * Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick
	 */
	struct UDE_BlacklockLager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect
	 */
	struct UDE_BlacklockLager_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects
	 */
	struct UDE_BlacklockLager_C_ActivateEffects_Params
	{	};

	/**
	 * Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect
	 */
	struct UDE_BlacklockLager_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager
	 */
	struct UDE_BlacklockLager_C_ExecuteUbergraph_DE_BlacklockLager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
