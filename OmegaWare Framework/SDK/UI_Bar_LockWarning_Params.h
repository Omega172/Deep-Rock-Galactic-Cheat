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
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop
	 */
	struct UUI_Bar_LockWarning_C_AnimStop_Params
	{	};

	/**
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay
	 */
	struct UUI_Bar_LockWarning_C_AnimPlay_Params
	{	};

	/**
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct
	 */
	struct UUI_Bar_LockWarning_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice
	 */
	struct UUI_Bar_LockWarning_C_SetPrice_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice
	 */
	struct UUI_Bar_LockWarning_C_SetFixedPrice_Params
	{
	public:
		TMap<class UResourceData*, int32_t>                        Cost;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning
	 */
	struct UUI_Bar_LockWarning_C_ExecuteUbergraph_UI_Bar_LockWarning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MCUG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
