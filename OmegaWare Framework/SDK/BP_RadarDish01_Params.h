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
	 * Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
	 */
	struct ABP_RadarDish01_C_SetRotationRate_Params
	{
	public:
		class URotatingMovementComponent*                          self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotationRate;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
	 */
	struct ABP_RadarDish01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
	 */
	struct ABP_RadarDish01_C_ExecuteUbergraph_BP_RadarDish01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
