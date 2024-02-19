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
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.CreateEntries
	 */
	struct UUI_PlayerSpeaking_List_C_CreateEntries_Params
	{	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerStates
	 */
	struct UUI_PlayerSpeaking_List_C_GetPlayerStates_Params
	{
	public:
		TArray<class AFSDPlayerState*>                             OutStates;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerState
	 */
	struct UUI_PlayerSpeaking_List_C_GetPlayerState_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFSDPlayerState*                                     State;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.PreConstruct
	 */
	struct UUI_PlayerSpeaking_List_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.Construct
	 */
	struct UUI_PlayerSpeaking_List_C_Construct_Params
	{	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.UpdateEntries
	 */
	struct UUI_PlayerSpeaking_List_C_UpdateEntries_Params
	{	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerJoined
	 */
	struct UUI_PlayerSpeaking_List_C_OnPlayerJoined_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerLeave
	 */
	struct UUI_PlayerSpeaking_List_C_OnPlayerLeave_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.ExecuteUbergraph_UI_PlayerSpeaking_List
	 */
	struct UUI_PlayerSpeaking_List_C_ExecuteUbergraph_UI_PlayerSpeaking_List_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08I0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
