﻿#pragma once

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
	 * Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct
	 */
	struct UITM_MisSel_Timer_C_Construct_Params
	{	};

	/**
	 * Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime
	 */
	struct UITM_MisSel_Timer_C_UpdateTime_Params
	{	};

	/**
	 * Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.PreConstruct
	 */
	struct UITM_MisSel_Timer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer
	 */
	struct UITM_MisSel_Timer_C_ExecuteUbergraph_ITM_MisSel_Timer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
