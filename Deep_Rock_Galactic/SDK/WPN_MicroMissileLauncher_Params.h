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
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetUpgradeModifiers
	 */
	struct AWPN_MicroMissileLauncher_C_SetUpgradeModifiers_Params
	{
	public:
		class UItemUpgrade*                                        ItemUpgrade;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.GetGearStatEntry
	 */
	struct AWPN_MicroMissileLauncher_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveBeginPlay
	 */
	struct AWPN_MicroMissileLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.CustomEvent1
	 */
	struct AWPN_MicroMissileLauncher_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetHomingTarget
	 */
	struct AWPN_MicroMissileLauncher_C_SetHomingTarget_Params
	{	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.OnProjectileSpawned_Event_1
	 */
	struct AWPN_MicroMissileLauncher_C_OnProjectileSpawned_Event_1_Params
	{
	public:
		class AProjectileBase*                                     Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveTick
	 */
	struct AWPN_MicroMissileLauncher_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.Server_SetHomingLocation
	 */
	struct AWPN_MicroMissileLauncher_C_Server_SetHomingLocation_Params
	{
	public:
		struct FVector_NetQuantize                                 HomingLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.All_SetHomingLocation
	 */
	struct AWPN_MicroMissileLauncher_C_All_SetHomingLocation_Params
	{
	public:
		struct FVector_NetQuantize                                 HomingLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ExecuteUbergraph_WPN_MicroMissileLauncher
	 */
	struct AWPN_MicroMissileLauncher_C_ExecuteUbergraph_WPN_MicroMissileLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
