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
	 * WidgetBlueprintGeneratedClass MENU_Loadout.MENU_Loadout_C
	 * Size -> 0x00B4 (FullSize[0x0354] - InheritedSize[0x02A0])
	 */
	class UMENU_Loadout_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_DragRotateCharacter_C*                          ITM_DragRotateCharacter;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CharacterSwitcherBar_C*                         ITM_Loadout_CharSelect;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_1;                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_2;                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_3;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_14;                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_15;                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_16;                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_ItemWindow_C*                           ITM_Loadout_ItemWindow_17;                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_PerksEquip_C*                           ITM_Loadout_PerksEquip;                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_LoadoutSelectorBar_C*                           ITM_LoadoutSelectorBar;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMENU_SpaceRigTemplate_C*                            MENU_SpaceRigTemplate;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RandomizeLoadoutWithUndo_C*                      UI_RandomizeLoadoutWithUndo;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Left;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Right;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CharacterSelected;                                       // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UITM_Loadout_ItemWindow_C*>                   LoadoutItems;                                            // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UITM_Loadout_ItemWindow_C*                           HoveredItem;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInAnimTime;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCharacter(class APlayerCharacter** Character);
		void PlayIntroAnimations();
		void CheckForNotification();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetClassFromPlayerState(class UPlayerCharacterID** SelectedCharacter);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnShown();
		void Refresh();
		void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character);
		void StopAnsel();
		void StartAnsel();
		void OnClosed();
		void RefreshLoadoutItems();
		void SetupLoadoutItems();
		void OnNewTopWindow();
		void ReceiveSelectCharacterCommand();
		void ReceiveSelectNextCommand();
		void ReceiveSelectPreviousCommand();
		void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature();
		void LoadoutRefreshed();
		void OnUnhovered_Event(class UITM_Loadout_ItemWindow_C* Item);
		void OnHovered(class UITM_Loadout_ItemWindow_C* Item);
		void OpenItemWindow(class UITM_Loadout_ItemWindow_C* Item);
		void ExecuteUbergraph_MENU_Loadout(int32_t EntryPoint);
		void CharacterSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
