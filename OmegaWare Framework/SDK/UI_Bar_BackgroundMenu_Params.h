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
	 * Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
	 */
	struct UUI_Bar_BackgroundMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
	 */
	struct UUI_Bar_BackgroundMenu_C_SetBartender_Params
	{
	public:
		class ABP_SpaceRig_Bartender_C*                            InBartender;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
	 */
	struct UUI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
	 */
	struct UUI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
	 */
	struct UUI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature_Params
	{
	public:
		class ASpaceRigBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDrinkableDataAsset*                                 RequestedDrink;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
