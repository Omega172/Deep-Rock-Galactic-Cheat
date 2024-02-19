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
	 * Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Refresh
	 */
	struct UUI_LockOn_TargetCounter_C_Refresh_Params
	{	};

	/**
	 * Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.PreConstruct
	 */
	struct UUI_LockOn_TargetCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.SetOn
	 */
	struct UUI_LockOn_TargetCounter_C_SetOn_Params
	{
	public:
		bool                                                       InIsOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Ping
	 */
	struct UUI_LockOn_TargetCounter_C_Ping_Params
	{	};

	/**
	 * Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.ExecuteUbergraph_UI_LockOn_TargetCounter
	 */
	struct UUI_LockOn_TargetCounter_C_ExecuteUbergraph_UI_LockOn_TargetCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
