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
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded
	 */
	struct UHUD_PlayerTemperature_C_SetFaded_Params
	{
	public:
		bool                                                       FadeOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature
	 */
	struct UHUD_PlayerTemperature_C_UpdateTemperature_Params
	{
	public:
		float                                                      InTemperature;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChange;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows
	 */
	struct UHUD_PlayerTemperature_C_UpdateArrows_Params
	{	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct
	 */
	struct UHUD_PlayerTemperature_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged
	 */
	struct UHUD_PlayerTemperature_C_OnTemperatureChanged_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct
	 */
	struct UHUD_PlayerTemperature_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event
	 */
	struct UHUD_PlayerTemperature_C_OnTemperatureChangeRate_Event_Params
	{
	public:
		int32_t                                                    ChangeRate;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature
	 */
	struct UHUD_PlayerTemperature_C_ShowTemperature_Params
	{	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged
	 */
	struct UHUD_PlayerTemperature_C_OnBarVisibilityChanged_Params
	{
	public:
		bool                                                       barVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged
	 */
	struct UHUD_PlayerTemperature_C_OnTemperatureStateChanged_Params
	{
	public:
		EPlayerTemperatureState                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature
	 */
	struct UHUD_PlayerTemperature_C_ExecuteUbergraph_HUD_PlayerTemperature_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
