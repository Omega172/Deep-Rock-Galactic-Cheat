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
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.SetData
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_SetData_Params
	{
	public:
		int32_t                                                    ClipSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReloadDuration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxAmmo;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Construct
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnReloadTimeChanged_Event
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnReloadTimeChanged_Event_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnAmountChanged
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnAmountChanged_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnTotalChanged
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnTotalChanged_Params
	{
	public:
		int32_t                                                    Total;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.DoItemEquipped
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_DoItemEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateTotalInfo
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_UpdateTotalInfo_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateClipInfo
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_UpdateClipInfo_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Init
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_Init_Params
	{
	public:
		class AItem*                                               ParticleWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnUnequipped
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnUnequipped_Params
	{	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnEquipped
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount
	 */
	struct UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
