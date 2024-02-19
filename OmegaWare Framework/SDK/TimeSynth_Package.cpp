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
	 * 		Name   -> PredefinedFunction UTimeSynthVolumeGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynthVolumeGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeSynth.TimeSynthVolumeGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynthClip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynthClip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeSynth.TimeSynthClip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTimeSynthVolumeGroup*                       InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETimeSynthEventClipQuantization                    EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimeSynthTimeDef                           FadeTime                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride");
		
		UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.EventQuantization = EventQuantization;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTimeSynthVolumeGroup*                       InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETimeSynthEventClipQuantization                    EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup");
		
		UTimeSynthComponent_StopSoundsOnVolumeGroup_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.EventQuantization = EventQuantization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimeSynthClipHandle                        InClipHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETimeSynthEventClipQuantization                    EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimeSynthTimeDef                           FadeTime                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride");
		
		UTimeSynthComponent_StopClipWithFadeOverride_Params params {};
		params.InClipHandle = InClipHandle;
		params.EventQuantization = EventQuantization;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.StopClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimeSynthClipHandle                        InClipHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETimeSynthEventClipQuantization                    EventQuantization                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopClip");
		
		UTimeSynthComponent_StopClip_Params params {};
		params.InClipHandle = InClipHandle;
		params.EventQuantization = EventQuantization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetVolumeGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTimeSynthVolumeGroup*                       InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeDb                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetVolumeGroup");
		
		UTimeSynthComponent_SetVolumeGroup_Params params {};
		params.InVolumeGroup = InVolumeGroup;
		params.VolumeDb = VolumeDb;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSeed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetSeed(int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetSeed");
		
		UTimeSynthComponent_SetSeed_Params params {};
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimeSynthQuantizationSettings              InQuantizationSettings                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetQuantizationSettings");
		
		UTimeSynthComponent_SetQuantizationSettings_Params params {};
		params.InQuantizationSettings = InQuantizationSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetFilterSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimeSynthFilter                                   Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimeSynthFilterSettings                    InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFilterSettings");
		
		UTimeSynthComponent_SetFilterSettings_Params params {};
		params.Filter = Filter;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetFilterEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimeSynthFilter                                   Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFilterEnabled");
		
		UTimeSynthComponent_SetFilterEnabled_Params params {};
		params.Filter = Filter;
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetFFTSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimeSynthFFTSize                                  InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetFFTSize(ETimeSynthFFTSize InFFTSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFFTSize");
		
		UTimeSynthComponent_SetFFTSize_Params params {};
		params.InFFTSize = InFFTSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimeSynthEnvelopeFollowerSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings");
		
		UTimeSynthComponent_SetEnvelopeFollowerSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled");
		
		UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.SetBPM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BeatsPerMinute                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::SetBPM(float BeatsPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetBPM");
		
		UTimeSynthComponent_SetBPM_Params params {};
		params.BeatsPerMinute = BeatsPerMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.ResetSeed
	 * 		Flags  -> ()
	 */
	void UTimeSynthComponent::ResetSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.ResetSeed");
		
		UTimeSynthComponent_ResetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.PlayClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTimeSynthClip*                              InClip                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTimeSynthVolumeGroup*                       InVolumeGroup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimeSynthClipHandle UTimeSynthComponent::PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.PlayClip");
		
		UTimeSynthComponent_PlayClip_Params params {};
		params.InClip = InClip;
		params.InVolumeGroup = InVolumeGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.HasActiveClips
	 * 		Flags  -> ()
	 */
	bool UTimeSynthComponent::HasActiveClips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.HasActiveClips");
		
		UTimeSynthComponent_HasActiveClips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.GetSpectralData
	 * 		Flags  -> ()
	 */
	TArray<struct FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetSpectralData");
		
		UTimeSynthComponent_GetSpectralData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
	 * 		Flags  -> ()
	 */
	int32_t UTimeSynthComponent::GetMaxActiveClipLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit");
		
		UTimeSynthComponent_GetMaxActiveClipLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
	 * 		Flags  -> ()
	 */
	float UTimeSynthComponent::GetEnvelopeFollowerValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue");
		
		UTimeSynthComponent_GetEnvelopeFollowerValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.GetBPM
	 * 		Flags  -> ()
	 */
	int32_t UTimeSynthComponent::GetBPM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetBPM");
		
		UTimeSynthComponent_GetBPM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimeSynthEventQuantization                        QuantizationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimeSynthComponent::AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const class FScriptDelegate& OnQuantizationEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate");
		
		UTimeSynthComponent_AddQuantizationEventDelegate_Params params {};
		params.QuantizationType = QuantizationType;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeSynth.TimeSynthComponent");
		return ptr;
	}

}


