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
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.UpdateDistressSphere
	 */
	struct ABP_Salvage_FuelPod_C_UpdateDistressSphere_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact
	 */
	struct ABP_Salvage_FuelPod_C_OnDroppodImpact_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted
	 */
	struct ABP_Salvage_FuelPod_C_OnDropStarted_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick
	 */
	struct ABP_Salvage_FuelPod_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart
	 */
	struct ABP_Salvage_FuelPod_C_OnDefenseStart_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete
	 */
	struct ABP_Salvage_FuelPod_C_OnDefenseComplete_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
	 */
	struct ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed
	 */
	struct ABP_Salvage_FuelPod_C_OnDefenseFailed_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveBeginPlay
	 */
	struct ABP_Salvage_FuelPod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_Salvage_FuelPod_C_BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.SignalFuelLineStart
	 */
	struct ABP_Salvage_FuelPod_C_SignalFuelLineStart_Params
	{	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature
	 */
	struct ABP_Salvage_FuelPod_C_BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsFalling;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnFuelLineConnected
	 */
	struct ABP_Salvage_FuelPod_C_OnFuelLineConnected_Params
	{
	public:
		class AFuelLineEndPoint*                                   InFuelLineStart;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnFuelLineStarted
	 */
	struct ABP_Salvage_FuelPod_C_OnFuelLineStarted_Params
	{
	public:
		bool                                                       InFuelLineStarted;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnFirstFuelLineSegment
	 */
	struct ABP_Salvage_FuelPod_C_OnFirstFuelLineSegment_Params
	{
	public:
		class AFuelLineSegment*                                    InFirstSegment;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod
	 */
	struct ABP_Salvage_FuelPod_C_ExecuteUbergraph_BP_Salvage_FuelPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
