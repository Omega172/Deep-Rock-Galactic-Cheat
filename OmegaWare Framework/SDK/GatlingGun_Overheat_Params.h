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
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetPercent
	 */
	struct UGatlingGun_Overheat_C_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K1X4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue
	 */
	struct UGatlingGun_Overheat_C_SetHeatValue_Params
	{
	public:
		float                                                      HeatPercentage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct
	 */
	struct UGatlingGun_Overheat_C_Construct_Params
	{	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.PreConstruct
	 */
	struct UGatlingGun_Overheat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.Init
	 */
	struct UGatlingGun_Overheat_C_Init_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnEquipped
	 */
	struct UGatlingGun_Overheat_C_OnEquipped_Params
	{	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnUnequipped
	 */
	struct UGatlingGun_Overheat_C_OnUnequipped_Params
	{	};

	/**
	 * Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat
	 */
	struct UGatlingGun_Overheat_C_ExecuteUbergraph_GatlingGun_Overheat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
