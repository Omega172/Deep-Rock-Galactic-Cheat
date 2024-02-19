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
	 * Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIsActiveArrow
	 */
	struct UHUD_Crossbow_AmmoCount_Row_C_SetIsActiveArrow_Params
	{
	public:
		bool                                                       Inactive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1FJW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetAmmoCount
	 */
	struct UHUD_Crossbow_AmmoCount_Row_C_SetAmmoCount_Params
	{
	public:
		int32_t                                                    InAmmoCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRRJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIcon
	 */
	struct UHUD_Crossbow_AmmoCount_Row_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.PreConstruct
	 */
	struct UHUD_Crossbow_AmmoCount_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row
	 */
	struct UHUD_Crossbow_AmmoCount_Row_C_ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
