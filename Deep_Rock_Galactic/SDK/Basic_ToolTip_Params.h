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
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetTextJustification
	 */
	struct UBasic_ToolTip_C_SetTextJustification_Params
	{
	public:
		ETextJustify                                               Justification;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.FadeIn
	 */
	struct UBasic_ToolTip_C_FadeIn_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetWidth
	 */
	struct UBasic_ToolTip_C_SetWidth_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetMaxWidth
	 */
	struct UBasic_ToolTip_C_SetMaxWidth_Params
	{
	public:
		float                                                      MaxWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetMinWidth
	 */
	struct UBasic_ToolTip_C_SetMinWidth_Params
	{
	public:
		float                                                      MinWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetPostionAndAlignment
	 */
	struct UBasic_ToolTip_C_SetPostionAndAlignment_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAlignment;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetText
	 */
	struct UBasic_ToolTip_C_SetText_Params
	{
	public:
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.SetTarget
	 */
	struct UBasic_ToolTip_C_SetTarget_Params
	{
	public:
		class UWidget*                                             TargetWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.PreConstruct
	 */
	struct UBasic_ToolTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.Set Tool Tip Owner
	 */
	struct UBasic_ToolTip_C_SetToolTipOwner_Params
	{
	public:
		class UWidget*                                             Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ToolTip.Basic_ToolTip_C.ExecuteUbergraph_Basic_ToolTip
	 */
	struct UBasic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
