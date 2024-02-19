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
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetLineVisible
	 */
	struct UUI_PlayerSpeaking_WithName_C_SetLineVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerState
	 */
	struct UUI_PlayerSpeaking_WithName_C_SetPlayerState_Params
	{
	public:
		class AFSDPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetIsTalking
	 */
	struct UUI_PlayerSpeaking_WithName_C_SetIsTalking_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutTalking;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerName
	 */
	struct UUI_PlayerSpeaking_WithName_C_SetPlayerName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.Construct
	 */
	struct UUI_PlayerSpeaking_WithName_C_Construct_Params
	{	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.OnTalkingChanged
	 */
	struct UUI_PlayerSpeaking_WithName_C_OnTalkingChanged_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.ExecuteUbergraph_UI_PlayerSpeaking_WithName
	 */
	struct UUI_PlayerSpeaking_WithName_C_ExecuteUbergraph_UI_PlayerSpeaking_WithName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
