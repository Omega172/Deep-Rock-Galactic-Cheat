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
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetTextSize
	 */
	struct UConsoleScreen_Notification_C_SetTextSize_Params
	{
	public:
		int32_t                                                    InTextSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationIcon
	 */
	struct UConsoleScreen_Notification_C_SetNotificationIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText
	 */
	struct UConsoleScreen_Notification_C_SetNotificationText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct
	 */
	struct UConsoleScreen_Notification_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct
	 */
	struct UConsoleScreen_Notification_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationCategory
	 */
	struct UConsoleScreen_Notification_C_SetNotificationCategory_Params
	{
	public:
		class UCategoryID*                                         CategoryID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.OnItemCategoryChanged
	 */
	struct UConsoleScreen_Notification_C_OnItemCategoryChanged_Params
	{	};

	/**
	 * Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification
	 */
	struct UConsoleScreen_Notification_C_ExecuteUbergraph_ConsoleScreen_Notification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
