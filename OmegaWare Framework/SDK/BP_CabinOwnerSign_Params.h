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
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
	 */
	struct ABP_CabinOwnerSign_C_SetPlayerName_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
	 */
	struct ABP_CabinOwnerSign_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
	 */
	struct ABP_CabinOwnerSign_C_SetCabinOwner_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
	 */
	struct ABP_CabinOwnerSign_C_ChangeName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
	 */
	struct ABP_CabinOwnerSign_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
	 */
	struct ABP_CabinOwnerSign_C_ExecuteUbergraph_BP_CabinOwnerSign_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7QJD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
