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
	 * Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct
	 */
	struct UITM_MenuDamageIndicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit
	 */
	struct UITM_MenuDamageIndicator_C_OnHit_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q7AJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished
	 */
	struct UITM_MenuDamageIndicator_C_OnAnimFinished_Params
	{	};

	/**
	 * Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu
	 */
	struct UITM_MenuDamageIndicator_C_SetMenu_Params
	{
	public:
		class UUserWidget*                                         EscapeMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator
	 */
	struct UITM_MenuDamageIndicator_C_ExecuteUbergraph_ITM_MenuDamageIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
