#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	 */
	struct UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params
	{
	public:
		class UTimeSynthVolumeGroup*                               InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETimeSynthEventClipQuantization                            EventQuantization;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KRSS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimeSynthTimeDef                                   FadeTime;                                                // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
	 */
	struct UTimeSynthComponent_StopSoundsOnVolumeGroup_Params
	{
	public:
		class UTimeSynthVolumeGroup*                               InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETimeSynthEventClipQuantization                            EventQuantization;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
	 */
	struct UTimeSynthComponent_StopClipWithFadeOverride_Params
	{
	public:
		struct FTimeSynthClipHandle                                InClipHandle;                                            // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		ETimeSynthEventClipQuantization                            EventQuantization;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S9VR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimeSynthTimeDef                                   FadeTime;                                                // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.StopClip
	 */
	struct UTimeSynthComponent_StopClip_Params
	{
	public:
		struct FTimeSynthClipHandle                                InClipHandle;                                            // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		ETimeSynthEventClipQuantization                            EventQuantization;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetVolumeGroup
	 */
	struct UTimeSynthComponent_SetVolumeGroup_Params
	{
	public:
		class UTimeSynthVolumeGroup*                               InVolumeGroup;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeDb;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTimeSec;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetSeed
	 */
	struct UTimeSynthComponent_SetSeed_Params
	{
	public:
		int32_t                                                    InSeed;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
	 */
	struct UTimeSynthComponent_SetQuantizationSettings_Params
	{
	public:
		struct FTimeSynthQuantizationSettings                      InQuantizationSettings;                                  // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetFilterSettings
	 */
	struct UTimeSynthComponent_SetFilterSettings_Params
	{
	public:
		ETimeSynthFilter                                           Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GLTY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimeSynthFilterSettings                            InSettings;                                              // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetFilterEnabled
	 */
	struct UTimeSynthComponent_SetFilterEnabled_Params
	{
	public:
		ETimeSynthFilter                                           Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsEnabled;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetFFTSize
	 */
	struct UTimeSynthComponent_SetFFTSize_Params
	{
	public:
		ETimeSynthFFTSize                                          InFFTSize;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
	 */
	struct UTimeSynthComponent_SetEnvelopeFollowerSettings_Params
	{
	public:
		struct FTimeSynthEnvelopeFollowerSettings                  InSettings;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
	 */
	struct UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.SetBPM
	 */
	struct UTimeSynthComponent_SetBPM_Params
	{
	public:
		float                                                      BeatsPerMinute;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.ResetSeed
	 */
	struct UTimeSynthComponent_ResetSeed_Params
	{	};

	/**
	 * Function TimeSynth.TimeSynthComponent.PlayClip
	 */
	struct UTimeSynthComponent_PlayClip_Params
	{
	public:
		class UTimeSynthClip*                                      InClip;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTimeSynthVolumeGroup*                               InVolumeGroup;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimeSynthClipHandle                                ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.HasActiveClips
	 */
	struct UTimeSynthComponent_HasActiveClips_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.GetSpectralData
	 */
	struct UTimeSynthComponent_GetSpectralData_Params
	{
	public:
		TArray<struct FTimeSynthSpectralData>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
	 */
	struct UTimeSynthComponent_GetMaxActiveClipLimit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
	 */
	struct UTimeSynthComponent_GetEnvelopeFollowerValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.GetBPM
	 */
	struct UTimeSynthComponent_GetBPM_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
	 */
	struct UTimeSynthComponent_AddQuantizationEventDelegate_Params
	{
	public:
		ETimeSynthEventQuantization                                QuantizationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D32H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnQuantizationEvent;                                     // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
