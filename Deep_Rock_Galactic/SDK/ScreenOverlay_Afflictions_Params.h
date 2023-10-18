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
	 * Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget
	 */
	struct UScreenOverlay_Afflictions_C_FindOverlayWidget_Params
	{
	public:
		class UPlayerAfflictionOverlay*                            OverlayData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CreateIfNew;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AVQI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerAfflictionOverlayWidget*                      OutWidget;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct
	 */
	struct UScreenOverlay_Afflictions_C_Construct_Params
	{	};

	/**
	 * Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event
	 */
	struct UScreenOverlay_Afflictions_C_OnShowOverlay_Event_Params
	{
	public:
		class UPlayerAfflictionOverlay*                            Overlay;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event
	 */
	struct UScreenOverlay_Afflictions_C_OnHideOverlay_Event_Params
	{
	public:
		class UPlayerAfflictionOverlay*                            Overlay;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions
	 */
	struct UScreenOverlay_Afflictions_C_ExecuteUbergraph_ScreenOverlay_Afflictions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
