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
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
	 */
	struct UHUD_Milestone_Notification_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
	 */
	struct UHUD_Milestone_Notification_C_InitWidget_Params
	{	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
	 */
	struct UHUD_Milestone_Notification_C_Construct_Params
	{	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
	 */
	struct UHUD_Milestone_Notification_C_OnMilestoneReached_Event_Params
	{
	public:
		class UMilestoneAsset*                                     Milestone;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReachedTier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished
	 */
	struct UHUD_Milestone_Notification_C_OnIntroFinished_Params
	{	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished
	 */
	struct UHUD_Milestone_Notification_C_OnOutroFinished_Params
	{	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
	 */
	struct UHUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
	 */
	struct UHUD_Milestone_Notification_C_OnMilestoneReached__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
