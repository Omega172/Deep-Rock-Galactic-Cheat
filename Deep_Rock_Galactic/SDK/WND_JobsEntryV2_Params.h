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
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.CanStartCampaign
	 */
	struct UWND_JobsEntryV2_C_CanStartCampaign_Params
	{
	public:
		class UCampaign*                                           InCampaign;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.VisibleAndEnabled
	 */
	struct UWND_JobsEntryV2_C_VisibleAndEnabled_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetInfo
	 */
	struct UWND_JobsEntryV2_C_SetInfo_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.IsActiveCampaign
	 */
	struct UWND_JobsEntryV2_C_IsActiveCampaign_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U4FS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.PreConstruct
	 */
	struct UWND_JobsEntryV2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetData
	 */
	struct UWND_JobsEntryV2_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.Refresh
	 */
	struct UWND_JobsEntryV2_C_Refresh_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.Event_Updated
	 */
	struct UWND_JobsEntryV2_C_Event_Updated_Params
	{	};

	/**
	 * Function WND_JobsEntryV2.WND_JobsEntryV2_C.ExecuteUbergraph_WND_JobsEntryV2
	 */
	struct UWND_JobsEntryV2_C_ExecuteUbergraph_WND_JobsEntryV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
