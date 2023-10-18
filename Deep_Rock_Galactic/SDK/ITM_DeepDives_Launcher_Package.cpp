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
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnMovieLoaded
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::OnMovieLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnMovieLoaded");
		
		UITM_DeepDives_Launcher_C_OnMovieLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::SetBestTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime");
		
		UITM_DeepDives_Launcher_C_SetBestTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::SetPersonalBest(int32_t TotalSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest");
		
		UITM_DeepDives_Launcher_C_SetPersonalBest_Params params {};
		params.TotalSeconds = TotalSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   InDeepDive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::UpdateBiomeQuote(class UDeepDive* InDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote");
		
		UITM_DeepDives_Launcher_C_UpdateBiomeQuote_Params params {};
		params.InDeepDive = InDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DisabledExplanation                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_Launcher_C::SetButtonsEnabled(bool bInIsEnabled, const class FText& DisabledExplanation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled");
		
		UITM_DeepDives_Launcher_C_SetButtonsEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		params.DisabledExplanation = DisabledExplanation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh");
		
		UITM_DeepDives_Launcher_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive
	 * 		Flags  -> ()
	 */
	class UDeepDive* UITM_DeepDives_Launcher_C::GetDeepDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive");
		
		UITM_DeepDives_Launcher_C_GetDeepDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                InMovie                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::SetMovie(class UMediaSource* InMovie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie");
		
		UITM_DeepDives_Launcher_C_SetMovie_Params params {};
		params.InMovie = InMovie;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Launcher_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct");
		
		UITM_DeepDives_Launcher_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct");
		
		UITM_DeepDives_Launcher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Launcher_C::SetHovered(bool InHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered");
		
		UITM_DeepDives_Launcher_C_SetHovered_Params params {};
		params.InHovered = InHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UITM_DeepDives_Launcher_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnFocusLost");
		
		UITM_DeepDives_Launcher_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::ExecuteUbergraph_ITM_DeepDives_Launcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher");
		
		UITM_DeepDives_Launcher_C_ExecuteUbergraph_ITM_DeepDives_Launcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnRefresh__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Launcher_C::OnRefresh__DelegateSignature(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnRefresh__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_OnRefresh__DelegateSignature_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EliteDeepDive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Launcher_C::OnJoinMission__DelegateSignature(bool EliteDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_OnJoinMission__DelegateSignature_Params params {};
		params.EliteDeepDive = EliteDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   DeepDive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Launcher_C::OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature");
		
		UITM_DeepDives_Launcher_C_OnStartMission__DelegateSignature_Params params {};
		params.DeepDive = DeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDives_Launcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDives_Launcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C");
		return ptr;
	}

}


