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
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.EquipRandomItems
	 */
	struct U_MENU_Wardrobe_C_EquipRandomItems_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.PlayIntroAnimations
	 */
	struct U_MENU_Wardrobe_C_PlayIntroAnimations_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.CheckArmorMasteryUnlocks
	 */
	struct U_MENU_Wardrobe_C_CheckArmorMasteryUnlocks_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.InitSlotColumn
	 */
	struct U_MENU_Wardrobe_C_InitSlotColumn_Params
	{
	public:
		class UPanelWidget*                                        InBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UITM_Wardrobe_ItemSelector_C*                        InSelector;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InLeftSide;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1OQS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.RefreshSlots
	 */
	struct U_MENU_Wardrobe_C_RefreshSlots_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.ReleaseRenderTargets
	 */
	struct U_MENU_Wardrobe_C_ReleaseRenderTargets_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.OnKeyUp
	 */
	struct U_MENU_Wardrobe_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.GetCharacter
	 */
	struct U_MENU_Wardrobe_C_GetCharacter_Params
	{
	public:
		bool                                                       IgnorePreviewCharacter;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HH4Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerCharacter*                                    Character;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
	 */
	struct U_MENU_Wardrobe_C_BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.ReceiveCloseCommand
	 */
	struct U_MENU_Wardrobe_C_ReceiveCloseCommand_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.PreConstruct
	 */
	struct U_MENU_Wardrobe_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.OnShown
	 */
	struct U_MENU_Wardrobe_C_OnShown_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	 */
	struct U_MENU_Wardrobe_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
	 */
	struct U_MENU_Wardrobe_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.Refresh
	 */
	struct U_MENU_Wardrobe_C_Refresh_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.SetCharacter
	 */
	struct U_MENU_Wardrobe_C_SetCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.OnClosed
	 */
	struct U_MENU_Wardrobe_C_OnClosed_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.Construct
	 */
	struct U_MENU_Wardrobe_C_Construct_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.OnEquippedChanged_Event_1
	 */
	struct U_MENU_Wardrobe_C_OnEquippedChanged_Event_1_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.LoadoutRefreshed
	 */
	struct U_MENU_Wardrobe_C_LoadoutRefreshed_Params
	{	};

	/**
	 * Function _MENU_Wardrobe._MENU_Wardrobe_C.ExecuteUbergraph__MENU_Wardrobe
	 */
	struct U_MENU_Wardrobe_C_ExecuteUbergraph__MENU_Wardrobe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
