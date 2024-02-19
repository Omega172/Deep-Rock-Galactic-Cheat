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
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2_Params
	{	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1_Params
	{	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.AmmoCountDownTick
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_AmmoCountDownTick_Params
	{	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SetChargeValue
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_SetChargeValue_Params
	{
	public:
		float                                                      ChargeValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ready;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FullCharge;                                              // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Construct
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_Construct_Params
	{	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.PreConstruct
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Total Ammo left changed
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_TotalAmmoleftchanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.ExecuteUbergraph_WeaponDisplay_Coilgun_Charge
	 */
	struct UWeaponDisplay_Coilgun_Charge_C_ExecuteUbergraph_WeaponDisplay_Coilgun_Charge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
