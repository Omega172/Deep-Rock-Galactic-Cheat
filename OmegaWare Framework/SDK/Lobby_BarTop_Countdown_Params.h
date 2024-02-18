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
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
	 */
	struct ULobby_BarTop_Countdown_C_Construct_Params
	{	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
	 */
	struct ULobby_BarTop_Countdown_C_CountDownChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
	 */
	struct ULobby_BarTop_Countdown_C_TimerChanged_Params
	{
	public:
		float                                                      newTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
	 */
	struct ULobby_BarTop_Countdown_C_HostCoundownChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
	 */
	struct ULobby_BarTop_Countdown_C_CustomEvent_Params
	{
	public:
		float                                                      newTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
	 */
	struct ULobby_BarTop_Countdown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
	 */
	struct ULobby_BarTop_Countdown_C_ExecuteUbergraph_Lobby_BarTop_Countdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
