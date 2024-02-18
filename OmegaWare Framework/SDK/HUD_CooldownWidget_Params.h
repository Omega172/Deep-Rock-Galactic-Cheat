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
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetBackgroundTint
	 */
	struct UHUD_CooldownWidget_C_SetBackgroundTint_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetFillTint
	 */
	struct UHUD_CooldownWidget_C_SetFillTint_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetPercent
	 */
	struct UHUD_CooldownWidget_C_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveInitWidget
	 */
	struct UHUD_CooldownWidget_C_ReceiveInitWidget_Params
	{	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.PreConstruct
	 */
	struct UHUD_CooldownWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.Construct
	 */
	struct UHUD_CooldownWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetHeightScale
	 */
	struct UHUD_CooldownWidget_C_SetHeightScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.OnAnimFadeoutFinished
	 */
	struct UHUD_CooldownWidget_C_OnAnimFadeoutFinished_Params
	{	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveUpdateProgress
	 */
	struct UHUD_CooldownWidget_C_ReceiveUpdateProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CooldownWidget.HUD_CooldownWidget_C.ExecuteUbergraph_HUD_CooldownWidget
	 */
	struct UHUD_CooldownWidget_C_ExecuteUbergraph_HUD_CooldownWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
