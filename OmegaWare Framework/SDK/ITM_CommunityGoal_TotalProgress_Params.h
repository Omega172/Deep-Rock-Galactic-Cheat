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
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.DoFactionToolTip
	 */
	struct UITM_CommunityGoal_TotalProgress_C_DoFactionToolTip_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SendButtonToolTipOpen
	 */
	struct UITM_CommunityGoal_TotalProgress_C_SendButtonToolTipOpen_Params
	{
	public:
		class UWidget*                                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_428W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_8_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_8_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_7_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_7_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_6_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_6_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_5_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_5_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_4_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_4_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_3_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_3_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_2_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_2_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_1_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_1_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_0_ColorAndOpacity_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_0_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.IncreaseTotalGoalsProgressByGoal
	 */
	struct UITM_CommunityGoal_TotalProgress_C_IncreaseTotalGoalsProgressByGoal_Params
	{
	public:
		class UCommunityGoal*                                      Goal;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    memberCount;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_8_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_8_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_7_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_7_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_6_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_6_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_5_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_5_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_4_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_4_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_3_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_3_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_2_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_2_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_1_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_1_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_0_Percent_1
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ProgressBar_0_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ResetAnim
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ResetAnim_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.PreConstruct
	 */
	struct UITM_CommunityGoal_TotalProgress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Tick
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoals
	 */
	struct UITM_CommunityGoal_TotalProgress_C_SetGoals_Params
	{
	public:
		TArray<class FString>                                      GoalID;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              GoalValue;                                               // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoalsTier
	 */
	struct UITM_CommunityGoal_TotalProgress_C_SetGoalsTier_Params
	{
	public:
		float                                                      TierProgress;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Construct
	 */
	struct UITM_CommunityGoal_TotalProgress_C_Construct_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ExecuteUbergraph_ITM_CommunityGoal_TotalProgress
	 */
	struct UITM_CommunityGoal_TotalProgress_C_ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverEnded__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_HoverEnded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverStarted__DelegateSignature
	 */
	struct UITM_CommunityGoal_TotalProgress_C_HoverStarted__DelegateSignature_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
