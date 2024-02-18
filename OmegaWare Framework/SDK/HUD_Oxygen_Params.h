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
	 * Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1
	 */
	struct UHUD_Oxygen_C_OnOxygenChanged_Event_1_Params
	{
	public:
		int32_t                                                    oxygenLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1
	 */
	struct UHUD_Oxygen_C_OnOxygenReplenishingEvent_Event_1_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft
	 */
	struct UHUD_Oxygen_C__40PercentOxygenLeft_Params
	{	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.SetProgress
	 */
	struct UHUD_Oxygen_C_SetProgress_Params
	{
	public:
		float                                                      CurrentProgress;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.Construct
	 */
	struct UHUD_Oxygen_C_Construct_Params
	{	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct
	 */
	struct UHUD_Oxygen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen
	 */
	struct UHUD_Oxygen_C_ExecuteUbergraph_HUD_Oxygen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
