/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SpaceRig_Notification_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct");
		
		UHUD_SpaceRig_Notification_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_Notification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.Construct");
		
		UHUD_SpaceRig_Notification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_Notification_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnIntroFinished");
		
		UHUD_SpaceRig_Notification_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnOutroFinished
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_Notification_C::OnOutroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnOutroFinished");
		
		UHUD_SpaceRig_Notification_C_OnOutroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SpaceRig_Notification_C::ExecuteUbergraph_HUD_SpaceRig_Notification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification");
		
		UHUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SpaceRig_Notification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SpaceRig_Notification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C");
		return ptr;
	}

}


