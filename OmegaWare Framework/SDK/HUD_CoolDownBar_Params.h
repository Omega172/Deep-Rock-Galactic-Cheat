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
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
	 */
	struct UHUD_CoolDownBar_C_Initialize_Params
	{
	public:
		class UCoolDownItemAggregator*                             CoolDown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
	 */
	struct UHUD_CoolDownBar_C_Construct_Params
	{	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
	 */
	struct UHUD_CoolDownBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound
	 */
	struct UHUD_CoolDownBar_C_ProgressSound_Params
	{	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.On UnEquipped
	 */
	struct UHUD_CoolDownBar_C_OnUnEquipped_Params
	{	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnEquipped
	 */
	struct UHUD_CoolDownBar_C_OnEquipped_Params
	{	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnItemSet
	 */
	struct UHUD_CoolDownBar_C_OnItemSet_Params
	{	};

	/**
	 * Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
	 */
	struct UHUD_CoolDownBar_C_ExecuteUbergraph_HUD_CoolDownBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
