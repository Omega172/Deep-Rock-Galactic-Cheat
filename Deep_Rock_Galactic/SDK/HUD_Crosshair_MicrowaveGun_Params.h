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
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.Construct
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_Construct_Params
	{	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.PreConstruct
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnDamagedEnemy_Event
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_CF0Y[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.IncreaseWidth
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_IncreaseWidth_Params
	{	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetData
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_SetData_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseActivated
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_OnLenseActivated_Params
	{
	public:
		bool                                                       isWideLens;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseDeactivated
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_OnLenseDeactivated_Params
	{
	public:
		bool                                                       isWideLens;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetSize
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_SetSize_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.DecreaseWidth
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_DecreaseWidth_Params
	{	};

	/**
	 * Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.ExecuteUbergraph_HUD_Crosshair_MicrowaveGun
	 */
	struct UHUD_Crosshair_MicrowaveGun_C_ExecuteUbergraph_HUD_Crosshair_MicrowaveGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9ZM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
