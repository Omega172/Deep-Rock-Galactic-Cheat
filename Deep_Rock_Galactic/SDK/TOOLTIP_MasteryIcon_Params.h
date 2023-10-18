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
	 * Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks
	 */
	struct UTOOLTIP_MasteryIcon_C_SetUnlocks_Params
	{
	public:
		TArray<class UUnlockReward*>                               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct
	 */
	struct UTOOLTIP_MasteryIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon
	 */
	struct UTOOLTIP_MasteryIcon_C_ExecuteUbergraph_TOOLTIP_MasteryIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
