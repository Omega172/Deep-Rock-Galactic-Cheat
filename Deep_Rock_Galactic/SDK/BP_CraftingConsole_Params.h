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
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.IsNewPlayer
	 */
	struct ABP_CraftingConsole_C_IsNewPlayer_Params
	{
	public:
		class ABP_PlayerController_SpaceRig_C*                     PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNewPlayer;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__FinishedFunc
	 */
	struct ABP_CraftingConsole_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__UpdateFunc
	 */
	struct ABP_CraftingConsole_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.ReceiveBeginPlay
	 */
	struct ABP_CraftingConsole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_CraftingConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CraftingConsole.BP_CraftingConsole_C.ExecuteUbergraph_BP_CraftingConsole
	 */
	struct ABP_CraftingConsole_C_ExecuteUbergraph_BP_CraftingConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BG1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
