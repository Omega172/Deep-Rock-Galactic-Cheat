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
	 * Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.Construct
	 */
	struct UHUD_Cro_PlasmaCarbine_C_Construct_Params
	{	};

	/**
	 * Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.SetData
	 */
	struct UHUD_Cro_PlasmaCarbine_C_SetData_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.PreConstruct
	 */
	struct UHUD_Cro_PlasmaCarbine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.OnDamagedEnemy_Event
	 */
	struct UHUD_Cro_PlasmaCarbine_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_EZDS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.ExecuteUbergraph_HUD_Cro_PlasmaCarbine
	 */
	struct UHUD_Cro_PlasmaCarbine_C_ExecuteUbergraph_HUD_Cro_PlasmaCarbine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
