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
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion
	 */
	struct UDE_FlintLockesDelight_C_OnRep_TriggerExplosion_Params
	{	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick
	 */
	struct UDE_FlintLockesDelight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect
	 */
	struct UDE_FlintLockesDelight_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion
	 */
	struct UDE_FlintLockesDelight_C_TriggerExplosion_Params
	{	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect
	 */
	struct UDE_FlintLockesDelight_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects
	 */
	struct UDE_FlintLockesDelight_C_StopEffects_Params
	{	};

	/**
	 * Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight
	 */
	struct UDE_FlintLockesDelight_C_ExecuteUbergraph_DE_FlintLockesDelight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
