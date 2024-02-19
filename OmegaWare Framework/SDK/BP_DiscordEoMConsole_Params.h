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
	 * Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay
	 */
	struct ABP_DiscordEoMConsole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick
	 */
	struct ABP_DiscordEoMConsole_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData
	 */
	struct ABP_DiscordEoMConsole_C_RecieveEoMData_Params
	{
	public:
		bool                                                       HasEoM;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole
	 */
	struct ABP_DiscordEoMConsole_C_ExecuteUbergraph_BP_DiscordEoMConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
