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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
	 * Size -> 0x0177 (FullSize[0x08D0] - InheritedSize[0x0759])
	 */
	class ABP_PlayerController_SpaceRig_C : public ABP_SR_PlayerControllerBase_C
	{
	public:
		unsigned char                                              UnknownData_H4UU[0x7];                                   // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0760(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWindowWidget*                                       ServerBrowser;                                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMENU_Loadout_C*                                     Loadout;                                                 // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEscapeMenuWindow*                                   options;                                                 // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       MissionSelect;                                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OldCounter;                                              // 0x0788(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CMPK[0x4];                                   // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 Widgets;                                                 // 0x0790(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UPopup_GearUpgrade_Buy_C*                            PopUp_BuyUpgrade;                                        // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x07A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CharacterPossed;                                         // 0x07B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OSH3[0x3];                                   // 0x07B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnToggleHUD;                                             // 0x07B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWindowWidget*                                       CharCustomization;                                       // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       Crafting;                                                // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       Popup_Crafting;                                          // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowingReconnectcontroller;                              // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHUDVisible;                                            // 0x07E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7IRV[0x6];                                   // 0x07E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USCREEN_CharacterSelection_Clean_C*                  CharacterSelection;                                      // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasShownCharacterSelector;                               // 0x07F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JUZC[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindowWidget*                                       ReconnectController;                                     // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       NetworkError;                                            // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       Trading;                                                 // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       Cheat;                                                   // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       Jobs;                                                    // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWND_AssignmentMissionComplete_C*                    C;                                                       // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       RetirementPopup_1;                                       // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMENU_UpgradeScreen_C*                               ItemUpgrade;                                             // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EscapeMenuEnabled;                                       // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6V72[0x7];                                   // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindowWidget*                                       Bosco;                                                   // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Medbayspeechcounter;                                     // 0x0848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timebetweenshouts;                                       // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MixerConfettiTime;                                       // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SV1U[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScaledEffect                                       MixerConfetti;                                           // 0x0858(0x0010) Edit, BlueprintVisible, NoDestructor
		class UFSDAchievement*                                     SelfControlAchievement;                                  // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasKickedABarrel;                                        // 0x0870(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5I2[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDAchievement*                                     MugInHoopAchievement;                                    // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFSDAchievement*                                     DiscJockeyAchievement;                                   // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUseInstantUsableDiscord;                              // 0x0888(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SK5R[0x7];                                   // 0x0889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindowWidget*                                       DeepDives;                                               // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSoftObjectPath>                             UIToAsyncLoad;                                           // 0x0898(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnOpenedEscapeMenu;                                      // 0x08A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CheatCounter;                                            // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TYG8[0x4];                                   // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheatRequested;                                        // 0x08C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ResetCheats();
		class UEscapeMenuWindow* GetEscapeMenu();
		void ModdedSavegameCheck();
		void ChangeSavegame();
		void GetMissionSelect(class UWindowWidget** Widget);
		void GetPopupCrafting(class UWindowWidget** Widget);
		void GetCrafting(class UWindowWidget** Widget);
		void PreloadAssets();
		bool hudVisible();
		void ChangeHUDVisible(bool IsHUDVisible, EHUDVisibilityReason reason);
		void SelectLastPlayedCharacter();
		void AddWidget(class UUserWidget** Widget, int32_t ZOrder, ESlateVisibility InVisibility);
		void ChangeCharacter(class UPlayerCharacterID* NewCharacter);
		void CreateUI();
		void InpActEvt_PushToTalk_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_MenuButton_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Chat_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CallDonkey_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Subtract_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_Eight_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Eight_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Nine_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Nine_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_CtrlAlt_H_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void OnLoaded_0C1A95084D16C934A469CF8C3B445101(class UClass* Loaded);
		void OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A();
		void OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A();
		void InpActEvt_Home_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnFailure_FD5D0BC24D561288D20ABE9353DBA180();
		void OnSuccess_FD5D0BC24D561288D20ABE9353DBA180();
		void ShowServerBrowser();
		void ShowMissionSelect();
		void Client_OpenMap();
		void PlayerChangeCharacter(class UPlayerCharacterID* NewCharacter);
		void RecievePreClientTravel();
		void ShowCharacterSelect();
		void ControllerReady();
		void RecieveOnControllerReady();
		void ShowBuyItemPopup(class UClass* Item, class UItemUpgrade* Upgrade);
		void ReceiveDestroyed();
		void OnCharacterPossesd(class APawn* Pawn);
		void ReceiveBeginPlay();
		void ShowCharCustomization();
		void ShowCrafting();
		void ShowCharacterScreenAndWorld();
		void ShowCraftingAndWorld();
		void ShowCustomizationAndWorld();
		void SpawnPlayer();
		void ShowFirstCharacterSelect();
		void OpenCharacterSelector(bool OpenVideo, bool AllowBack);
		void ShowReconnectController();
		void OnFirstWindowOpened();
		void OnLastWindowClosed();
		void ShowNetworkError();
		void ShowTrading();
		void ShowWindowByClass(class UClass* WindowClass, int32_t ZOrder);
		void ShowCheatMenu();
		void ShowBarMenu(class ASpaceRigBar* Bar);
		void OnRoundSelected_Event(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
		void OrderBarRound(class ASpaceRigBar* Bar, class UDrinkableDataAsset* Drink);
		void DeductCreditsOnClient(int32_t Amount);
		void ShowJobs();
		void ShowItemUpgradeScreen(class UClass* CharacterClass, class UClass* itemClass, EItemCategory ItemCategory);
		void ShowBoscoUpgrades();
		void OnPlayerSpawnBegin(int32_t PlayerId);
		void OnDroppodLeave();
		void PlayerThrewMugInHoop();
		void PlayerPlayedEntireSong();
		void HandleDiscordConsole(class ABP_DiscordConsole_C* DiscordConsole);
		void SetUsableDiscord(bool Usable);
		void ShowDeepDives();
		void OpenSpacerigConsole(class ABP_BaseSpaceRigConsole_C* Console);
		void SetHasShownCharacterSelector(bool HasShown);
		void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
		void ResetPlayerLocation();
		void ResetPlayerScaleOnClients();
		void Server_PopLooatAtAffliction();
		void ShowLookAtConsole();
		void LaunchTutorial();
		void PromptLaunchTutorial();
		void OnPrompt(bool Yes);
		void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation);
		void ShowForgeWorkshop();
		void ReloadSpacerig();
		void OnRestartGame(bool Yes, bool CreateModdedSave);
		void OnRestartSpacerig(bool Yes, bool CreateModdedSave);
		void OnPackageMounted(bool Sandbox);
		void OnPlayer(class AFSDPlayerState* PlayerState);
		void ShowEscapeMenu();
		void OpenStandaloneMinersManual(EMinersManualSection Section, const struct FGuid& ID);
		void OpenStandaloneMinersManualPage(EMinersManualSinglePage page);
		void Back_Event_1();
		void OnCharacterSelected();
		void OnHostTimerChanged(float newTime);
		void OnMissionTimerChanged(float newTime);
		void DoCountDown(float newTime);
		void ShowReconnect(bool Show);
		void OnGravityChanged(float CurrentGravity, float Change);
		void CustomEvent_1();
		void ExecuteUbergraph_BP_PlayerController_SpaceRig(int32_t EntryPoint);
		void OnCheatRequested__DelegateSignature();
		void OnOpenedEscapeMenu__DelegateSignature();
		void OnToggleHUD__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
