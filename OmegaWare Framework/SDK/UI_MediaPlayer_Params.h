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
	 * Function UI_MediaPlayer.UI_MediaPlayer_C.UpdateState
	 */
	struct UUI_MediaPlayer_C_UpdateState_Params
	{	};

	/**
	 * Function UI_MediaPlayer.UI_MediaPlayer_C.Construct
	 */
	struct UUI_MediaPlayer_C_Construct_Params
	{	};

	/**
	 * Function UI_MediaPlayer.UI_MediaPlayer_C.ReceiveStateChanged
	 */
	struct UUI_MediaPlayer_C_ReceiveStateChanged_Params
	{
	public:
		EMediaPlayerState                                          InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MediaPlayer.UI_MediaPlayer_C.PreConstruct
	 */
	struct UUI_MediaPlayer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MediaPlayer.UI_MediaPlayer_C.ExecuteUbergraph_UI_MediaPlayer
	 */
	struct UUI_MediaPlayer_C_ExecuteUbergraph_UI_MediaPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
