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
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.PreConstruct
	 */
	struct UHUD_CroNewGrenadeLauncher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnDamagedEnemy_Event
	 */
	struct UHUD_CroNewGrenadeLauncher_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_L7QP[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.SwitchToHP
	 */
	struct UHUD_CroNewGrenadeLauncher_C_SwitchToHP_Params
	{	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.SetData
	 */
	struct UHUD_CroNewGrenadeLauncher_C_SetData_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.Construct
	 */
	struct UHUD_CroNewGrenadeLauncher_C_Construct_Params
	{	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnSpreadChanged
	 */
	struct UHUD_CroNewGrenadeLauncher_C_OnSpreadChanged_Params
	{
	public:
		float                                                      HorizontalSpread;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpread;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAtRest;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.ExecuteUbergraph_HUD_CroNewGrenadeLauncher
	 */
	struct UHUD_CroNewGrenadeLauncher_C_ExecuteUbergraph_HUD_CroNewGrenadeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
