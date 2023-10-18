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
	 * Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1
	 */
	struct ULore_DamageTypeIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
	 */
	struct ULore_DamageTypeIcon_C_Construct_Params
	{	};

	/**
	 * Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
	 */
	struct ULore_DamageTypeIcon_C_SetData_Params
	{
	public:
		struct FDamageTypeDescription                              DamageType;                                              // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
	 */
	struct ULore_DamageTypeIcon_C_PlayIntro_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
	 */
	struct ULore_DamageTypeIcon_C_ExecuteUbergraph_Lore_DamageTypeIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYL7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
