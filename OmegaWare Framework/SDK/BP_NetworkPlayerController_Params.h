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
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent
	 */
	struct ABP_NetworkPlayerController_C_CollapseAndRemoveFromParent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass
	 */
	struct ABP_NetworkPlayerController_C_GetLoaderScreenUIClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI
	 */
	struct ABP_NetworkPlayerController_C_CleanupUI_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
	 */
	struct ABP_NetworkPlayerController_C_GetNonTakenHero_Params
	{
	public:
		class UPlayerCharacterID*                                  SelectedClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
	 */
	struct ABP_NetworkPlayerController_C_OnBack_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
	 */
	struct ABP_NetworkPlayerController_C_OnPlayerCharacterPossesed_Event_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
	 */
	struct ABP_NetworkPlayerController_C_Server_RequestNonTakenHero_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
	 */
	struct ABP_NetworkPlayerController_C_Client_RecieveNonTakenHero_Params
	{
	public:
		class UPlayerCharacterID*                                  NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
	 */
	struct ABP_NetworkPlayerController_C_Server_SetCharacterSelected_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel
	 */
	struct ABP_NetworkPlayerController_C_RecievePreClientTravel_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed
	 */
	struct ABP_NetworkPlayerController_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
	 */
	struct ABP_NetworkPlayerController_C_ShowReconnect_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
	 */
	struct ABP_NetworkPlayerController_C_ExecuteUbergraph_BP_NetworkPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1S42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
