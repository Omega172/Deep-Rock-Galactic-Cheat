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
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.OnSpreadChange
	 */
	struct UHUD_Cro_LockOnRifle_C_OnSpreadChange_Params
	{
	public:
		float                                                      HorizontalSpread;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpread;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAtRest;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TESG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.Construct
	 */
	struct UHUD_Cro_LockOnRifle_C_Construct_Params
	{	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.SetData
	 */
	struct UHUD_Cro_LockOnRifle_C_SetData_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.PreConstruct
	 */
	struct UHUD_Cro_LockOnRifle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.OnDamagedEnemy_Event
	 */
	struct UHUD_Cro_LockOnRifle_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_DBJE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.LockingStarted_Event
	 */
	struct UHUD_Cro_LockOnRifle_C_LockingStarted_Event_Params
	{	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.NoLongerFocussed
	 */
	struct UHUD_Cro_LockOnRifle_C_NoLongerFocussed_Params
	{	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.OnUpgraded
	 */
	struct UHUD_Cro_LockOnRifle_C_OnUpgraded_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.OnLockingStopped
	 */
	struct UHUD_Cro_LockOnRifle_C_OnLockingStopped_Params
	{	};

	/**
	 * Function HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C.ExecuteUbergraph_HUD_Cro_LockOnRifle
	 */
	struct UHUD_Cro_LockOnRifle_C_ExecuteUbergraph_HUD_Cro_LockOnRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
