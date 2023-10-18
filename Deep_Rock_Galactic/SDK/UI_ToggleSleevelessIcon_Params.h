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
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PreConstruct
	 */
	struct UUI_ToggleSleevelessIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PlayActivateAnimation
	 */
	struct UUI_ToggleSleevelessIcon_C_PlayActivateAnimation_Params
	{	};

	/**
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.SetHovered
	 */
	struct UUI_ToggleSleevelessIcon_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessDesireChanged
	 */
	struct UUI_ToggleSleevelessIcon_C_OnSleevelessDesireChanged_Params
	{
	public:
		bool                                                       DesireSleeveless;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessAvailabilityChanged
	 */
	struct UUI_ToggleSleevelessIcon_C_OnSleevelessAvailabilityChanged_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.ExecuteUbergraph_UI_ToggleSleevelessIcon
	 */
	struct UUI_ToggleSleevelessIcon_C_ExecuteUbergraph_UI_ToggleSleevelessIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
