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
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct
	 */
	struct UScreenOverlay_GenericAffliction_C_Construct_Params
	{	};

	/**
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay
	 */
	struct UScreenOverlay_GenericAffliction_C_ReceiveBeginOverlay_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InTint;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay
	 */
	struct UScreenOverlay_GenericAffliction_C_ReceiveEndOverlay_Params
	{	};

	/**
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade
	 */
	struct UScreenOverlay_GenericAffliction_C_PlayFade_Params
	{
	public:
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished
	 */
	struct UScreenOverlay_GenericAffliction_C_OnAnimFadingFinished_Params
	{	};

	/**
	 * Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction
	 */
	struct UScreenOverlay_GenericAffliction_C_ExecuteUbergraph_ScreenOverlay_GenericAffliction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGAF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
