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
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_MENU_ServerList_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnKeyDown");
		
		U_MENU_ServerList_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.GetWidgetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutLocalPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::GetWidgetMousePosition(class UWidget* InWidget, struct FVector2D* OutLocalPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetWidgetMousePosition");
		
		U_MENU_ServerList_C_GetWidgetMousePosition_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocalPos != nullptr)
			*OutLocalPos = params.OutLocalPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.GetHoveredEntryInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_ServerList_Entry_C*                     EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WidgetMouseOffset                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ServerID                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::GetHoveredEntryInfo(class UITM_ServerList_Entry_C** EntryWidget, float* WidgetMouseOffset, class FString* ServerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetHoveredEntryInfo");
		
		U_MENU_ServerList_C_GetHoveredEntryInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryWidget != nullptr)
			*EntryWidget = params.EntryWidget;
		if (WidgetMouseOffset != nullptr)
			*WidgetMouseOffset = params.WidgetMouseOffset;
		if (ServerID != nullptr)
			*ServerID = params.ServerID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.Disable Progression Mods and Join
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void U_MENU_ServerList_C::DisableProgressionModsandJoin(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.Disable Progression Mods and Join");
		
		U_MENU_ServerList_C_DisableProgressionModsandJoin_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.UpdateFromGametype
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::UpdateFromGametype()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.UpdateFromGametype");
		
		U_MENU_ServerList_C_UpdateFromGametype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.UpdateFromWorkEnvironment
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::UpdateFromWorkEnvironment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.UpdateFromWorkEnvironment");
		
		U_MENU_ServerList_C_UpdateFromWorkEnvironment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromSearchField
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::UpdateSearchOptionsFromSearchField()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromSearchField");
		
		U_MENU_ServerList_C_UpdateSearchOptionsFromSearchField_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromRestrictedMission
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::UpdateSearchOptionsFromRestrictedMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromRestrictedMission");
		
		U_MENU_ServerList_C_UpdateSearchOptionsFromRestrictedMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.GetActiveDifficulties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UDifficultySetting*>                  Array                                                      (Parm, OutParm)
	 */
	void U_MENU_ServerList_C::GetActiveDifficulties(TArray<class UDifficultySetting*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetActiveDifficulties");
		
		U_MENU_ServerList_C_GetActiveDifficulties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SetSortFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EServerSortOrder                                   NewSortingMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::SetSortFunction(EServerSortOrder NewSortingMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSortFunction");
		
		U_MENU_ServerList_C_SetSortFunction_Params params {};
		params.NewSortingMethod = NewSortingMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      OutWidths                                                  (Parm, OutParm)
	 */
	void U_MENU_ServerList_C::GetColumnWidths(TArray<float>* OutWidths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths");
		
		U_MENU_ServerList_C_GetColumnWidths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidths != nullptr)
			*OutWidths = params.OutWidths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::SetSelectedServerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType");
		
		U_MENU_ServerList_C_SetSelectedServerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SetServerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamServerJoinStatus                             ServerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::SetServerType(ESteamServerJoinStatus ServerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetServerType");
		
		U_MENU_ServerList_C_SetServerType_Params params {};
		params.ServerType = ServerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamSearchRegion                                 Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::SetSearchDistance(ESteamSearchRegion Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance");
		
		U_MENU_ServerList_C_SetSearchDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::CacheUnusedEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries");
		
		U_MENU_ServerList_C_CacheUnusedEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry
	 * 		Flags  -> ()
	 */
	class UITM_ServerList_Entry_C* U_MENU_ServerList_C::GetCachedEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry");
		
		U_MENU_ServerList_C_GetCachedEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      OutServerID                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UITM_ServerList_Entry_C*                     OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::AddOrUpdateEntry(const struct FBlueprintSessionResult& Result, class FString* OutServerID, class UITM_ServerList_Entry_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry");
		
		U_MENU_ServerList_C_AddOrUpdateEntry_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutServerID != nullptr)
			*OutServerID = params.OutServerID;
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.ShowNoServersFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::ShowNoServersFound(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ShowNoServersFound");
		
		U_MENU_ServerList_C_ShowNoServersFound_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::SetSelectedSearchDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance");
		
		U_MENU_ServerList_C_SetSelectedSearchDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_MENU_ServerList_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp");
		
		U_MENU_ServerList_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             servers                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void U_MENU_ServerList_C::PopulateServerList(TArray<struct FBlueprintSessionResult>* servers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList");
		
		U_MENU_ServerList_C_PopulateServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (servers != nullptr)
			*servers = params.servers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::CreateSubMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus");
		
		U_MENU_ServerList_C_CreateSubMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A");
		
		U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A");
		
		U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F");
		
		U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F");
		
		U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_0624A35A4162400123C5FFB790E37726()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726");
		
		U_MENU_ServerList_C_OnFailure_0624A35A4162400123C5FFB790E37726_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_0624A35A4162400123C5FFB790E37726()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726");
		
		U_MENU_ServerList_C_OnSuccess_0624A35A4162400123C5FFB790E37726_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_2F44709544BBB762D8D1EDB23AB84A38()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38");
		
		U_MENU_ServerList_C_OnFailure_2F44709544BBB762D8D1EDB23AB84A38_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_2F44709544BBB762D8D1EDB23AB84A38()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38");
		
		U_MENU_ServerList_C_OnSuccess_2F44709544BBB762D8D1EDB23AB84A38_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471");
		
		U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471");
		
		U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE");
		
		U_MENU_ServerList_C_OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE");
		
		U_MENU_ServerList_C_OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.Construct
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.Construct");
		
		U_MENU_ServerList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.JoinServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void U_MENU_ServerList_C::JoinServer(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServer");
		
		U_MENU_ServerList_C_JoinServer_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void U_MENU_ServerList_C::JoinServerWithoutPassword(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword");
		
		U_MENU_ServerList_C_JoinServerWithoutPassword_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::JoinServerWithPassword(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword");
		
		U_MENU_ServerList_C_JoinServerWithPassword_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.Back Pressed
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.Back Pressed");
		
		U_MENU_ServerList_C_BackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::ServelistChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged");
		
		U_MENU_ServerList_C_ServelistChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::RestrictToMission(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission");
		
		U_MENU_ServerList_C_RestrictToMission_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::ClearRestricted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted");
		
		U_MENU_ServerList_C_ClearRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.PreConstruct");
		
		U_MENU_ServerList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnJoiningSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession");
		
		U_MENU_ServerList_C_OnJoiningSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnShown
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnShown");
		
		U_MENU_ServerList_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::RefreshServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList");
		
		U_MENU_ServerList_C_RefreshServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnClosed
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnClosed");
		
		U_MENU_ServerList_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.RefreshFriendslist
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::RefreshFriendslist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.RefreshFriendslist");
		
		U_MENU_ServerList_C_RefreshFriendslist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.FriendsListUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ErrorStr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::FriendsListUpdated(bool bWasSuccessful, const class FString& ErrorStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.FriendsListUpdated");
		
		U_MENU_ServerList_C_FriendsListUpdated_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorStr = ErrorStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.FriendServerlistShouldBeUpdated
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::FriendServerlistShouldBeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.FriendServerlistShouldBeUpdated");
		
		U_MENU_ServerList_C_FriendServerlistShouldBeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.CreateFriendslist
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::CreateFriendslist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.CreateFriendslist");
		
		U_MENU_ServerList_C_CreateFriendslist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnIsUGCAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                CheckedPlayerState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintableUserPrivileges                       CheckedPrivilege                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintablePrivilegeResults                     PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::OnIsUGCAllowed(class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnIsUGCAllowed");
		
		U_MENU_ServerList_C_OnIsUGCAllowed_Params params {};
		params.CheckedPlayerState = CheckedPlayerState;
		params.CheckedPrivilege = CheckedPrivilege;
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.JoinModdedServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::JoinModdedServer(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinModdedServer");
		
		U_MENU_ServerList_C_JoinModdedServer_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.OnJoiningFailed
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::OnJoiningFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnJoiningFailed");
		
		U_MENU_ServerList_C_OnJoiningFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature");
		
		U_MENU_ServerList_C_BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.ModdedSaveLoaded
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::ModdedSaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ModdedSaveLoaded");
		
		U_MENU_ServerList_C_ModdedSaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.JoiningBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_ServerList_C::JoiningBlocked(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoiningBlocked");
		
		U_MENU_ServerList_C_JoiningBlocked_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.SavegameSwitchCancelled
	 * 		Flags  -> ()
	 */
	void U_MENU_ServerList_C::SavegameSwitchCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SavegameSwitchCancelled");
		
		U_MENU_ServerList_C_SavegameSwitchCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_ServerList_C::ExecuteUbergraph__MENU_ServerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList");
		
		U_MENU_ServerList_C_ExecuteUbergraph__MENU_ServerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U_MENU_ServerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U_MENU_ServerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _MENU_ServerList._MENU_ServerList_C");
		return ptr;
	}

}


