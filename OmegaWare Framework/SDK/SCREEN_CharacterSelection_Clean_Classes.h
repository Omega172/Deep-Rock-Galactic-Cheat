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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C
	 * Size -> 0x00B2 (FullSize[0x036A] - InheritedSize[0x02B8])
	 */
	class USCREEN_CharacterSelection_Clean_C : public USCREEN_CharacterSelection_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          ButtonsGoHere;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharSelect_HeroSelect_Clean_C*                      CharSelect_HeroSelect;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassDescription;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            CloseButton;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 Controller_Left;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 Controller_Right;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Menu_SmallWindowWithHeader_C*                 DescriptionWindow;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITEM_CharacterSelectMovie_C*                        ITEM_CharacterSelectMovie;                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Challenge_InfoBox_C*                            ITM_Challenge_InfoBox;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DragRotateCharacter_C*                          ITM_DragRotateCharacter;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_LoadoutSelectorBar_C*                           ITM_LoadoutSelectorBar;                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULobby_BarTop_Countdown_C*                           Lobby_BarTop_Countdown;                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           PlatformSafeZone;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScreen_CharacterInfo_C*                             Screen_CharacterInfo;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SelectionBox_Active;                                     // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 SelectionBox_Text;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CharacterSelected;                                       // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoSelectedShouts;                                        // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DoMovie;                                                 // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowBack;                                               // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3TJF[0x5];                                   // 0x035B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerCharacterID*                                  InitialCharacterClassOnShow;                             // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingClosed;                                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnCloseMenuHasBeenHandled;                               // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HighlightClassChallenges(TArray<class UObject*>* AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnCloseMenuReleased(bool* Handled);
		class UPlayerCharacterID* GetSelectedClass();
		void OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE();
		void OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE();
		void Construct();
		void BackPressed();
		void OnInputSourceChanged(EFSDInputSource InputSource);
		void OnSelectedCharacterChanged_Event(class UClass* NewCharacter);
		void PreConstruct(bool IsDesignTime);
		void UpdateCharacterDescription(class UPlayerCharacterID* CharacterClass);
		void ReceiveNewVisibility(ESlateVisibility NewVisibility);
		void OnShown();
		void OnClosed();
		void CreateMovie();
		void StopMovie();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void ReceiveCloseCommand();
		void OnNewLoadout();
		void Show();
		void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
		void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
		void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32_t EntryPoint);
		void CharacterSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
