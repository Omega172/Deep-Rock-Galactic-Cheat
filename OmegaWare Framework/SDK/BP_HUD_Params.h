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
	 * Function BP_HUD.BP_HUD_C.GetQuickCheatMenu
	 */
	struct ABP_HUD_C_GetQuickCheatMenu_Params
	{
	public:
		class UWindowWidget*                                       QuickCheatMenu;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.GetCheatMenu
	 */
	struct ABP_HUD_C_GetCheatMenu_Params
	{
	public:
		class UWindowWidget*                                       CheatMenu;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.GetHUDWidget
	 */
	struct ABP_HUD_C_GetHUDWidget_Params
	{
	public:
		class UFSDMainHUDWidget*                                   HudWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.GetEscapeMenu
	 */
	struct ABP_HUD_C_GetEscapeMenu_Params
	{
	public:
		class UWindowWidget*                                       EscMenu;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.PopEvent
	 */
	struct ABP_HUD_C_PopEvent_Params
	{
	public:
		class UWidget*                                             eventWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.CreateEscMenu
	 */
	struct ABP_HUD_C_CreateEscMenu_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.IsInitialized
	 */
	struct ABP_HUD_C_IsInitialized_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated
	 */
	struct ABP_HUD_C_CreateQuickCheatsIfNotCreated_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.PushEvent
	 */
	struct ABP_HUD_C_PushEvent_Params
	{
	public:
		class UWidget*                                             eventWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
	 */
	struct ABP_HUD_C_CreateCheatsIfNotCreated_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
	 */
	struct ABP_HUD_C_RemoveAllWidgetsFromParents_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
	 */
	struct ABP_HUD_C_AddAllWidgetToViewport_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.Add Widget Class
	 */
	struct ABP_HUD_C_AddWidgetClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.PlayerSpawned
	 */
	struct ABP_HUD_C_PlayerSpawned_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.RadarPointAdded
	 */
	struct ABP_HUD_C_RadarPointAdded_Params
	{
	public:
		class URadarPointComponent*                                radarPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
	 */
	struct ABP_HUD_C_HandleSeamlessTravel_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnVisibilityChanged
	 */
	struct ABP_HUD_C_OnVisibilityChanged_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ReceiveDestroyed
	 */
	struct ABP_HUD_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.CameraDroneSpawned
	 */
	struct ABP_HUD_C_CameraDroneSpawned_Params
	{
	public:
		class APlayerCameraDrone*                                  Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event
	 */
	struct ABP_HUD_C_OnEndLevelReceived_Event_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnShowMainMenu
	 */
	struct ABP_HUD_C_OnShowMainMenu_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.LoadEscapeMenu
	 */
	struct ABP_HUD_C_LoadEscapeMenu_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.MenuLoaded
	 */
	struct ABP_HUD_C_MenuLoaded_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.On HUD Initialized
	 */
	struct ABP_HUD_C_OnHUDInitialized_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest
	 */
	struct ABP_HUD_C_QuickCheatMenuRequest_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.CheatMenuRequest
	 */
	struct ABP_HUD_C_CheatMenuRequest_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 */
	struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
