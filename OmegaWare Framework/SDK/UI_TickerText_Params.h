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
	 * Function UI_TickerText.UI_TickerText_C.Tick
	 */
	struct UUI_TickerText_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.Construct
	 */
	struct UUI_TickerText_C_Construct_Params
	{	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.PreConstruct
	 */
	struct UUI_TickerText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.SetText
	 */
	struct UUI_TickerText_C_SetText_Params
	{
	public:
		class FText                                                TickerText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.SetSpeed
	 */
	struct UUI_TickerText_C_SetSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.SetStyle
	 */
	struct UUI_TickerText_C_SetStyle_Params
	{
	public:
		class UDataTable*                                          NewTextStyleSet;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TickerText.UI_TickerText_C.ExecuteUbergraph_UI_TickerText
	 */
	struct UUI_TickerText_C_ExecuteUbergraph_UI_TickerText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
