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
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth
	 */
	struct UScreenOverlay_HealthDamage_C_CheckForLowHealth_Params
	{
	public:
		float                                                      StartAnimTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat
	 */
	struct UScreenOverlay_HealthDamage_C_BeginSplat_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event
	 */
	struct UScreenOverlay_HealthDamage_C_OnDamageTaken_Event_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick
	 */
	struct UScreenOverlay_HealthDamage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged
	 */
	struct UScreenOverlay_HealthDamage_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat
	 */
	struct UScreenOverlay_HealthDamage_C_EndSplat_Params
	{	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct
	 */
	struct UScreenOverlay_HealthDamage_C_Construct_Params
	{	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged
	 */
	struct UScreenOverlay_HealthDamage_C_OnCameraModeChanged_Params
	{
	public:
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       OldCameraMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor
	 */
	struct UScreenOverlay_HealthDamage_C_UpdateBloodColor_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage
	 */
	struct UScreenOverlay_HealthDamage_C_OnUpdateHealthImage_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage
	 */
	struct UScreenOverlay_HealthDamage_C_ExecuteUbergraph_ScreenOverlay_HealthDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
