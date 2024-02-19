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
	 * Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
	 */
	struct UHUD_SpaceRig_NotificationsManager_C_Construct_Params
	{	};

	/**
	 * Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
	 */
	struct UHUD_SpaceRig_NotificationsManager_C_CreateNotificationWidget_Params
	{
	public:
		struct FSpaceRigNotification                               Notification;                                            // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification
	 */
	struct UHUD_SpaceRig_NotificationsManager_C_CheckCraftingNotification_Params
	{	};

	/**
	 * Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewSpacerigNotifications
	 */
	struct UHUD_SpaceRig_NotificationsManager_C_CheckForNewSpacerigNotifications_Params
	{	};

	/**
	 * Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
	 */
	struct UHUD_SpaceRig_NotificationsManager_C_ExecuteUbergraph_HUD_SpaceRig_NotificationsManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_88WH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
