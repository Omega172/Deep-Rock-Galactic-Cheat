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
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.SetHeatValue
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_SetHeatValue_Params
	{
	public:
		float                                                      HeatPercentage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.Construct
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.Init
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_Init_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.On UnEquipped
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_OnUnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.OnEquipped
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_OnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat
	 */
	struct UWeaponDisplay_ChargeBlaster_Heat_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
