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
	 * Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters
	 */
	struct AGM_Salvage_C_UpdateFailsafeMollyCounters_Params
	{
	public:
		struct FVector                                             v2;                                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
	 */
	struct AGM_Salvage_C_SpawnRepairPoints_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
	 */
	struct AGM_Salvage_C_EnableNextRepairPoint_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
	 */
	struct AGM_Salvage_C_OnLevelGenerationComplete_Params
	{
	public:
		int32_t                                                    pass;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.Call DropPod
	 */
	struct AGM_Salvage_C_CallDropPod_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
	 */
	struct AGM_Salvage_C_DonkeyButtonPressed_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.ReachedDropShip
	 */
	struct AGM_Salvage_C_ReachedDropShip_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
	 */
	struct AGM_Salvage_C_RepairPoint_Repaired_Params
	{
	public:
		class AActor*                                              RepairPoint;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.DefendFail
	 */
	struct AGM_Salvage_C_DefendFail_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.DefendDone
	 */
	struct AGM_Salvage_C_DefendDone_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
	 */
	struct AGM_Salvage_C_OnCountdownFinished_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.Countdowncomplete
	 */
	struct AGM_Salvage_C_Countdowncomplete_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton
	 */
	struct AGM_Salvage_C_ActivateDonkeyButton_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.OnMuleBayOpenedDispatch_Event_1
	 */
	struct AGM_Salvage_C_OnMuleBayOpenedDispatch_Event_1_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.OnObjectivesInitialized
	 */
	struct AGM_Salvage_C_OnObjectivesInitialized_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.AllActorsSalaged
	 */
	struct AGM_Salvage_C_AllActorsSalaged_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.Cheat_ActivateDropPod
	 */
	struct AGM_Salvage_C_Cheat_ActivateDropPod_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.Cheat_FinishSalvagePoint
	 */
	struct AGM_Salvage_C_Cheat_FinishSalvagePoint_Params
	{	};

	/**
	 * Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
	 */
	struct AGM_Salvage_C_ExecuteUbergraph_GM_Salvage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
