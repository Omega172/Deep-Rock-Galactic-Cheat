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
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged
	 */
	struct UHUD_AmmoCount_C_OnTotalChanged_Params
	{
	public:
		int32_t                                                    Total;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged
	 */
	struct UHUD_AmmoCount_C_OnAmountChanged_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged
	 */
	struct UHUD_AmmoCount_C_OnVisibleChanged_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       showClipCount;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.Construct
	 */
	struct UHUD_AmmoCount_C_Construct_Params
	{	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged
	 */
	struct UHUD_AmmoCount_C_OnTotalVisibleChanged_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct
	 */
	struct UHUD_AmmoCount_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount
	 */
	struct UHUD_AmmoCount_C_ExecuteUbergraph_HUD_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
