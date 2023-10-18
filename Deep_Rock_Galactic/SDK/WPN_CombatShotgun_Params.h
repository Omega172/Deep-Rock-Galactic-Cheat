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
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.GetGearStatEntry
	 */
	struct AWPN_CombatShotgun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.UserConstructionScript
	 */
	struct AWPN_CombatShotgun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.ReceiveBeginPlay
	 */
	struct AWPN_CombatShotgun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.CustomEvent1
	 */
	struct AWPN_CombatShotgun_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.AddPoisonToPlatform
	 */
	struct AWPN_CombatShotgun_C_AddPoisonToPlatform_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       alwaysPenetrate;                                         // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_CombatShotgun.WPN_CombatShotgun_C.ExecuteUbergraph_WPN_CombatShotgun
	 */
	struct AWPN_CombatShotgun_C_ExecuteUbergraph_WPN_CombatShotgun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
