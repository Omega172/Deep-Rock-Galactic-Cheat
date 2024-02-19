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
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoFactionToolTip
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::DoFactionToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoFactionToolTip");
		
		UITM_CommunityGoal_C_DoFactionToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ToolTipTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::DoToolTip(class UWidget* ToolTipTarget, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoToolTip");
		
		UITM_CommunityGoal_C_DoToolTip_Params params {};
		params.ToolTipTarget = ToolTipTarget;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateTitle
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::UpdateTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateTitle");
		
		UITM_CommunityGoal_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateIcon");
		
		UITM_CommunityGoal_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::SetFaction(class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetFaction");
		
		UITM_CommunityGoal_C_SetFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.ResetAnim
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::ResetAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.ResetAnim");
		
		UITM_CommunityGoal_C_ResetAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.Tick");
		
		UITM_CommunityGoal_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetCommunityGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              BronzeProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SilverProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GoldProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::SetCommunityGoal(const class FText& Goal, float BronzeProgress, float SilverProgress, float GoldProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetCommunityGoal");
		
		UITM_CommunityGoal_C_SetCommunityGoal_Params params {};
		params.Goal = Goal;
		params.BronzeProgress = BronzeProgress;
		params.SilverProgress = SilverProgress;
		params.GoldProgress = GoldProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.PreConstruct");
		
		UITM_CommunityGoal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GoalID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              GoalValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceRefresh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoal_C::SetGoal(const class FString& GoalID, float GoalValue, int32_t Members, bool ForceRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetGoal");
		
		UITM_CommunityGoal_C_SetGoal_Params params {};
		params.GoalID = GoalID;
		params.GoalValue = GoalValue;
		params.Members = Members;
		params.ForceRefresh = ForceRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.CheckFaction
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::CheckFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.CheckFaction");
		
		UITM_CommunityGoal_C_CheckFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.ExecuteUbergraph_ITM_CommunityGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::ExecuteUbergraph_ITM_CommunityGoal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.ExecuteUbergraph_ITM_CommunityGoal");
		
		UITM_CommunityGoal_C_ExecuteUbergraph_ITM_CommunityGoal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverEnded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoal_C::HoverEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverEnded__DelegateSignature");
		
		UITM_CommunityGoal_C_HoverEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoal_C::HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverStarted__DelegateSignature");
		
		UITM_CommunityGoal_C_HoverStarted__DelegateSignature_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoal.ITM_CommunityGoal_C");
		return ptr;
	}

}


