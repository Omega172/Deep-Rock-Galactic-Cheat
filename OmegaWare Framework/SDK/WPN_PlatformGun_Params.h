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
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry
	 */
	struct AWPN_PlatformGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay
	 */
	struct AWPN_PlatformGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature
	 */
	struct AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation
	 */
	struct AWPN_PlatformGun_C_Upgraded_Blueprint_Implementation_Params
	{
	public:
		TArray<class UItemUpgrade*>                                upgrades;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
	 */
	struct AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature_Params
	{
	public:
		class AProjectileBase*                                     Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun
	 */
	struct AWPN_PlatformGun_C_ExecuteUbergraph_WPN_PlatformGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
