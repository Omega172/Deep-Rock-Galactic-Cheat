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
	 * Function BP_MuleLeg.BP_MuleLeg_C.GetDistToNearestMULE
	 */
	struct ABP_MuleLeg_C_GetDistToNearestMULE_Params
	{
	public:
		float                                                      OutDist;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.UpdateBeacon
	 */
	struct ABP_MuleLeg_C_UpdateBeacon_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.InitVisibleOnScanner
	 */
	struct ABP_MuleLeg_C_InitVisibleOnScanner_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.SetPingedByMule
	 */
	struct ABP_MuleLeg_C_SetPingedByMule_Params
	{
	public:
		class ABP_MiniMule_Salvage_C*                              InMiniMule;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InPinged;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.OnRep_IsVisibleOnScanner
	 */
	struct ABP_MuleLeg_C_OnRep_IsVisibleOnScanner_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.Beacon__FinishedFunc
	 */
	struct ABP_MuleLeg_C_Beacon__FinishedFunc_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.Beacon__UpdateFunc
	 */
	struct ABP_MuleLeg_C_Beacon__UpdateFunc_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
	 */
	struct ABP_MuleLeg_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
	 */
	struct ABP_MuleLeg_C_DisableDistressSphere_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.SetVisibleOnScanner
	 */
	struct ABP_MuleLeg_C_SetVisibleOnScanner_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.OnDropped_Event_1
	 */
	struct ABP_MuleLeg_C_OnDropped_Event_1_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUp_Event
	 */
	struct ABP_MuleLeg_C_OnPickedUp_Event_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.Ping Beacon
	 */
	struct ABP_MuleLeg_C_PingBeacon_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.OnDisableLegSpheres_Event
	 */
	struct ABP_MuleLeg_C_OnDisableLegSpheres_Event_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.Ping While Carried
	 */
	struct ABP_MuleLeg_C_PingWhileCarried_Params
	{	};

	/**
	 * Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
	 */
	struct ABP_MuleLeg_C_ExecuteUbergraph_BP_MuleLeg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
