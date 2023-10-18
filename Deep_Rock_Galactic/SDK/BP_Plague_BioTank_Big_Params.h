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
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.GetSeasonBarrelSpawnChance
	 */
	struct ABP_Plague_BioTank_Big_C_GetSeasonBarrelSpawnChance_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.UpdateMeshesForHolidays
	 */
	struct ABP_Plague_BioTank_Big_C_UpdateMeshesForHolidays_Params
	{	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ReceiveBeginPlay
	 */
	struct ABP_Plague_BioTank_Big_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_Plague_BioTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.OnKnock
	 */
	struct ABP_Plague_BioTank_Big_C_OnKnock_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.All_BindGenericDelegate
	 */
	struct ABP_Plague_BioTank_Big_C_All_BindGenericDelegate_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldReact;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldStartMC;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ExecuteUbergraph_BP_Plague_BioTank_Big
	 */
	struct ABP_Plague_BioTank_Big_C_ExecuteUbergraph_BP_Plague_BioTank_Big_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
