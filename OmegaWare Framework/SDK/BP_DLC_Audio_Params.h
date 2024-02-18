#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.Fadein__FinishedFunc
	 */
	struct ABP_DLC_Audio_C_Fadein__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.Fadein__UpdateFunc
	 */
	struct ABP_DLC_Audio_C_Fadein__UpdateFunc_Params
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
	 * Function BP_DLC_Audio.BP_DLC_Audio_C.ExecuteUbergraph_BP_DLC_Audio
	 */
	struct ABP_DLC_Audio_C_ExecuteUbergraph_BP_DLC_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEIE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
