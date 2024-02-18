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
	 * Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress
	 */
	struct UWeaponDisplay_CryoSpray_Ammo_C_SetProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Init
	 */
	struct UWeaponDisplay_CryoSpray_Ammo_C_Init_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemUnequipped
	 */
	struct UWeaponDisplay_CryoSpray_Ammo_C_OnItemUnequipped_Params
	{	};

	/**
	 * Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemEquipped
	 */
	struct UWeaponDisplay_CryoSpray_Ammo_C_OnItemEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo
	 */
	struct UWeaponDisplay_CryoSpray_Ammo_C_ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
