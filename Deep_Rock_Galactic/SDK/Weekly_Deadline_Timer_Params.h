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
	 * Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.PreConstruct
	 */
	struct UWeekly_Deadline_Timer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.SetData
	 */
	struct UWeekly_Deadline_Timer_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.Update Time
	 */
	struct UWeekly_Deadline_Timer_C_UpdateTime_Params
	{	};

	/**
	 * Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.ExecuteUbergraph_Weekly_Deadline_Timer
	 */
	struct UWeekly_Deadline_Timer_C_ExecuteUbergraph_Weekly_Deadline_Timer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
