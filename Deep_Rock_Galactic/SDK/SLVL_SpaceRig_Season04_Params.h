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
	 * Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.Unhide
	 */
	struct ASLVL_SpaceRig_Season04_C_Unhide_Params
	{
	public:
		struct FRandomStream                                       RandomStream;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		TArray<class AStaticMeshActor*>                            Meshes;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumberToUnhide;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WTQO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.OnRep_SpawnSeed
	 */
	struct ASLVL_SpaceRig_Season04_C_OnRep_SpawnSeed_Params
	{	};

	/**
	 * Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ReceiveBeginPlay
	 */
	struct ASLVL_SpaceRig_Season04_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ExecuteUbergraph_SLVL_SpaceRig_Season04
	 */
	struct ASLVL_SpaceRig_Season04_C_ExecuteUbergraph_SLVL_SpaceRig_Season04_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
