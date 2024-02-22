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
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.SetHealthMapped
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_SetHealthMapped_Params
	{
	public:
		class UProgressBar*                                        HealthBar;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InPercent;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.RefreshOwnerName
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_RefreshOwnerName_Params
	{
	public:
		bool                                                       InReset;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1MAS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.GetCharacter
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_GetCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.Refresh
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_Refresh_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.PreConstruct
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ReceiveNewTarget
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_ReceiveNewTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ReceiveUpdateTarget
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_ReceiveUpdateTarget_Params
	{
	public:
		class AActor*                                              InCurrentTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.Construct
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_Construct_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar
	 */
	struct UHUD_EnemyTargeting_HealthBar_C_ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
