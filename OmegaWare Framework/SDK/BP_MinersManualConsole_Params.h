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
	 * Function BP_MinersManualConsole.BP_MinersManualConsole_C.ReceiveTick
	 */
	struct ABP_MinersManualConsole_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MinersManualConsole.BP_MinersManualConsole_C.BndEvt__BP_MinersManual_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_MinersManualConsole_C_BndEvt__BP_MinersManual_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MinersManualConsole.BP_MinersManualConsole_C.ReceiveBeginPlay
	 */
	struct ABP_MinersManualConsole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MinersManualConsole.BP_MinersManualConsole_C.SwitchMesh
	 */
	struct ABP_MinersManualConsole_C_SwitchMesh_Params
	{	};

	/**
	 * Function BP_MinersManualConsole.BP_MinersManualConsole_C.ExecuteUbergraph_BP_MinersManualConsole
	 */
	struct ABP_MinersManualConsole_C_ExecuteUbergraph_BP_MinersManualConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
