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
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr
	 */
	struct UBP_IntoxicationComponent_C_ToPercentStr_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQOC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PercentString;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp
	 */
	struct UBP_IntoxicationComponent_C_MyLerp_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetValue;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Result;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength
	 */
	struct UBP_IntoxicationComponent_C_SetPostProcessStrength_Params
	{
	public:
		float                                                      NewStrength;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct
	 */
	struct UBP_IntoxicationComponent_C_GetAlcoholPct_Params
	{
	public:
		EDrinkableAlcoholStrength                                  Strength;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5LP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength
	 */
	struct UBP_IntoxicationComponent_C_LerpMovementStength_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects
	 */
	struct UBP_IntoxicationComponent_C_PushEffects_Params
	{	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects
	 */
	struct UBP_IntoxicationComponent_C_PopEffects_Params
	{
	public:
		class FString                                              DebugReason;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick
	 */
	struct UBP_IntoxicationComponent_C_ReceiveDrunkTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DrunkTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk
	 */
	struct UBP_IntoxicationComponent_C_ReceivePassOutDrunk_Params
	{	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength
	 */
	struct UBP_IntoxicationComponent_C_LerpPostProcessStrength_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd
	 */
	struct UBP_IntoxicationComponent_C_ReceiveDrunkEnd_Params
	{	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin
	 */
	struct UBP_IntoxicationComponent_C_ReceiveDrunkBegin_Params
	{	};

	/**
	 * Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent
	 */
	struct UBP_IntoxicationComponent_C_ExecuteUbergraph_BP_IntoxicationComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
