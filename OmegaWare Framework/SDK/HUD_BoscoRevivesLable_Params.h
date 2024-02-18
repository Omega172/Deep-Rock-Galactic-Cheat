#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
	 */
	struct UHUD_BoscoRevivesLable_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct
	 */
	struct UHUD_BoscoRevivesLable_C_Construct_Params
	{	};

	/**
	 * Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
	 */
	struct UHUD_BoscoRevivesLable_C_OnReviveCountChangedEvent_Params
	{
	public:
		int32_t                                                    ReviveCount;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
	 */
	struct UHUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
