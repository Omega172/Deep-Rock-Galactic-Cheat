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
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
	 */
	struct UConsole_DiscordEoMScreen_C_ClearText_Params
	{	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
	 */
	struct UConsole_DiscordEoMScreen_C_OnFail_D5557812434CB42B270037821C78EAB5_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
	 */
	struct UConsole_DiscordEoMScreen_C_OnSuccess_D5557812434CB42B270037821C78EAB5_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
	 */
	struct UConsole_DiscordEoMScreen_C_Construct_Params
	{	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
	 */
	struct UConsole_DiscordEoMScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
	 */
	struct UConsole_DiscordEoMScreen_C_UpdateUI_Params
	{
	public:
		struct FDiscordServerData                                  discordServerCount;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
	 */
	struct UConsole_DiscordEoMScreen_C_DoRunningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_65VE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Target;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
	 */
	struct UConsole_DiscordEoMScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
	 */
	struct UConsole_DiscordEoMScreen_C_OnEoMDataReceived_Params
	{
	public:
		bool                                                       HasEoM;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
	 */
	struct UConsole_DiscordEoMScreen_C_OpenDescriptions_Params
	{	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
	 */
	struct UConsole_DiscordEoMScreen_C_PlayerNameRunningEffect_Params
	{	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
	 */
	struct UConsole_DiscordEoMScreen_C_PlayerFlavorTextRunningEffect_Params
	{	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
	 */
	struct UConsole_DiscordEoMScreen_C_ExecuteUbergraph_Console_DiscordEoMScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
	 */
	struct UConsole_DiscordEoMScreen_C_ScreenChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
