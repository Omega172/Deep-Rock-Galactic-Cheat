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
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetDefault
	 */
	struct UHUD_AmmoCount_Holder_C_SetDefault_Params
	{	};

	/**
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetFromItem
	 */
	struct UHUD_AmmoCount_Holder_C_SetFromItem_Params
	{
	public:
		class AActor*                                              InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.Construct
	 */
	struct UHUD_AmmoCount_Holder_C_Construct_Params
	{	};

	/**
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemEquipped_Event
	 */
	struct UHUD_AmmoCount_Holder_C_OnItemEquipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemUnequipped_Event
	 */
	struct UHUD_AmmoCount_Holder_C_OnItemUnequipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.ExecuteUbergraph_HUD_AmmoCount_Holder
	 */
	struct UHUD_AmmoCount_Holder_C_ExecuteUbergraph_HUD_AmmoCount_Holder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
