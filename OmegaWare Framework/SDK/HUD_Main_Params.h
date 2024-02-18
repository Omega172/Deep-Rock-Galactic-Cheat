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
	 * Function HUD_Main.HUD_Main_C.Get_TEMPtestSeedText_Text_1
	 */
	struct UHUD_Main_C_Get_TEMPtestSeedText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.ToggleHUD
	 */
	struct UHUD_Main_C_ToggleHUD_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instant;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.Construct
	 */
	struct UHUD_Main_C_Construct_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.Tick
	 */
	struct UHUD_Main_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.Destruct
	 */
	struct UHUD_Main_C_Destruct_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.AllDwarvesDown
	 */
	struct UHUD_Main_C_AllDwarvesDown_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.OnCameraModeChanged
	 */
	struct UHUD_Main_C_OnCameraModeChanged_Params
	{
	public:
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       OldCameraMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
	 */
	struct UHUD_Main_C_UpdateCurrentCanvas_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
	 */
	struct UHUD_Main_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.Setup HUD Elements
	 */
	struct UHUD_Main_C_SetupHUDElements_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.PushEvent
	 */
	struct UHUD_Main_C_PushEvent_Params
	{
	public:
		class UWidget*                                             eventWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.PopEvent
	 */
	struct UHUD_Main_C_PopEvent_Params
	{
	public:
		class UWidget*                                             eventWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_Main_C_BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_Main_C_BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_Main_C_BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
	 */
	struct UHUD_Main_C_BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main.HUD_Main_C.RefreshHUDElements
	 */
	struct UHUD_Main_C_RefreshHUDElements_Params
	{	};

	/**
	 * Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
	 */
	struct UHUD_Main_C_ExecuteUbergraph_HUD_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
