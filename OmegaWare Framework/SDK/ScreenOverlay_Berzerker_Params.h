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
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
	 */
	struct UScreenOverlay_Berzerker_C_PlayFade_Params
	{
	public:
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
	 */
	struct UScreenOverlay_Berzerker_C_OnAnimFadingFinished_Params
	{	};

	/**
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
	 */
	struct UScreenOverlay_Berzerker_C_ReceiveBeginOverlay_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InTint;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
	 */
	struct UScreenOverlay_Berzerker_C_Construct_Params
	{	};

	/**
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
	 */
	struct UScreenOverlay_Berzerker_C_ReceiveEndOverlay_Params
	{	};

	/**
	 * Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
	 */
	struct UScreenOverlay_Berzerker_C_ExecuteUbergraph_ScreenOverlay_Berzerker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
