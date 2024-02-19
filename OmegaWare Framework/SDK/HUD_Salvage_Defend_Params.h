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
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
	 */
	struct UHUD_Salvage_Defend_C_UpdateDefenderBlocks_Params
	{
	public:
		int32_t                                                    DefenderCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
	 */
	struct UHUD_Salvage_Defend_C_Construct_Params
	{	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
	 */
	struct UHUD_Salvage_Defend_C_ProgressUpdated_Params
	{
	public:
		float                                                      NewProgress;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
	 */
	struct UHUD_Salvage_Defend_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
	 */
	struct UHUD_Salvage_Defend_C_DefendersUpdated_Params
	{
	public:
		int32_t                                                    DefenderCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
	 */
	struct UHUD_Salvage_Defend_C_success_Params
	{	};

	/**
	 * Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
	 */
	struct UHUD_Salvage_Defend_C_ExecuteUbergraph_HUD_Salvage_Defend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
