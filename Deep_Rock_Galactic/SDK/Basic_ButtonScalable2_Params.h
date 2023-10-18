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
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown
	 */
	struct UBasic_ButtonScalable2_C_HideCountDown_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown
	 */
	struct UBasic_ButtonScalable2_C_SetCountDown_Params
	{
	public:
		int32_t                                                    SecondsRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinimumIntegralDigits;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
	 */
	struct UBasic_ButtonScalable2_C_SetBackgroundColor_Params
	{
	public:
		ENUM_MenuColors                                            ColorSelector;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGIQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
	 */
	struct UBasic_ButtonScalable2_C_SetIconBrush_Params
	{
	public:
		class UImage*                                              Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         InBrush;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMargin                                             InPadding;                                               // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
	 */
	struct UBasic_ButtonScalable2_C_SetTints_Params
	{
	public:
		struct FLinearColor                                        PCIconTint;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ControllerIconTint;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
	 */
	struct UBasic_ButtonScalable2_C_SetIconTint_Params
	{
	public:
		struct FLinearColor                                        PCIconTint;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ControllerIconTint;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
	 */
	struct UBasic_ButtonScalable2_C_OnNewLine_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
	 */
	struct UBasic_ButtonScalable2_C_OnAddIcon_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FActionIconMapping                                  Icon;                                                    // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
	 */
	struct UBasic_ButtonScalable2_C_OnAddKeyName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
	 */
	struct UBasic_ButtonScalable2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
	 */
	struct UBasic_ButtonScalable2_C_OnAddString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
	 */
	struct UBasic_ButtonScalable2_C_OnReset_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
	 */
	struct UBasic_ButtonScalable2_C_Toggle_Params
	{
	public:
		bool                                                       IsToggledOn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
	 */
	struct UBasic_ButtonScalable2_C_SetToggled_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
	 */
	struct UBasic_ButtonScalable2_C_SetUntoggled_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
	 */
	struct UBasic_ButtonScalable2_C_Click_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
	 */
	struct UBasic_ButtonScalable2_C_ExecuteUbergraph_Basic_ButtonScalable2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULXE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
	 */
	struct UBasic_ButtonScalable2_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
