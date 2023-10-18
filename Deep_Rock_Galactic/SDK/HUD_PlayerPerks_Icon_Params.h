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
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration
	 */
	struct UHUD_PlayerPerks_Icon_C_GetCooldownDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6ZP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress
	 */
	struct UHUD_PlayerPerks_Icon_C_GetCoolDownProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X9ZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges
	 */
	struct UHUD_PlayerPerks_Icon_C_GetMaxUseCharges_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B1AB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges
	 */
	struct UHUD_PlayerPerks_Icon_C_GetRemainingUseCharges_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress
	 */
	struct UHUD_PlayerPerks_Icon_C_RefreshCounterAndProgress_Params
	{
	public:
		bool                                                       CoolDownActive;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TAL5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter
	 */
	struct UHUD_PlayerPerks_Icon_C_SetCounter_Params
	{
	public:
		int32_t                                                    InCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress
	 */
	struct UHUD_PlayerPerks_Icon_C_SetProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutProgress;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B
	 */
	struct UHUD_PlayerPerks_Icon_C_OnTick_64B6D09E4CB7705CDF68E9949787003B_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NormalizedTime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B
	 */
	struct UHUD_PlayerPerks_Icon_C_Completed_64B6D09E4CB7705CDF68E9949787003B_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NormalizedTime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged
	 */
	struct UHUD_PlayerPerks_Icon_C_ReceivePerkAssetChanged_Params
	{	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct
	 */
	struct UHUD_PlayerPerks_Icon_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished
	 */
	struct UHUD_PlayerPerks_Icon_C_OnAnimCoolDownFinished_Params
	{	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down
	 */
	struct UHUD_PlayerPerks_Icon_C_BeginCoolDown_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct
	 */
	struct UHUD_PlayerPerks_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges
	 */
	struct UHUD_PlayerPerks_Icon_C_RefreshUseCharges_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick
	 */
	struct UHUD_PlayerPerks_Icon_C_CoolDownTick_Params
	{	};

	/**
	 * Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon
	 */
	struct UHUD_PlayerPerks_Icon_C_ExecuteUbergraph_HUD_PlayerPerks_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7V8H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
