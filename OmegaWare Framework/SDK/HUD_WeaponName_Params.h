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
	 * Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel
	 */
	struct UHUD_WeaponName_C_UpdateLabel_Params
	{	};

	/**
	 * Function HUD_WeaponName.HUD_WeaponName_C.Construct
	 */
	struct UHUD_WeaponName_C_Construct_Params
	{	};

	/**
	 * Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped
	 */
	struct UHUD_WeaponName_C_OnItemEquipped_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct
	 */
	struct UHUD_WeaponName_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName
	 */
	struct UHUD_WeaponName_C_ExecuteUbergraph_HUD_WeaponName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
