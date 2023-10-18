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
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects
	 */
	struct UDE_WormholeSpecial_C_DisableOlderActiveWormholeEffects_Params
	{	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect
	 */
	struct UDE_WormholeSpecial_C_IsLastActiveWormholeEffect_Params
	{
	public:
		bool                                                       waslasteffect;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position
	 */
	struct UDE_WormholeSpecial_C_SetOriginalposition_Params
	{	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick
	 */
	struct UDE_WormholeSpecial_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect
	 */
	struct UDE_WormholeSpecial_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect
	 */
	struct UDE_WormholeSpecial_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects
	 */
	struct UDE_WormholeSpecial_C_SpawnTeleportEffects_Params
	{	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects
	 */
	struct UDE_WormholeSpecial_C_DisableActiveLocationEffects_Params
	{	};

	/**
	 * Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial
	 */
	struct UDE_WormholeSpecial_C_ExecuteUbergraph_DE_WormholeSpecial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
