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
	 * Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.SetBlinkIntensity
	 */
	struct ABP_SupplyPod_Beacon_C_SetBlinkIntensity_Params
	{
	public:
		float                                                      BlinkIntensity;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.UserConstructionScript
	 */
	struct ABP_SupplyPod_Beacon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveBeginPlay
	 */
	struct ABP_SupplyPod_Beacon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveTick
	 */
	struct ABP_SupplyPod_Beacon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ExecuteUbergraph_BP_SupplyPod_Beacon
	 */
	struct ABP_SupplyPod_Beacon_C_ExecuteUbergraph_BP_SupplyPod_Beacon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T9RV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
