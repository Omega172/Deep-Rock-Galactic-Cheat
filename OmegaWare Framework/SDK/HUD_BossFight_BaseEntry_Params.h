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
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.GetBossFight
	 */
	struct UHUD_BossFight_BaseEntry_C_GetBossFight_Params
	{
	public:
		struct FBossFight                                          BossFight;                                               // 0x0000(0x0018)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnCanTakeDamageChanged
	 */
	struct UHUD_BossFight_BaseEntry_C_OnCanTakeDamageChanged_Params
	{
	public:
		bool                                                       OutCanTakeDamage;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDeath
	 */
	struct UHUD_BossFight_BaseEntry_C_OnDeath_Params
	{	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDisengaged
	 */
	struct UHUD_BossFight_BaseEntry_C_OnDisengaged_Params
	{	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnHealthChanged
	 */
	struct UHUD_BossFight_BaseEntry_C_OnHealthChanged_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Construct
	 */
	struct UHUD_BossFight_BaseEntry_C_Construct_Params
	{	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnFightRemoved
	 */
	struct UHUD_BossFight_BaseEntry_C_OnFightRemoved_Params
	{	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Setup Invulnerability
	 */
	struct UHUD_BossFight_BaseEntry_C_SetupInvulnerability_Params
	{	};

	/**
	 * Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.ExecuteUbergraph_HUD_BossFight_BaseEntry
	 */
	struct UHUD_BossFight_BaseEntry_C_ExecuteUbergraph_HUD_BossFight_BaseEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
