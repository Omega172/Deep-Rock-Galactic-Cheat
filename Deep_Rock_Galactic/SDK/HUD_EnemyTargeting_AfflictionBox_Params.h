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
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_SetAfflictionComponent_Params
	{
	public:
		class UPawnAfflictionComponent*                            InAfflictionComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAfflictions_Params
	{
	public:
		TArray<class UPawnAffliction*>                             Affliction;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldIgnore;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5NS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAffliction_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldIgnore;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_ClearAfflictions_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleAffliction_Params
	{
	public:
		class UPawnAffliction*                                     InAffliction;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H79Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_SetTarget_Params
	{
	public:
		class AActor*                                              InAfflictionTarget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionActivatedEvent_Event_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionDeactivatedEvent_Event_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox
	 */
	struct UHUD_EnemyTargeting_AfflictionBox_C_ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
