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
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode
	 */
	struct UHUD_TeamDisplay_Bosco_C_SetVisibilityIfVisibleMode_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
	 */
	struct UHUD_TeamDisplay_Bosco_C_UpdateReviveCharges_Params
	{
	public:
		int32_t                                                    CurrentCharges;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxCharges;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
	 */
	struct UHUD_TeamDisplay_Bosco_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
	 */
	struct UHUD_TeamDisplay_Bosco_C_Construct_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
	 */
	struct UHUD_TeamDisplay_Bosco_C_OnBoscoChanged_Params
	{
	public:
		class ABosco*                                              Bosco;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
	 */
	struct UHUD_TeamDisplay_Bosco_C_OnStateChanged_Params
	{
	public:
		EDroneAIState                                              aCurrentState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
	 */
	struct UHUD_TeamDisplay_Bosco_C_UpdateStateIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
	 */
	struct UHUD_TeamDisplay_Bosco_C_OnReviveused_Params
	{
	public:
		int32_t                                                    ReviveCount;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility
	 */
	struct UHUD_TeamDisplay_Bosco_C_UpdateHUDVisibility_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed
	 */
	struct UHUD_TeamDisplay_Bosco_C_OnLaserPointerPressed_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased
	 */
	struct UHUD_TeamDisplay_Bosco_C_OnLaserPointerReleased_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature
	 */
	struct UHUD_TeamDisplay_Bosco_C_BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHUDVisibilityMode                                         Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.FollowTargetChanged
	 */
	struct UHUD_TeamDisplay_Bosco_C_FollowTargetChanged_Params
	{
	public:
		class AActor*                                              FollowTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
	 */
	struct UHUD_TeamDisplay_Bosco_C_ExecuteUbergraph_HUD_TeamDisplay_Bosco_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_061K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
