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
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateClipCount
	 */
	struct UGooCannon_AmmoCounter_C_UpdateClipCount_Params
	{	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateAmmoCritical
	 */
	struct UGooCannon_AmmoCounter_C_UpdateAmmoCritical_Params
	{	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetNumber
	 */
	struct UGooCannon_AmmoCounter_C_SetNumber_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EWH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Label;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutValue;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGLT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetTotalCount
	 */
	struct UGooCannon_AmmoCounter_C_SetTotalCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.Construct
	 */
	struct UGooCannon_AmmoCounter_C_Construct_Params
	{	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetClipCount
	 */
	struct UGooCannon_AmmoCounter_C_SetClipCount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.ExecuteUbergraph_GooCannon_AmmoCounter
	 */
	struct UGooCannon_AmmoCounter_C_ExecuteUbergraph_GooCannon_AmmoCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
