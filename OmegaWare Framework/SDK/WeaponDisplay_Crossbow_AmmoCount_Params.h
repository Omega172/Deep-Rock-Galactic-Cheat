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
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.GetArrowIcon
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_GetArrowIcon_Params
	{
	public:
		class UTexture2D*                                          OutIcon;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.Refresh
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_Refresh_Params
	{	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.SetItem
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_SetItem_Params
	{
	public:
		class AItem*                                               InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnAmountChanged
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_OnAmountChanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnArrowChanged
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_OnArrowChanged_Params
	{
	public:
		bool                                                       InDefaultArrow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnItemSet
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_OnItemSet_Params
	{	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowEquipped
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_OnCrossbowEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowUnEquipped
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_OnCrossbowUnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount
	 */
	struct UWeaponDisplay_Crossbow_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
