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
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged
	 */
	struct UHUD_Armor_Base_C_ArmorChanged_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component
	 */
	struct UHUD_Armor_Base_C_BindToHealthComponent_Params
	{
	public:
		class UHealthComponent*                                    HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct
	 */
	struct UHUD_Armor_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component
	 */
	struct UHUD_Armor_Base_C_UnbindHealthComponent_Params
	{	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct
	 */
	struct UHUD_Armor_Base_C_SetArmorPct_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player
	 */
	struct UHUD_Armor_Base_C_BindToPlayer_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base
	 */
	struct UHUD_Armor_Base_C_ExecuteUbergraph_HUD_Armor_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
