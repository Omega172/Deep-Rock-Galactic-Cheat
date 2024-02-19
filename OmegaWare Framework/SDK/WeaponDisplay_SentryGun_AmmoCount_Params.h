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
	 * Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry
	 */
	struct UWeaponDisplay_SentryGun_AmmoCount_C_SetSentry_Params
	{
	public:
		class ASentryGun*                                          SentryGun;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged
	 */
	struct UWeaponDisplay_SentryGun_AmmoCount_C_OnAmmoCountChanged_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct
	 */
	struct UWeaponDisplay_SentryGun_AmmoCount_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount
	 */
	struct UWeaponDisplay_SentryGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
