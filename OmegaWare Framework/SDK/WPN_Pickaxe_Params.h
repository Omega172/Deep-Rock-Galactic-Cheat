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
	 * Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
	 */
	struct AWPN_Pickaxe_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects
	 */
	struct AWPN_Pickaxe_C_SpecialTargetDamageEffects_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay
	 */
	struct AWPN_Pickaxe_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe
	 */
	struct AWPN_Pickaxe_C_ExecuteUbergraph_WPN_Pickaxe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
