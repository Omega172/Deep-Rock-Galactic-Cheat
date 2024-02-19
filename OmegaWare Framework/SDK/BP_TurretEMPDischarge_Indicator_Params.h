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
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.UpdateState
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_UpdateState_Params
	{
	public:
		bool                                                       animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__FinishedFunc
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_AnimIntro__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__UpdateFunc
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_AnimIntro__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ReceiveBeginPlay
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemEquipped_Event
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemUnequipped
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_OnItemUnequipped_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnStateChanged_Event
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event_Params
	{
	public:
		class ARedeployableSentryGun*                              Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERedeployableSentryGunState                                NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ExecuteUbergraph_BP_TurretEMPDischarge_Indicator
	 */
	struct ABP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
