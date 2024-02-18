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
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget
	 */
	struct UHUD_EnemyTargeting_Affliction_C_UpdateTarget_Params
	{
	public:
		class UPawnAfflictionComponent*                            InPawnAfflictions;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive
	 */
	struct UHUD_EnemyTargeting_Affliction_C_SetActive_Params
	{
	public:
		bool                                                       Inactive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct
	 */
	struct UHUD_EnemyTargeting_Affliction_C_Construct_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct
	 */
	struct UHUD_EnemyTargeting_Affliction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished
	 */
	struct UHUD_EnemyTargeting_Affliction_C_OnFadeInFinished_Params
	{	};

	/**
	 * Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction
	 */
	struct UHUD_EnemyTargeting_Affliction_C_ExecuteUbergraph_HUD_EnemyTargeting_Affliction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQJ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
