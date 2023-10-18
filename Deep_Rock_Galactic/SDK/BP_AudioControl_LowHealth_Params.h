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
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SetSoundFromAlpha
	 */
	struct UBP_AudioControl_LowHealth_C_SetSoundFromAlpha_Params
	{
	public:
		float                                                      FadeAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ShouldSetTimestamp
	 */
	struct UBP_AudioControl_LowHealth_C_ShouldSetTimestamp_Params
	{
	public:
		bool                                                       IsActivate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveBeginPlay
	 */
	struct UBP_AudioControl_LowHealth_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveTick
	 */
	struct UBP_AudioControl_LowHealth_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthChanged
	 */
	struct UBP_AudioControl_LowHealth_C_HealthChanged_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeInLowHealth
	 */
	struct UBP_AudioControl_LowHealth_C_FadeInLowHealth_Params
	{	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeOutLowHealth
	 */
	struct UBP_AudioControl_LowHealth_C_FadeOutLowHealth_Params
	{	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleHeartbeat
	 */
	struct UBP_AudioControl_LowHealth_C_HandleHeartbeat_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleLowHealthMuffling
	 */
	struct UBP_AudioControl_LowHealth_C_HandleLowHealthMuffling_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeath_Event
	 */
	struct UBP_AudioControl_LowHealth_C_OnDeath_Event_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDestroyed_Event
	 */
	struct UBP_AudioControl_LowHealth_C_OnDestroyed_Event_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeahtAndDestroyed
	 */
	struct UBP_AudioControl_LowHealth_C_OnDeahtAndDestroyed_Params
	{	};

	/**
	 * Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ExecuteUbergraph_BP_AudioControl_LowHealth
	 */
	struct UBP_AudioControl_LowHealth_C_ExecuteUbergraph_BP_AudioControl_LowHealth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6EXZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
