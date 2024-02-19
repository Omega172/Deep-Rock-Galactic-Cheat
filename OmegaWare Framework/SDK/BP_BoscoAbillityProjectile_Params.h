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
	 * Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted
	 */
	struct ABP_BoscoAbillityProjectile_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZ7F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay
	 */
	struct ABP_BoscoAbillityProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile
	 */
	struct ABP_BoscoAbillityProjectile_C_ExecuteUbergraph_BP_BoscoAbillityProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
