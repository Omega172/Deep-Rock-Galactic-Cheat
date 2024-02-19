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
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
	 */
	struct UToolTip_WithKeyIcon_C_FadeIn_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
	 */
	struct UToolTip_WithKeyIcon_C_SetWidth_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
	 */
	struct UToolTip_WithKeyIcon_C_SetMaxWidth_Params
	{
	public:
		float                                                      MaxWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
	 */
	struct UToolTip_WithKeyIcon_C_SetMinWidth_Params
	{
	public:
		float                                                      MinWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
	 */
	struct UToolTip_WithKeyIcon_C_SetPostionAndAlignment_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAlignment;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
	 */
	struct UToolTip_WithKeyIcon_C_SetData_Params
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FActionIconMapping                                  Icon;                                                    // 0x0030(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
	 */
	struct UToolTip_WithKeyIcon_C_SetTarget_Params
	{
	public:
		class UWidget*                                             TargetWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
	 */
	struct UToolTip_WithKeyIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
	 */
	struct UToolTip_WithKeyIcon_C_SetToolTipOwner_Params
	{
	public:
		class UWidget*                                             Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
	 */
	struct UToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
