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
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ResetCheats
	 */
	struct ABP_PlayerController_SpaceRig_C_ResetCheats_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetEscapeMenu
	 */
	struct ABP_PlayerController_SpaceRig_C_GetEscapeMenu_Params
	{
	public:
		class UEscapeMenuWindow*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ModdedSavegameCheck
	 */
	struct ABP_PlayerController_SpaceRig_C_ModdedSavegameCheck_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Change Savegame
	 */
	struct ABP_PlayerController_SpaceRig_C_ChangeSavegame_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetMissionSelect
	 */
	struct ABP_PlayerController_SpaceRig_C_GetMissionSelect_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetPopupCrafting
	 */
	struct ABP_PlayerController_SpaceRig_C_GetPopupCrafting_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetCrafting
	 */
	struct ABP_PlayerController_SpaceRig_C_GetCrafting_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets
	 */
	struct ABP_PlayerController_SpaceRig_C_PreloadAssets_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
	 */
	struct ABP_PlayerController_SpaceRig_C_hudVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
	 */
	struct ABP_PlayerController_SpaceRig_C_ChangeHUDVisible_Params
	{
	public:
		bool                                                       IsHUDVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHUDVisibilityReason                                       reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I1CW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
	 */
	struct ABP_PlayerController_SpaceRig_C_SelectLastPlayedCharacter_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
	 */
	struct ABP_PlayerController_SpaceRig_C_AddWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ZOrder;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           InVisibility;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5RIV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
	 */
	struct ABP_PlayerController_SpaceRig_C_ChangeCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
	 */
	struct ABP_PlayerController_SpaceRig_C_CreateUI_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_MenuButton_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Chat_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_CallDonkey_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_MapTool_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_7
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Subtract_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_6
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_5
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_4
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_3
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_2
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_CtrlAlt_H_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLoaded_0C1A95084D16C934A469CF8C3B445101
	 */
	struct ABP_PlayerController_SpaceRig_C_OnLoaded_0C1A95084D16C934A469CF8C3B445101_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A
	 */
	struct ABP_PlayerController_SpaceRig_C_OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A
	 */
	struct ABP_PlayerController_SpaceRig_C_OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Home_K2Node_InputKeyEvent_1
	 */
	struct ABP_PlayerController_SpaceRig_C_InpActEvt_Home_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180
	 */
	struct ABP_PlayerController_SpaceRig_C_OnFailure_FD5D0BC24D561288D20ABE9353DBA180_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180
	 */
	struct ABP_PlayerController_SpaceRig_C_OnSuccess_FD5D0BC24D561288D20ABE9353DBA180_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowServerBrowser_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowMissionSelect_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
	 */
	struct ABP_PlayerController_SpaceRig_C_Client_OpenMap_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
	 */
	struct ABP_PlayerController_SpaceRig_C_PlayerChangeCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
	 */
	struct ABP_PlayerController_SpaceRig_C_RecievePreClientTravel_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCharacterSelect_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
	 */
	struct ABP_PlayerController_SpaceRig_C_ControllerReady_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
	 */
	struct ABP_PlayerController_SpaceRig_C_RecieveOnControllerReady_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowBuyItemPopup_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
	 */
	struct ABP_PlayerController_SpaceRig_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
	 */
	struct ABP_PlayerController_SpaceRig_C_OnCharacterPossesd_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerController_SpaceRig_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCharCustomization_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCrafting_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCharacterScreenAndWorld_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCraftingAndWorld_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCustomizationAndWorld_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
	 */
	struct ABP_PlayerController_SpaceRig_C_SpawnPlayer_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowFirstCharacterSelect_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
	 */
	struct ABP_PlayerController_SpaceRig_C_OpenCharacterSelector_Params
	{
	public:
		bool                                                       OpenVideo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowBack;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowReconnectController_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
	 */
	struct ABP_PlayerController_SpaceRig_C_OnFirstWindowOpened_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
	 */
	struct ABP_PlayerController_SpaceRig_C_OnLastWindowClosed_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowNetworkError_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowTrading_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowWindowByClass_Params
	{
	public:
		class UClass*                                              WindowClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ZOrder;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCheatMenu_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowBarMenu_Params
	{
	public:
		class ASpaceRigBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
	 */
	struct ABP_PlayerController_SpaceRig_C_OnRoundSelected_Event_Params
	{
	public:
		class ASpaceRigBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDrinkableDataAsset*                                 RequestedDrink;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
	 */
	struct ABP_PlayerController_SpaceRig_C_OrderBarRound_Params
	{
	public:
		class ASpaceRigBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDrinkableDataAsset*                                 Drink;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
	 */
	struct ABP_PlayerController_SpaceRig_C_DeductCreditsOnClient_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowJobs_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowItemUpgradeScreen_Params
	{
	public:
		class UClass*                                              CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              itemClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              ItemCategory;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowBoscoUpgrades_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
	 */
	struct ABP_PlayerController_SpaceRig_C_OnPlayerSpawnBegin_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave
	 */
	struct ABP_PlayerController_SpaceRig_C_OnDroppodLeave_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop
	 */
	struct ABP_PlayerController_SpaceRig_C_PlayerThrewMugInHoop_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong
	 */
	struct ABP_PlayerController_SpaceRig_C_PlayerPlayedEntireSong_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole
	 */
	struct ABP_PlayerController_SpaceRig_C_HandleDiscordConsole_Params
	{
	public:
		class ABP_DiscordConsole_C*                                DiscordConsole;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord
	 */
	struct ABP_PlayerController_SpaceRig_C_SetUsableDiscord_Params
	{
	public:
		bool                                                       Usable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowDeepDives_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole
	 */
	struct ABP_PlayerController_SpaceRig_C_OpenSpacerigConsole_Params
	{
	public:
		class ABP_BaseSpaceRigConsole_C*                           Console;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector
	 */
	struct ABP_PlayerController_SpaceRig_C_SetHasShownCharacterSelector_Params
	{
	public:
		bool                                                       HasShown;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
	 */
	struct ABP_PlayerController_SpaceRig_C_SetIsEscapeMenuEnabled_Params
	{
	public:
		bool                                                       IsEscapeMenuEnabled;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location
	 */
	struct ABP_PlayerController_SpaceRig_C_ResetPlayerLocation_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients
	 */
	struct ABP_PlayerController_SpaceRig_C_ResetPlayerScaleOnClients_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction
	 */
	struct ABP_PlayerController_SpaceRig_C_Server_PopLooatAtAffliction_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowLookAtConsole_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial
	 */
	struct ABP_PlayerController_SpaceRig_C_LaunchTutorial_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial
	 */
	struct ABP_PlayerController_SpaceRig_C_PromptLaunchTutorial_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt
	 */
	struct ABP_PlayerController_SpaceRig_C_OnPrompt_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowCharacterSelectionBackground_Params
	{
	public:
		bool                                                       resetToDefaultWeapon;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECharselectionCameraLocation                               cameraLocation;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowForgeWorkshop_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReloadSpacerig
	 */
	struct ABP_PlayerController_SpaceRig_C_ReloadSpacerig_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartGame
	 */
	struct ABP_PlayerController_SpaceRig_C_OnRestartGame_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CreateModdedSave;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartSpacerig
	 */
	struct ABP_PlayerController_SpaceRig_C_OnRestartSpacerig_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CreateModdedSave;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPackageMounted
	 */
	struct ABP_PlayerController_SpaceRig_C_OnPackageMounted_Params
	{
	public:
		bool                                                       Sandbox;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayer
	 */
	struct ABP_PlayerController_SpaceRig_C_OnPlayer_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowEscapeMenu
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowEscapeMenu_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManual
	 */
	struct ABP_PlayerController_SpaceRig_C_OpenStandaloneMinersManual_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M6AT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ID;                                                      // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManualPage
	 */
	struct ABP_PlayerController_SpaceRig_C_OpenStandaloneMinersManualPage_Params
	{
	public:
		EMinersManualSinglePage                                    page;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
	 */
	struct ABP_PlayerController_SpaceRig_C_Back_Event_1_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
	 */
	struct ABP_PlayerController_SpaceRig_C_OnCharacterSelected_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
	 */
	struct ABP_PlayerController_SpaceRig_C_OnHostTimerChanged_Params
	{
	public:
		float                                                      newTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
	 */
	struct ABP_PlayerController_SpaceRig_C_OnMissionTimerChanged_Params
	{
	public:
		float                                                      newTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
	 */
	struct ABP_PlayerController_SpaceRig_C_DoCountDown_Params
	{
	public:
		float                                                      newTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
	 */
	struct ABP_PlayerController_SpaceRig_C_ShowReconnect_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
	 */
	struct ABP_PlayerController_SpaceRig_C_OnGravityChanged_Params
	{
	public:
		float                                                      CurrentGravity;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1
	 */
	struct ABP_PlayerController_SpaceRig_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
	 */
	struct ABP_PlayerController_SpaceRig_C_ExecuteUbergraph_BP_PlayerController_SpaceRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature
	 */
	struct ABP_PlayerController_SpaceRig_C_OnCheatRequested__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature
	 */
	struct ABP_PlayerController_SpaceRig_C_OnOpenedEscapeMenu__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
	 */
	struct ABP_PlayerController_SpaceRig_C_OnToggleHUD__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
