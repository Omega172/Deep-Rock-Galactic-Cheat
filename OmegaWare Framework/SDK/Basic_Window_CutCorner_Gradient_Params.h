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
	 * Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct
	 */
	struct UBasic_Window_CutCorner_Gradient_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint
	 */
	struct UBasic_Window_CutCorner_Gradient_C_SetBackgroundTint_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor
	 */
	struct UBasic_Window_CutCorner_Gradient_C_SetColorbarColor_Params
	{
	public:
		ENUM_MenuColors                                            Colorbar_Tint;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient
	 */
	struct UBasic_Window_CutCorner_Gradient_C_ExecuteUbergraph_Basic_Window_CutCorner_Gradient_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
