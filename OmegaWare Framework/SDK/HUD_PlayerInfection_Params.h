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
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.SetFaded
	 */
	struct UHUD_PlayerInfection_C_SetFaded_Params
	{
	public:
		bool                                                       FadeOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.UpdateInfection
	 */
	struct UHUD_PlayerInfection_C_UpdateInfection_Params
	{
	public:
		float                                                      InTemperature;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChange;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.Construct
	 */
	struct UHUD_PlayerInfection_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.PreConstruct
	 */
	struct UHUD_PlayerInfection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionChanged
	 */
	struct UHUD_PlayerInfection_C_OnInfectionChanged_Params
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionStateChangedEvent_Event_1
	 */
	struct UHUD_PlayerInfection_C_OnInfectionStateChangedEvent_Event_1_Params
	{
	public:
		EInfectionState                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfection.HUD_PlayerInfection_C.ExecuteUbergraph_HUD_PlayerInfection
	 */
	struct UHUD_PlayerInfection_C_ExecuteUbergraph_HUD_PlayerInfection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
