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
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
	 */
	struct UHUD_BoscoAbillityCounter_C_CreateIcons_Params
	{
	public:
		int32_t                                                    IconCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MCHR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
	 */
	struct UHUD_BoscoAbillityCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
	 */
	struct UHUD_BoscoAbillityCounter_C_Construct_Params
	{	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
	 */
	struct UHUD_BoscoAbillityCounter_C_OnItemsLoaded_Params
	{	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
	 */
	struct UHUD_BoscoAbillityCounter_C_OnAbillityChargeProgress_Params
	{
	public:
		float                                                      aProgress;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    aNextIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
	 */
	struct UHUD_BoscoAbillityCounter_C_OnBoscoChanged_Params
	{
	public:
		class ABosco*                                              Bosco;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbilityDataUpdated_Event_1
	 */
	struct UHUD_BoscoAbillityCounter_C_OnAbilityDataUpdated_Event_1_Params
	{
	public:
		class UBoscoAbillityComponent*                             ability;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
	 */
	struct UHUD_BoscoAbillityCounter_C_ExecuteUbergraph_HUD_BoscoAbillityCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
