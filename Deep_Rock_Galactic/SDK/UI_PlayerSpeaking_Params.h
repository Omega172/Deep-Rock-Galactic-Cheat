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
	 * Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.PreConstruct
	 */
	struct UUI_PlayerSpeaking_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnTalkingChanged
	 */
	struct UUI_PlayerSpeaking_C_OnTalkingChanged_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.SetPlayerState
	 */
	struct UUI_PlayerSpeaking_C_SetPlayerState_Params
	{
	public:
		class AFSDPlayerState*                                     NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.ExecuteUbergraph_UI_PlayerSpeaking
	 */
	struct UUI_PlayerSpeaking_C_ExecuteUbergraph_UI_PlayerSpeaking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnChanged__DelegateSignature
	 */
	struct UUI_PlayerSpeaking_C_OnChanged__DelegateSignature_Params
	{
	public:
		bool                                                       InTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
