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
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_SetChargeValue_Params
	{
	public:
		float                                                      ChargeValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ready;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FullCharge;                                              // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Init
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_Init_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.On UnEquipped
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_OnUnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.OnEquipped
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_OnEquipped_Params
	{	};

	/**
	 * Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge
	 */
	struct UWeaponDisplay_ChargeBlaster_Charge_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
