﻿#pragma once

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
	 * Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct
	 */
	struct UConsoleScreen_MotivationalQuote_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Tick
	 */
	struct UConsoleScreen_MotivationalQuote_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.PreConstruct
	 */
	struct UConsoleScreen_MotivationalQuote_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote
	 */
	struct UConsoleScreen_MotivationalQuote_C_ExecuteUbergraph_ConsoleScreen_MotivationalQuote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
