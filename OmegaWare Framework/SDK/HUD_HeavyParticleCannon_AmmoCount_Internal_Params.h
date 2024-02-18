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
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalChanged
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnTotalChanged_Params
	{
	public:
		int32_t                                                    Total;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnAmountChanged
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnAmountChanged_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnVisibleChanged
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnVisibleChanged_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       showClipCount;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalVisibleChanged
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnTotalVisibleChanged_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.PreConstruct
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.SetData
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_SetData_Params
	{
	public:
		int32_t                                                    ClipSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReloadDuration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnReloadTimeChanged_Event
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnReloadTimeChanged_Event_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_Internal_C_ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
