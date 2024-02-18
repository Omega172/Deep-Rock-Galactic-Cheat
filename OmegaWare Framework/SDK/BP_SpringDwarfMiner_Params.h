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
	 * Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.GetSpringDwarf
	 */
	struct ABP_SpringDwarfMiner_C_GetSpringDwarf_Params
	{
	public:
		class UStaticMeshComponent*                                Dwarf;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_SpringDwarfMiner_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ImpulseSpringDwarf
	 */
	struct ABP_SpringDwarfMiner_C_ImpulseSpringDwarf_Params
	{	};

	/**
	 * Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ExecuteUbergraph_BP_SpringDwarfMiner
	 */
	struct ABP_SpringDwarfMiner_C_ExecuteUbergraph_BP_SpringDwarfMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GEIV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
