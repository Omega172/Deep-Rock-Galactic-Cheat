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
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetTextSize
	 */
	struct UConsoleScreen_BGtemplate_C_SetTextSize_Params
	{
	public:
		int32_t                                                    TextSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetHeaderBars
	 */
	struct UConsoleScreen_BGtemplate_C_SetHeaderBars_Params
	{
	public:
		bool                                                       ToggleHeaderBars;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotificationVisible
	 */
	struct UConsoleScreen_BGtemplate_C_SetNotificationVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotification
	 */
	struct UConsoleScreen_BGtemplate_C_SetNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          InIcon;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
	 */
	struct UConsoleScreen_BGtemplate_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
	 */
	struct UConsoleScreen_BGtemplate_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
	 */
	struct UConsoleScreen_BGtemplate_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
	 */
	struct UConsoleScreen_BGtemplate_C_ExecuteUbergraph_ConsoleScreen_BGtemplate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
