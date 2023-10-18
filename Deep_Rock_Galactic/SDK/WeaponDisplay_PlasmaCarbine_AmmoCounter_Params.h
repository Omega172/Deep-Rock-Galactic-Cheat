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
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgressColor
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetProgressColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Scrub Animation
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_ScrubAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InProgress;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.OverheatStatus
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_OverheatStatus_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5D6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgress
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.UpdateAmount
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_UpdateAmount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetTotalCount
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetTotalCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Max Ammo Changed
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_MaxAmmoChanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Total Ammo left changed
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_TotalAmmoleftchanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetClipCount
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetClipCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.PreConstruct
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetHeatValue
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetHeatValue_Params
	{
	public:
		float                                                      HeatPercentage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CLG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ThermalFeedbackLevel;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter
	 */
	struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
