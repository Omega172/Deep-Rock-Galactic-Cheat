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
	 * Function _Menu_JobsV3._Menu_JobsV3_C.HasCompletedIntro
	 */
	struct U_Menu_JobsV3_C_HasCompletedIntro_Params
	{
	public:
		bool                                                       OutCompleted;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.OnKeyUp
	 */
	struct U_Menu_JobsV3_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.RefreshJobs
	 */
	struct U_Menu_JobsV3_C_RefreshJobs_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.AddJobEntry
	 */
	struct U_Menu_JobsV3_C_AddJobEntry_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.GetFSDPlayer
	 */
	struct U_Menu_JobsV3_C_GetFSDPlayer_Params
	{
	public:
		class AFSDPlayerController*                                AsFSDPlayerController;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.OnShown
	 */
	struct U_Menu_JobsV3_C_OnShown_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.Back
	 */
	struct U_Menu_JobsV3_C_Back_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.PreConstruct
	 */
	struct U_Menu_JobsV3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.Construct
	 */
	struct U_Menu_JobsV3_C_Construct_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.OnCampaignCompleted_Event
	 */
	struct U_Menu_JobsV3_C_OnCampaignCompleted_Event_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.BuildList
	 */
	struct U_Menu_JobsV3_C_BuildList_Params
	{	};

	/**
	 * Function _Menu_JobsV3._Menu_JobsV3_C.ExecuteUbergraph__Menu_JobsV3
	 */
	struct U_Menu_JobsV3_C_ExecuteUbergraph__Menu_JobsV3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
