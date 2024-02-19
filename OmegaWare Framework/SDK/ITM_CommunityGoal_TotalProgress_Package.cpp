/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.DoFactionToolTip
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::DoFactionToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.DoFactionToolTip");
		
		UITM_CommunityGoal_TotalProgress_C_DoFactionToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SendButtonToolTipOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::SendButtonToolTipOpen(class UWidget* Button, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SendButtonToolTipOpen");
		
		UITM_CommunityGoal_TotalProgress_C_SendButtonToolTipOpen_Params params {};
		params.Button = Button;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_8_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_8_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_8_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_8_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_7_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_7_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_7_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_7_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_6_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_6_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_6_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_6_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_5_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_5_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_5_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_5_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_4_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_4_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_4_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_4_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_3_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_3_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_3_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_3_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_2_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_2_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_2_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_2_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_1_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_1_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_1_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_1_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_0_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UITM_CommunityGoal_TotalProgress_C::Get_Image_Goal_0_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_0_ColorAndOpacity_1");
		
		UITM_CommunityGoal_TotalProgress_C_Get_Image_Goal_0_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.IncreaseTotalGoalsProgressByGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            memberCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::IncreaseTotalGoalsProgressByGoal(class UCommunityGoal* Goal, float Value, int32_t memberCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.IncreaseTotalGoalsProgressByGoal");
		
		UITM_CommunityGoal_TotalProgress_C_IncreaseTotalGoalsProgressByGoal_Params params {};
		params.Goal = Goal;
		params.Value = Value;
		params.memberCount = memberCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_8_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_8_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_8_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_8_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_7_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_7_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_7_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_7_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_6_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_6_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_6_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_6_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_5_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_5_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_5_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_5_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_4_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_4_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_4_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_4_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_3_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_3_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_3_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_3_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_2_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_2_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_2_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_2_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_1_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_1_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_1_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_1_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_0_Percent_1
	 * 		Flags  -> ()
	 */
	float UITM_CommunityGoal_TotalProgress_C::ProgressBar_0_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_0_Percent_1");
		
		UITM_CommunityGoal_TotalProgress_C_ProgressBar_0_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ResetAnim
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::ResetAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ResetAnim");
		
		UITM_CommunityGoal_TotalProgress_C_ResetAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoal_TotalProgress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.PreConstruct");
		
		UITM_CommunityGoal_TotalProgress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Tick");
		
		UITM_CommunityGoal_TotalProgress_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              GoalID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      GoalValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_CommunityGoal_TotalProgress_C::SetGoals(TArray<class FString> GoalID, TArray<float> GoalValue, TArray<int32_t> Members)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoals");
		
		UITM_CommunityGoal_TotalProgress_C_SetGoals_Params params {};
		params.GoalID = GoalID;
		params.GoalValue = GoalValue;
		params.Members = Members;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoalsTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TierProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::SetGoalsTier(float TierProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoalsTier");
		
		UITM_CommunityGoal_TotalProgress_C_SetGoalsTier_Params params {};
		params.TierProgress = TierProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Construct");
		
		UITM_CommunityGoal_TotalProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ExecuteUbergraph_ITM_CommunityGoal_TotalProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::ExecuteUbergraph_ITM_CommunityGoal_TotalProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ExecuteUbergraph_ITM_CommunityGoal_TotalProgress");
		
		UITM_CommunityGoal_TotalProgress_C_ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverEnded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_TotalProgress_C::HoverEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverEnded__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_HoverEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_TotalProgress_C::HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverStarted__DelegateSignature");
		
		UITM_CommunityGoal_TotalProgress_C_HoverStarted__DelegateSignature_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoal_TotalProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoal_TotalProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C");
		return ptr;
	}

}


