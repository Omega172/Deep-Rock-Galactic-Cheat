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
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer
	 */
	struct UHUD_DamageClass_Indicator_C_UpdateThisSpacer_Params
	{
	public:
		class UWidget*                                             ThisSpacer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        ThisAfflictionBox;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        OtherAfflictionBox;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TemperatureIsVisible;                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UTZ5[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers
	 */
	struct UHUD_DamageClass_Indicator_C_UpdateSpacers_Params
	{	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons
	 */
	struct UHUD_DamageClass_Indicator_C_ClearIcons_Params
	{	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
	 */
	struct UHUD_DamageClass_Indicator_C_CreateIcon_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHUD_DamageClass_Item_C*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
	 */
	struct UHUD_DamageClass_Indicator_C_Construct_Params
	{	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
	 */
	struct UHUD_DamageClass_Indicator_C_OnAfflictionActivated_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
	 */
	struct UHUD_DamageClass_Indicator_C_OnAfflictionDeactivated_Params
	{
	public:
		class UPawnAffliction*                                     Affliction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
	 */
	struct UHUD_DamageClass_Indicator_C_Elapsed_Params
	{
	public:
		class UHUD_DamageClass_Item_C*                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature
	 */
	struct UHUD_DamageClass_Indicator_C_BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
	 */
	struct UHUD_DamageClass_Indicator_C_ExecuteUbergraph_HUD_DamageClass_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
