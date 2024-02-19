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
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Milestone_Notification_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct");
		
		UHUD_Milestone_Notification_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
	 * 		Flags  -> ()
	 */
	void UHUD_Milestone_Notification_C::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget");
		
		UHUD_Milestone_Notification_C_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Milestone_Notification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct");
		
		UHUD_Milestone_Notification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMilestoneAsset*                             Milestone                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReachedTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Milestone_Notification_C::OnMilestoneReached_Event(class UMilestoneAsset* Milestone, int32_t ReachedTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event");
		
		UHUD_Milestone_Notification_C_OnMilestoneReached_Event_Params params {};
		params.Milestone = Milestone;
		params.ReachedTier = ReachedTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Milestone_Notification_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished");
		
		UHUD_Milestone_Notification_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Milestone_Notification_C::OnOutroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished");
		
		UHUD_Milestone_Notification_C_OnOutroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Milestone_Notification_C::ExecuteUbergraph_HUD_Milestone_Notification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification");
		
		UHUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Milestone_Notification_C::OnMilestoneReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature");
		
		UHUD_Milestone_Notification_C_OnMilestoneReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Milestone_Notification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Milestone_Notification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Milestone_Notification.HUD_Milestone_Notification_C");
		return ptr;
	}

}


