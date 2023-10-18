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
	 * Function BP_DepthCount.BP_DepthCount_C.SetPingActive
	 */
	struct ABP_DepthCount_C_SetPingActive_Params
	{
	public:
		bool                                                       InPingActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DepthCount.BP_DepthCount_C.ReceiveTick
	 */
	struct ABP_DepthCount_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DepthCount.BP_DepthCount_C.ReceiveBeginPlay
	 */
	struct ABP_DepthCount_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DepthCount.BP_DepthCount_C.DoPing
	 */
	struct ABP_DepthCount_C_DoPing_Params
	{	};

	/**
	 * Function BP_DepthCount.BP_DepthCount_C.ExecuteUbergraph_BP_DepthCount
	 */
	struct ABP_DepthCount_C_ExecuteUbergraph_BP_DepthCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
