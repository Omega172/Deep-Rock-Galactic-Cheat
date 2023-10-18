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
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::HandleCommunityGoalContentstate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state");
		
		UConsole_DiscordScreen_C_HandleCommunityGoalContentstate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::UpdateContentSwitcherContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content");
		
		UConsole_DiscordScreen_C_UpdateContentSwitcherContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DSMUTier                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::MinersUnionTier(float* DSMUTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier");
		
		UConsole_DiscordScreen_C_MinersUnionTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DSMUTier != nullptr)
			*DSMUTier = params.DSMUTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Goals                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Values                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UConsole_DiscordScreen_C::SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int32_t>* Members)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals");
		
		UConsole_DiscordScreen_C_SetGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goals != nullptr)
			*Goals = params.Goals;
		if (Values != nullptr)
			*Values = params.Values;
		if (Members != nullptr)
			*Members = params.Members;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::StopAllLogos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos");
		
		UConsole_DiscordScreen_C_StopAllLogos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::FactionLogosOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn");
		
		UConsole_DiscordScreen_C_FactionLogosOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Usable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::SetUsable(bool Usable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable");
		
		UConsole_DiscordScreen_C_SetUsable_Params params {};
		params.Usable = Usable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Appear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::SetScreen(bool Appear, bool force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen");
		
		UConsole_DiscordScreen_C_SetScreen_Params params {};
		params.Appear = Appear;
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::LogoOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn");
		
		UConsole_DiscordScreen_C_LogoOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::CreditsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn");
		
		UConsole_DiscordScreen_C_CreditsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::ClearTextLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels");
		
		UConsole_DiscordScreen_C_ClearTextLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LoadingTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::StartLoad(float LoadingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad");
		
		UConsole_DiscordScreen_C_StartLoad_Params params {};
		params.LoadingTime = LoadingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI");
		
		UConsole_DiscordScreen_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Construct");
		
		UConsole_DiscordScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Tick");
		
		UConsole_DiscordScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDiscordServerData                          discordServerCount                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::UpdateUI(const struct FDiscordServerData& discordServerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI");
		
		UConsole_DiscordScreen_C_UpdateUI_Params params {};
		params.discordServerCount = discordServerCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInServer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::UserInServer(bool isInServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer");
		
		UConsole_DiscordScreen_C_UserInServer_Params params {};
		params.isInServer = isInServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::DoRunningText(const class FText& Text, int32_t Index, class UTextBlock* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text");
		
		UConsole_DiscordScreen_C_DoRunningText_Params params {};
		params.Text = Text;
		params.Index = Index;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct");
		
		UConsole_DiscordScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Init
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Init");
		
		UConsole_DiscordScreen_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.Stop
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Stop");
		
		UConsole_DiscordScreen_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::TimedUserRequest(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest");
		
		UConsole_DiscordScreen_C_TimedUserRequest_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::RequestUserInByTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime");
		
		UConsole_DiscordScreen_C_RequestUserInByTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Goals                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Values                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UConsole_DiscordScreen_C::OnFactionsDataRecievedEvent(TArray<class FString> Goals, TArray<float> Values, TArray<int32_t> Members)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent");
		
		UConsole_DiscordScreen_C_OnFactionsDataRecievedEvent_Params params {};
		params.Goals = Goals;
		params.Values = Values;
		params.Members = Members;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               stateReceived                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordScreen_C::OnCGSData(bool stateReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData");
		
		UConsole_DiscordScreen_C_OnCGSData_Params params {};
		params.stateReceived = stateReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::OnCheckUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI");
		
		UConsole_DiscordScreen_C_OnCheckUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::OnGoalInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized");
		
		UConsole_DiscordScreen_C_OnGoalInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordScreen_C::ExecuteUbergraph_Console_DiscordScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen");
		
		UConsole_DiscordScreen_C_ExecuteUbergraph_Console_DiscordScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordScreen_C::ScreenChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature");
		
		UConsole_DiscordScreen_C_ScreenChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsole_DiscordScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsole_DiscordScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Console_DiscordScreen.Console_DiscordScreen_C");
		return ptr;
	}

}


