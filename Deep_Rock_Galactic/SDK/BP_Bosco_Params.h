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
	 * Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs
	 */
	struct ABP_Bosco_C_HandleProjectilediffs_Params
	{
	public:
		struct FGearStatEntry                                      Gearstat;                                                // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EItemPreviewStatus                                         Cryoupgradepreviewstatus;                                // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDamageUpgrade                                             damageupgradetype;                                       // 0x0069(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GPAL[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFSDPlayerState*                                     FSDplayerstate;                                          // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGearStatEntry                                      gearstatout;                                             // 0x0078(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.GetGearStatEntry
	 */
	struct ABP_Bosco_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.ScareEffect
	 */
	struct ABP_Bosco_C_ScareEffect_Params
	{	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.OnTriggerAI
	 */
	struct ABP_Bosco_C_OnTriggerAI_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay
	 */
	struct ABP_Bosco_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.OnMessageAI
	 */
	struct ABP_Bosco_C_OnMessageAI_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.SelfDestruct
	 */
	struct ABP_Bosco_C_SelfDestruct_Params
	{	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.StateChanged
	 */
	struct ABP_Bosco_C_StateChanged_Params
	{
	public:
		EDroneAIState                                              aCurrentState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.ReceivePossessed
	 */
	struct ABP_Bosco_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco
	 */
	struct ABP_Bosco_C_ExecuteUbergraph_BP_Bosco_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
