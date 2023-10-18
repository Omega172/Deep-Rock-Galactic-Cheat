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
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWND_CharacterRetirement_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnKeyUp");
		
		UWND_CharacterRetirement_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             InAudioComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_CharacterRetirement_C::StopAudio(class UAudioComponent* InAudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio");
		
		UWND_CharacterRetirement_C_StopAudio_Params params {};
		params.InAudioComponent = InAudioComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             InAudioComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWND_CharacterRetirement_C::IsAudioFinished(class UAudioComponent* InAudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished");
		
		UWND_CharacterRetirement_C_IsAudioFinished_Params params {};
		params.InAudioComponent = InAudioComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::BuildCostList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList");
		
		UWND_CharacterRetirement_C_BuildCostList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnFailure_8D7CEF664ECE349247F068951073F0FE
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::OnFailure_8D7CEF664ECE349247F068951073F0FE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnFailure_8D7CEF664ECE349247F068951073F0FE");
		
		UWND_CharacterRetirement_C_OnFailure_8D7CEF664ECE349247F068951073F0FE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnSuccess_8D7CEF664ECE349247F068951073F0FE
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::OnSuccess_8D7CEF664ECE349247F068951073F0FE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnSuccess_8D7CEF664ECE349247F068951073F0FE");
		
		UWND_CharacterRetirement_C_OnSuccess_8D7CEF664ECE349247F068951073F0FE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWND_CharacterRetirement_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_CharacterRetirement_C::SetData(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData");
		
		UWND_CharacterRetirement_C_SetData_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWND_CharacterRetirement_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_CharacterRetirement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct");
		
		UWND_CharacterRetirement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown");
		
		UWND_CharacterRetirement_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::HideMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor");
		
		UWND_CharacterRetirement_C_HideMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature");
		
		UWND_CharacterRetirement_C_BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::Retire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire");
		
		UWND_CharacterRetirement_C_Retire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_CharacterRetirement_C::FadeInBackground(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground");
		
		UWND_CharacterRetirement_C_FadeInBackground_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::StopCharacterAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio");
		
		UWND_CharacterRetirement_C_StopCharacterAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed");
		
		UWND_CharacterRetirement_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWND_CharacterRetirement_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.AfterMissionControlSpeak
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::AfterMissionControlSpeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.AfterMissionControlSpeak");
		
		UWND_CharacterRetirement_C_AfterMissionControlSpeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.TestRetire
	 * 		Flags  -> ()
	 */
	void UWND_CharacterRetirement_C::TestRetire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.TestRetire");
		
		UWND_CharacterRetirement_C_TestRetire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Window                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_CharacterRetirement_C::OnRewardsClosed(class UWindowWidget* Window)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed");
		
		UWND_CharacterRetirement_C_OnRewardsClosed_Params params {};
		params.Window = Window;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_CharacterRetirement_C::ExecuteUbergraph_WND_CharacterRetirement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement");
		
		UWND_CharacterRetirement_C_ExecuteUbergraph_WND_CharacterRetirement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_CharacterRetirement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_CharacterRetirement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_CharacterRetirement.WND_CharacterRetirement_C");
		return ptr;
	}

}


