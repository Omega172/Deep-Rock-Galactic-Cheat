#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__FinishedFunc
	 */
	struct ABP_DLC_Audio_C_FadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__UpdateFunc
	 */
	struct ABP_DLC_Audio_C_FadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.BeginAudio
	 */
	struct ABP_DLC_Audio_C_BeginAudio_Params
	{
	public:
		class UMediaPlayer*                                        InMediaPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.EndAudio
	 */
	struct ABP_DLC_Audio_C_EndAudio_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.ReceiveBeginPlay
	 */
	struct ABP_DLC_Audio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaOpened_Event_1
	 */
	struct ABP_DLC_Audio_C_OnMediaOpened_Event_1_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.OnPlaybackResumed_Event_1
	 */
	struct ABP_DLC_Audio_C_OnPlaybackResumed_Event_1_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaClosed_Event_1
	 */
	struct ABP_DLC_Audio_C_OnMediaClosed_Event_1_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.ExecuteUbergraph_BP_DLC_Audio
	 */
	struct ABP_DLC_Audio_C_ExecuteUbergraph_BP_DLC_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
