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
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.FuelUpdated_Event_1
	 */
	struct UBP_JetBootsMovement_C_FuelUpdated_Event_1_Params
	{
	public:
		float                                                      jetFuel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnCharacterSet
	 */
	struct UBP_JetBootsMovement_C_Receive_OnCharacterSet_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedLocal
	 */
	struct UBP_JetBootsMovement_C_Receive_OnActiveChangedLocal_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromTakeOff;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.BindToFuelUsed
	 */
	struct UBP_JetBootsMovement_C_BindToFuelUsed_Params
	{	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.OnFuelUsed
	 */
	struct UBP_JetBootsMovement_C_OnFuelUsed_Params
	{
	public:
		float                                                      jetFuel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnDestroy
	 */
	struct UBP_JetBootsMovement_C_Receive_OnDestroy_Params
	{	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnOverheatedChanged
	 */
	struct UBP_JetBootsMovement_C_Receive_OnOverheatedChanged_Params
	{
	public:
		bool                                                       overHeated;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedNonLocal
	 */
	struct UBP_JetBootsMovement_C_Receive_OnActiveChangedNonLocal_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromTakeOff;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnTakeOffLocal
	 */
	struct UBP_JetBootsMovement_C_Receive_OnTakeOffLocal_Params
	{	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedServer
	 */
	struct UBP_JetBootsMovement_C_Receive_OnActiveChangedServer_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromTakeOff;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JetBootsMovement.BP_JetBootsMovement_C.ExecuteUbergraph_BP_JetBootsMovement
	 */
	struct UBP_JetBootsMovement_C_ExecuteUbergraph_BP_JetBootsMovement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
