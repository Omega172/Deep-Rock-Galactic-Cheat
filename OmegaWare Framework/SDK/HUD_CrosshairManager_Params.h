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
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents
	 */
	struct UHUD_CrosshairManager_C_UnregisterEvents_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility
	 */
	struct UHUD_CrosshairManager_C_UpdateVisibility_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair
	 */
	struct UHUD_CrosshairManager_C_SetCrosshair_Params
	{
	public:
		class AItem*                                               InEquippedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
	 */
	struct UHUD_CrosshairManager_C_OnToggleMapTool_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
	 */
	struct UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params
	{
	public:
		class UResourceBank*                                       ResourceBank;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
	 */
	struct UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params
	{
	public:
		class UResourceBank*                                       ResourceBank;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
	 */
	struct UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params
	{
	public:
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       OldCameraMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
	 */
	struct UHUD_CrosshairManager_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct
	 */
	struct UHUD_CrosshairManager_C_Destruct_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
	 */
	struct UHUD_CrosshairManager_C_Construct_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready
	 */
	struct UHUD_CrosshairManager_C_OnInventoryReady_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded
	 */
	struct UHUD_CrosshairManager_C_OnItemsLoaded_Params
	{	};

	/**
	 * Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
	 */
	struct UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
