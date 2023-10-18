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
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetCurrentChargeWithAudio
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_SetCurrentChargeWithAudio_Params
	{
	public:
		int32_t                                                    InCharge;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetTotalCount
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_SetTotalCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetClipCount
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_SetClipCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.InitializeAmmoWidget
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_InitializeAmmoWidget_Params
	{
	public:
		class AItem*                                               OwningItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetComponent*                                    WidgetComp;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnStartCharging
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_OnStartCharging_Params
	{	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnEndCharging
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_OnEndCharging_Params
	{	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnUpdateCharging
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_OnUpdateCharging_Params
	{	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.Construct
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ResetChargingUI
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_ResetChargingUI_Params
	{
	public:
		bool                                                       InHideIcons;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher
	 */
	struct UWeaponDisplay_MicroMissileLauncher_C_ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MF0L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
