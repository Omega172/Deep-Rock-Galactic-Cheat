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
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.GetArrowIcon
	 */
	struct UHUD_Crossbow_AmmoCount_C_GetArrowIcon_Params
	{
	public:
		bool                                                       InDefaultArrow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VX1I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          OutTexture;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutValid;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYFK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Refresh
	 */
	struct UHUD_Crossbow_AmmoCount_C_Refresh_Params
	{	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Finished_7D5D15E24B34D3D4466E3BA129F1FC49
	 */
	struct UHUD_Crossbow_AmmoCount_C_Finished_7D5D15E24B34D3D4466E3BA129F1FC49_Params
	{	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ReceiveItemSet
	 */
	struct UHUD_Crossbow_AmmoCount_C_ReceiveItemSet_Params
	{	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnAmmoCountChanged
	 */
	struct UHUD_Crossbow_AmmoCount_C_OnAmmoCountChanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnArrowTypeChanged
	 */
	struct UHUD_Crossbow_AmmoCount_C_OnArrowTypeChanged_Params
	{
	public:
		bool                                                       InDefaultArrow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.PreConstruct
	 */
	struct UHUD_Crossbow_AmmoCount_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount
	 */
	struct UHUD_Crossbow_AmmoCount_C_ExecuteUbergraph_HUD_Crossbow_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
