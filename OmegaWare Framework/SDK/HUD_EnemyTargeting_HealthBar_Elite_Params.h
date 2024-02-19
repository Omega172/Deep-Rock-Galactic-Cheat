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
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.GetCharacter
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_GetCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Refresh
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_Refresh_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.PreConstruct
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveNewTarget
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_ReceiveNewTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveUpdateTarget
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_ReceiveUpdateTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Construct
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_Construct_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite
	 */
	struct UHUD_EnemyTargeting_HealthBar_Elite_C_ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
