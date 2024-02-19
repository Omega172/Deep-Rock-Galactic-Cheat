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
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility
	 */
	struct UHUD_PlayerInfo_C_SetElementVisibility_Params
	{
	public:
		bool                                                       NameClassIcon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HealthShield;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically
	 */
	struct UHUD_PlayerInfo_C_ShowDynamically_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event
	 */
	struct UHUD_PlayerInfo_C_OnCharacterStateChanged_Event_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event
	 */
	struct UHUD_PlayerInfo_C_OnHealthChanged_Event_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event
	 */
	struct UHUD_PlayerInfo_C_OnLaserPointerPressed_Event_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event
	 */
	struct UHUD_PlayerInfo_C_OnLaserPointerReleased_Event_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged
	 */
	struct UHUD_PlayerInfo_C_VisibilityModeChanged_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_PlayerInfo_C_BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_PlayerInfo_C_BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event
	 */
	struct UHUD_PlayerInfo_C_OnFirePressed_Event_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event
	 */
	struct UHUD_PlayerInfo_C_OnFireReleased_Event_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent
	 */
	struct UHUD_PlayerInfo_C_OnSupplyStatusChangedEvent_Params
	{
	public:
		float                                                      ammoStatus01;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      healthStatus01;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter
	 */
	struct UHUD_PlayerInfo_C_ShowAmmoCounter_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent
	 */
	struct UHUD_PlayerInfo_C_OnBeginHoveringEvent_Params
	{
	public:
		class UUsableComponentBase*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event
	 */
	struct UHUD_PlayerInfo_C_OnEndHoveringEvent_Event_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct
	 */
	struct UHUD_PlayerInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct
	 */
	struct UHUD_PlayerInfo_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo
	 */
	struct UHUD_PlayerInfo_C_ExecuteUbergraph_HUD_PlayerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
