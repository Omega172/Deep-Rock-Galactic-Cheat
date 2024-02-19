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
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.GetContent
	 */
	struct UHUD_EnemyTargeting_C_GetContent_Params
	{
	public:
		class ULookingAtContentWidget*                             OutActiveContent;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SelectContent
	 */
	struct UHUD_EnemyTargeting_C_SelectContent_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateScreenPosition
	 */
	struct UHUD_EnemyTargeting_C_UpdateScreenPosition_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ClampToScreenHeight
	 */
	struct UHUD_EnemyTargeting_C_ClampToScreenHeight_Params
	{
	public:
		float                                                      CoordinateY;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Bound;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClampedY;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateWidgets
	 */
	struct UHUD_EnemyTargeting_C_UpdateWidgets_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UC8G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged
	 */
	struct UHUD_EnemyTargeting_C_HandleTargetDamaged_Params
	{
	public:
		unsigned char                                              UnknownData_9SH4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHCZ[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible
	 */
	struct UHUD_EnemyTargeting_C_SetIsVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost
	 */
	struct UHUD_EnemyTargeting_C_ReceiveTargetLost_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget
	 */
	struct UHUD_EnemyTargeting_C_ReceiveUpdateTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget
	 */
	struct UHUD_EnemyTargeting_C_ReceiveNewTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct
	 */
	struct UHUD_EnemyTargeting_C_Construct_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy
	 */
	struct UHUD_EnemyTargeting_C_OnDamagedEnemy_Params
	{
	public:
		unsigned char                                              UnknownData_5VT3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct
	 */
	struct UHUD_EnemyTargeting_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting
	 */
	struct UHUD_EnemyTargeting_C_ExecuteUbergraph_HUD_EnemyTargeting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
