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
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.VisibleAndEnabled
	 */
	struct UWND_JobsEntry_WeeklyV2_C_VisibleAndEnabled_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.SetInfo
	 */
	struct UWND_JobsEntry_WeeklyV2_C_SetInfo_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.IsActiveCampaign
	 */
	struct UWND_JobsEntry_WeeklyV2_C_IsActiveCampaign_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SUOD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.PreConstruct
	 */
	struct UWND_JobsEntry_WeeklyV2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JobsEntry_WeeklyV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_JobsEntry_WeeklyV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_JobsEntry_WeeklyV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.SetData
	 */
	struct UWND_JobsEntry_WeeklyV2_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.Refresh
	 */
	struct UWND_JobsEntry_WeeklyV2_C_Refresh_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.Event_Updated
	 */
	struct UWND_JobsEntry_WeeklyV2_C_Event_Updated_Params
	{	};

	/**
	 * Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.ExecuteUbergraph_WND_JobsEntry_WeeklyV2
	 */
	struct UWND_JobsEntry_WeeklyV2_C_ExecuteUbergraph_WND_JobsEntry_WeeklyV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
