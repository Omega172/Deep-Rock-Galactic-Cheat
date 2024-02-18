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
	 * Function HUD_Health_Base.HUD_Health_Base_C.CheckPingPongAnim
	 */
	struct UHUD_Health_Base_C_CheckPingPongAnim_Params
	{	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.SetAlphaHealthbar
	 */
	struct UHUD_Health_Base_C_SetAlphaHealthbar_Params
	{
	public:
		float                                                      alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth
	 */
	struct UHUD_Health_Base_C_HasLowHealth_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7J3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged
	 */
	struct UHUD_Health_Base_C_HealthChanged_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component
	 */
	struct UHUD_Health_Base_C_BindHealthComponent_Params
	{
	public:
		class UPlayerHealthComponent*                              HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct
	 */
	struct UHUD_Health_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct
	 */
	struct UHUD_Health_Base_C_SetHealthPct_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component
	 */
	struct UHUD_Health_Base_C_UnbindHealthComponent_Params
	{	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player
	 */
	struct UHUD_Health_Base_C_BindToPlayer_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event
	 */
	struct UHUD_Health_Base_C_OnHealthRegeneratingChanged_Event_Params
	{
	public:
		bool                                                       isRegenerating;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged
	 */
	struct UHUD_Health_Base_C_UnbindHealthChanged_Params
	{	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed
	 */
	struct UHUD_Health_Base_C_UnbindRegeneratingChanged_Params
	{	};

	/**
	 * Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base
	 */
	struct UHUD_Health_Base_C_ExecuteUbergraph_HUD_Health_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
