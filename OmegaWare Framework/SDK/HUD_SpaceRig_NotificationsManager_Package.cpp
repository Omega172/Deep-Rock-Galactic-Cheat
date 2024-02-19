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
	 * 		Name   -> Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_NotificationsManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct");
		
		UHUD_SpaceRig_NotificationsManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpaceRigNotification                       Notification                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_SpaceRig_NotificationsManager_C::CreateNotificationWidget(const struct FSpaceRigNotification& Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget");
		
		UHUD_SpaceRig_NotificationsManager_C_CreateNotificationWidget_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_NotificationsManager_C::CheckCraftingNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification");
		
		UHUD_SpaceRig_NotificationsManager_C_CheckCraftingNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewSpacerigNotifications
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_NotificationsManager_C::CheckForNewSpacerigNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewSpacerigNotifications");
		
		UHUD_SpaceRig_NotificationsManager_C_CheckForNewSpacerigNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SpaceRig_NotificationsManager_C::ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager");
		
		UHUD_SpaceRig_NotificationsManager_C_ExecuteUbergraph_HUD_SpaceRig_NotificationsManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SpaceRig_NotificationsManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SpaceRig_NotificationsManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C");
		return ptr;
	}

}


