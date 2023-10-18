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
	 * Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__FinishedFunc
	 */
	struct ABP_WallSaw_C_SpawnWobble__FinishedFunc_Params
	{	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__UpdateFunc
	 */
	struct ABP_WallSaw_C_SpawnWobble__UpdateFunc_Params
	{	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.ReceiveBeginPlay
	 */
	struct ABP_WallSaw_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.ReceiveTick
	 */
	struct ABP_WallSaw_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.DestroySelf
	 */
	struct ABP_WallSaw_C_DestroySelf_Params
	{	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.GrazeOverlapCallback
	 */
	struct ABP_WallSaw_C_GrazeOverlapCallback_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 prim;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WallSaw.BP_WallSaw_C.ExecuteUbergraph_BP_WallSaw
	 */
	struct ABP_WallSaw_C_ExecuteUbergraph_BP_WallSaw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
