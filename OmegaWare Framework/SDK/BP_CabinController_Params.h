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
	 * Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState
	 */
	struct ABP_CabinController_C_OnRep_OwnerState_Params
	{	};

	/**
	 * Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay
	 */
	struct ABP_CabinController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CabinController.BP_CabinController_C.RemoveOwner
	 */
	struct ABP_CabinController_C_RemoveOwner_Params
	{	};

	/**
	 * Function BP_CabinController.BP_CabinController_C.Set Cabin Owner
	 */
	struct ABP_CabinController_C_SetCabinOwner_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CabinController.BP_CabinController_C.Controller leave
	 */
	struct ABP_CabinController_C_Controllerleave_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController
	 */
	struct ABP_CabinController_C_ExecuteUbergraph_BP_CabinController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NUOK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
