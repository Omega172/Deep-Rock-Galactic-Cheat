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
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            PreviewShout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::SetPreview(class UDialogDataAsset* PreviewShout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview");
		
		UMissionControl_MainDialogue_C_SetPreview_Params params {};
		params.PreviewShout = PreviewShout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset");
		
		UMissionControl_MainDialogue_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionControl_MainDialogue_C::SetProgress(float Progress, bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress");
		
		UMissionControl_MainDialogue_C_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::TickRunningText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText");
		
		UMissionControl_MainDialogue_C_TickRunningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::StopRunningText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText");
		
		UMissionControl_MainDialogue_C_StopRunningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDialogStruct                               Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             AudioComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::SpeakEntryManually(const struct FDialogStruct& Entry, float* Duration, class UAudioComponent** AudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually");
		
		UMissionControl_MainDialogue_C_SpeakEntryManually_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
		if (AudioComponent != nullptr)
			*AudioComponent = params.AudioComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            MissionShout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             AudioComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::SpeakManually(class UDialogDataAsset* MissionShout, float* Duration, class UAudioComponent** AudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually");
		
		UMissionControl_MainDialogue_C_SpeakManually_Params params {};
		params.MissionShout = MissionShout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
		if (AudioComponent != nullptr)
			*AudioComponent = params.AudioComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::StartRunningText(const class FText& Text, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text");
		
		UMissionControl_MainDialogue_C_StartRunningText_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::OnMissionShout(const class FText& Text, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout");
		
		UMissionControl_MainDialogue_C_OnMissionShout_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct");
		
		UMissionControl_MainDialogue_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionControl_MainDialogue_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct");
		
		UMissionControl_MainDialogue_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::OnMissionShoutEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd");
		
		UMissionControl_MainDialogue_C_OnMissionShoutEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.HideMissionShout
	 * 		Flags  -> ()
	 */
	void UMissionControl_MainDialogue_C::HideMissionShout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.HideMissionShout");
		
		UMissionControl_MainDialogue_C_HideMissionShout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_MainDialogue_C::ExecuteUbergraph_MissionControl_MainDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue");
		
		UMissionControl_MainDialogue_C_ExecuteUbergraph_MissionControl_MainDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionControl_MainDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionControl_MainDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionControl_MainDialogue.MissionControl_MainDialogue_C");
		return ptr;
	}

}


