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
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD
	 */
	struct UHUD_TeamDisplay_SmallItem_C_ShowDynamicHUD_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnVisibilityModeChanged_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHUDVisibilityMode                                         Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature
	 */
	struct UHUD_TeamDisplay_SmallItem_C_BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature_Params
	{
	public:
		bool                                                       InTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnPlayerNameChanged_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnPlayerLeave_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim
	 */
	struct UHUD_TeamDisplay_SmallItem_C_StopAnim_Params
	{
	public:
		class UWidgetAnimation*                                    Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnPlayerCharacterSpawned_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnDeath_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnDamageTaken_Event_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnHealthChanged_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim
	 */
	struct UHUD_TeamDisplay_SmallItem_C_PlayAnim_Params
	{
	public:
		class UWidgetAnimation*                                    Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnOwningCharacterSpawned_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct
	 */
	struct UHUD_TeamDisplay_SmallItem_C_Construct_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Event_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnDownCameraTargetChanged_Params
	{
	public:
		class APlayerCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnLaserPointerReleased_Event_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnLaserPointerPressed_Event_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar
	 */
	struct UHUD_TeamDisplay_SmallItem_C_ShowAmmoBar_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnEndHoveringEvent_Event_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnBeginHoveringEvent_Params
	{
	public:
		class UUsableComponentBase*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct
	 */
	struct UHUD_TeamDisplay_SmallItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent
	 */
	struct UHUD_TeamDisplay_SmallItem_C_OnSupplyStatusChangedEvent_Params
	{
	public:
		float                                                      ammoStatus01;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      healthStatus01;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem
	 */
	struct UHUD_TeamDisplay_SmallItem_C_ExecuteUbergraph_HUD_TeamDisplay_SmallItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
