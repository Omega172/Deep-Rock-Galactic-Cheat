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
	 * Function Basic_Dots.Basic_Dots_C.SetFromWidgetSwitcher
	 */
	struct UBasic_Dots_C_SetFromWidgetSwitcher_Params
	{
	public:
		class UWidgetSwitcher*                                     InSwitcher;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.SetCountAndSelected
	 */
	struct UBasic_Dots_C_SetCountAndSelected_Params
	{
	public:
		int32_t                                                    InCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelected;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.SetSelectedIndex
	 */
	struct UBasic_Dots_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    InSelectedDotIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.SetCount
	 */
	struct UBasic_Dots_C_SetCount_Params
	{	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.Clear
	 */
	struct UBasic_Dots_C_Clear_Params
	{	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.PreConstruct
	 */
	struct UBasic_Dots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Dots.Basic_Dots_C.ExecuteUbergraph_Basic_Dots
	 */
	struct UBasic_Dots_C_ExecuteUbergraph_Basic_Dots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
