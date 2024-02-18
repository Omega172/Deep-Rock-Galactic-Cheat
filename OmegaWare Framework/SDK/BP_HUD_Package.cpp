/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function BP_HUD.BP_HUD_C.GetQuickCheatMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               QuickCheatMenu                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::GetQuickCheatMenu(class UWindowWidget** QuickCheatMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.GetQuickCheatMenu");
		
		ABP_HUD_C_GetQuickCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuickCheatMenu != nullptr)
			*QuickCheatMenu = params.QuickCheatMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.GetCheatMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               CheatMenu                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::GetCheatMenu(class UWindowWidget** CheatMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.GetCheatMenu");
		
		ABP_HUD_C_GetCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheatMenu != nullptr)
			*CheatMenu = params.CheatMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.GetHUDWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDMainHUDWidget*                           HudWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::GetHUDWidget(class UFSDMainHUDWidget** HudWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.GetHUDWidget");
		
		ABP_HUD_C_GetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HudWidget != nullptr)
			*HudWidget = params.HudWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.GetEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               EscMenu                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::GetEscapeMenu(class UWindowWidget** EscMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.GetEscapeMenu");
		
		ABP_HUD_C_GetEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EscMenu != nullptr)
			*EscMenu = params.EscMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.PopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     eventWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_C::PopEvent(class UWidget* eventWidget, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PopEvent");
		
		ABP_HUD_C_PopEvent_Params params {};
		params.eventWidget = eventWidget;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.CreateEscMenu
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::CreateEscMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateEscMenu");
		
		ABP_HUD_C_CreateEscMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.IsInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_C::IsInitialized(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.IsInitialized");
		
		ABP_HUD_C_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::CreateQuickCheatsIfNotCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated");
		
		ABP_HUD_C_CreateQuickCheatsIfNotCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.PushEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     eventWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_C::PushEvent(class UWidget* eventWidget, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PushEvent");
		
		ABP_HUD_C_PushEvent_Params params {};
		params.eventWidget = eventWidget;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::CreateCheatsIfNotCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated");
		
		ABP_HUD_C_CreateCheatsIfNotCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::RemoveAllWidgetsFromParents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents");
		
		ABP_HUD_C_RemoveAllWidgetsFromParents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::AddAllWidgetToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport");
		
		ABP_HUD_C_AddAllWidgetToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.Add Widget Class
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::AddWidgetClass(class UClass* Class, class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Add Widget Class");
		
		ABP_HUD_C_AddWidgetClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.PlayerSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::PlayerSpawned(class APlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PlayerSpawned");
		
		ABP_HUD_C_PlayerSpawned_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.RadarPointAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadarPointComponent*                        radarPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::RadarPointAdded(class URadarPointComponent* radarPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RadarPointAdded");
		
		ABP_HUD_C_RadarPointAdded_Params params {};
		params.radarPoint = radarPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::HandleSeamlessTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HandleSeamlessTravel");
		
		ABP_HUD_C_HandleSeamlessTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnVisibilityChanged
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnVisibilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnVisibilityChanged");
		
		ABP_HUD_C_OnVisibilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDestroyed");
		
		ABP_HUD_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.CameraDroneSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraDrone*                          Drone                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::CameraDroneSpawned(class APlayerCameraDrone* Drone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CameraDroneSpawned");
		
		ABP_HUD_C_CameraDroneSpawned_Params params {};
		params.Drone = Drone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnEndLevelReceived_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event");
		
		ABP_HUD_C_OnEndLevelReceived_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnShowMainMenu
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnShowMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnShowMainMenu");
		
		ABP_HUD_C_OnShowMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.LoadEscapeMenu
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::LoadEscapeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.LoadEscapeMenu");
		
		ABP_HUD_C_LoadEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.MenuLoaded
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::MenuLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.MenuLoaded");
		
		ABP_HUD_C_MenuLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.On HUD Initialized
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnHUDInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.On HUD Initialized");
		
		ABP_HUD_C_OnHUDInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::QuickCheatMenuRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest");
		
		ABP_HUD_C_QuickCheatMenuRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.CheatMenuRequest
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::CheatMenuRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CheatMenuRequest");
		
		ABP_HUD_C_CheatMenuRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::ExecuteUbergraph_BP_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD");
		
		ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD.BP_HUD_C");
		return ptr;
	}

}


