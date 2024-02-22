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
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_1_Params
	{	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ChangeEvent
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_ChangeEvent_Params
	{	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.GetEventToDisplay
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_GetEventToDisplay_Params
	{
	public:
		class UFSDEvent*                                           EventToDisplay;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.CheckForActiveEvents
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_CheckForActiveEvents_Params
	{	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Refresh
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_Refresh_Params
	{	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.Construct
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_Construct_Params
	{	};

	/**
	 * Function LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C.ExecuteUbergraph_LCD_ActiveEventEndDateDisplay
	 */
	struct ULCD_ActiveEventEndDateDisplay_C_ExecuteUbergraph_LCD_ActiveEventEndDateDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
