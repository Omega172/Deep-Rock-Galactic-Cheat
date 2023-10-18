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
	 * Function MENU_Loadout.MENU_Loadout_C.GetCharacter
	 */
	struct UMENU_Loadout_C_GetCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations
	 */
	struct UMENU_Loadout_C_PlayIntroAnimations_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.CheckForNotification
	 */
	struct UMENU_Loadout_C_CheckForNotification_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
	 */
	struct UMENU_Loadout_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
	 */
	struct UMENU_Loadout_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
	 */
	struct UMENU_Loadout_C_GetClassFromPlayerState_Params
	{
	public:
		class UPlayerCharacterID*                                  SelectedCharacter;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.PreConstruct
	 */
	struct UMENU_Loadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Construct
	 */
	struct UMENU_Loadout_C_Construct_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.OnShown
	 */
	struct UMENU_Loadout_C_OnShown_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Refresh
	 */
	struct UMENU_Loadout_C_Refresh_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	 */
	struct UMENU_Loadout_C_BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
	 */
	struct UMENU_Loadout_C_StopAnsel_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Start Ansel
	 */
	struct UMENU_Loadout_C_StartAnsel_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.OnClosed
	 */
	struct UMENU_Loadout_C_OnClosed_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
	 */
	struct UMENU_Loadout_C_RefreshLoadoutItems_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
	 */
	struct UMENU_Loadout_C_SetupLoadoutItems_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
	 */
	struct UMENU_Loadout_C_OnNewTopWindow_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
	 */
	struct UMENU_Loadout_C_ReceiveSelectCharacterCommand_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
	 */
	struct UMENU_Loadout_C_ReceiveSelectNextCommand_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
	 */
	struct UMENU_Loadout_C_ReceiveSelectPreviousCommand_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature
	 */
	struct UMENU_Loadout_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.LoadoutRefreshed
	 */
	struct UMENU_Loadout_C_LoadoutRefreshed_Params
	{	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
	 */
	struct UMENU_Loadout_C_OnUnhovered_Event_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.On Hovered
	 */
	struct UMENU_Loadout_C_OnHovered_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.Open Item Window
	 */
	struct UMENU_Loadout_C_OpenItemWindow_Params
	{
	public:
		class UITM_Loadout_ItemWindow_C*                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
	 */
	struct UMENU_Loadout_C_ExecuteUbergraph_MENU_Loadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
	 */
	struct UMENU_Loadout_C_CharacterSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
