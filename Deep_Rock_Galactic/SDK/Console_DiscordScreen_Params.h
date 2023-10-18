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
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state
	 */
	struct UConsole_DiscordScreen_C_HandleCommunityGoalContentstate_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content
	 */
	struct UConsole_DiscordScreen_C_UpdateContentSwitcherContent_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier
	 */
	struct UConsole_DiscordScreen_C_MinersUnionTier_Params
	{
	public:
		float                                                      DSMUTier;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals
	 */
	struct UConsole_DiscordScreen_C_SetGoals_Params
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos
	 */
	struct UConsole_DiscordScreen_C_StopAllLogos_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn
	 */
	struct UConsole_DiscordScreen_C_FactionLogosOn_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable
	 */
	struct UConsole_DiscordScreen_C_SetUsable_Params
	{
	public:
		bool                                                       Usable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen
	 */
	struct UConsole_DiscordScreen_C_SetScreen_Params
	{
	public:
		bool                                                       Appear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn
	 */
	struct UConsole_DiscordScreen_C_LogoOn_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn
	 */
	struct UConsole_DiscordScreen_C_CreditsOn_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels
	 */
	struct UConsole_DiscordScreen_C_ClearTextLabels_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad
	 */
	struct UConsole_DiscordScreen_C_StartLoad_Params
	{
	public:
		float                                                      LoadingTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI
	 */
	struct UConsole_DiscordScreen_C_RefreshUI_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Construct
	 */
	struct UConsole_DiscordScreen_C_Construct_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Tick
	 */
	struct UConsole_DiscordScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI
	 */
	struct UConsole_DiscordScreen_C_UpdateUI_Params
	{
	public:
		struct FDiscordServerData                                  discordServerCount;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer
	 */
	struct UConsole_DiscordScreen_C_UserInServer_Params
	{
	public:
		bool                                                       isInServer;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text
	 */
	struct UConsole_DiscordScreen_C_DoRunningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ONVX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Target;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct
	 */
	struct UConsole_DiscordScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Init
	 */
	struct UConsole_DiscordScreen_C_Init_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.Stop
	 */
	struct UConsole_DiscordScreen_C_Stop_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest
	 */
	struct UConsole_DiscordScreen_C_TimedUserRequest_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime
	 */
	struct UConsole_DiscordScreen_C_RequestUserInByTime_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent
	 */
	struct UConsole_DiscordScreen_C_OnFactionsDataRecievedEvent_Params
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData
	 */
	struct UConsole_DiscordScreen_C_OnCGSData_Params
	{
	public:
		bool                                                       stateReceived;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI
	 */
	struct UConsole_DiscordScreen_C_OnCheckUI_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized
	 */
	struct UConsole_DiscordScreen_C_OnGoalInitialized_Params
	{	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen
	 */
	struct UConsole_DiscordScreen_C_ExecuteUbergraph_Console_DiscordScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature
	 */
	struct UConsole_DiscordScreen_C_ScreenChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
