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
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetEntryWidgetClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      OutWidgetClass                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClaimableRewards_View_C::GetEntryWidgetClass(class UClass** OutWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetEntryWidgetClass");
		
		UUI_ClaimableRewards_View_C_GetEntryWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidgetClass != nullptr)
			*OutWidgetClass = params.OutWidgetClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHorizontalBox*                              EntryBox                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClaimableRewards_View_C::GetLine(class UHorizontalBox** EntryBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine");
		
		UUI_ClaimableRewards_View_C_GetLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryBox != nullptr)
			*EntryBox = params.EntryBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClaimableRewardView                        InViewData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UUI_ClaimableRewards_View_C::SetupView(const struct FClaimableRewardView& InViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView");
		
		UUI_ClaimableRewards_View_C_SetupView_Params params {};
		params.InViewData = InViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::TryFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish");
		
		UUI_ClaimableRewards_View_C_TryFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::StopAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio");
		
		UUI_ClaimableRewards_View_C_StopAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::OnAudioFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event");
		
		UUI_ClaimableRewards_View_C_OnAudioFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::StartMissionControlSpeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak");
		
		UUI_ClaimableRewards_View_C_StartMissionControlSpeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::ShowBlur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur");
		
		UUI_ClaimableRewards_View_C_ShowBlur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::ShowMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor");
		
		UUI_ClaimableRewards_View_C_ShowMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::MoveInRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards");
		
		UUI_ClaimableRewards_View_C_MoveInRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClaimableRewardEntryWidget*                 InEntryWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClaimableRewards_View_C::OnRewardClaimed(class UClaimableRewardEntryWidget* InEntryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed");
		
		UUI_ClaimableRewards_View_C_OnRewardClaimed_Params params {};
		params.InEntryWidget = InEntryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::ReceiveEndFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow");
		
		UUI_ClaimableRewards_View_C_ReceiveEndFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::ReceiveDataChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged");
		
		UUI_ClaimableRewards_View_C_ReceiveDataChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::ReceiveBeginFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow");
		
		UUI_ClaimableRewards_View_C_ReceiveBeginFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClaimableRewards_View_C::ExecuteUbergraph_UI_ClaimableRewards_View(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View");
		
		UUI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::OnRewardsAndMissionControlFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature");
		
		UUI_ClaimableRewards_View_C_OnRewardsAndMissionControlFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::OnRewardsClaimed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature");
		
		UUI_ClaimableRewards_View_C_OnRewardsClaimed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ClaimableRewards_View_C::OnMissionControlFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature");
		
		UUI_ClaimableRewards_View_C_OnMissionControlFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             MissionControlAudio                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClaimableRewards_View_C::OnMissionControlStarted__DelegateSignature(class UAudioComponent* MissionControlAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature");
		
		UUI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature_Params params {};
		params.MissionControlAudio = MissionControlAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ClaimableRewards_View_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ClaimableRewards_View_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ClaimableRewards_View.UI_ClaimableRewards_View_C");
		return ptr;
	}

}


