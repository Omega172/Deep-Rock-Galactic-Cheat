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
	 * Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent
	 */
	struct UUI_KPI_Tab_C_HandleMouseEvent_Params
	{
	public:
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InUp;                                                    // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutHandled;                                              // 0x0071(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent
	 */
	struct UUI_KPI_Tab_C_HandleKeyEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InUp;                                                    // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutHandled;                                              // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
