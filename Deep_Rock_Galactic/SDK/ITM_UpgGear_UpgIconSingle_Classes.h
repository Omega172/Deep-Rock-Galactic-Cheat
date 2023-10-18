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
	 * WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C
	 * Size -> 0x008A (FullSize[0x02EA] - InheritedSize[0x0260])
	 */
	class UITM_UpgGear_UpgIconSingle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OnPurchased;                                             // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UITM_BaseUpgradeIcon_C*                              UpgradeIcon;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemUpgradeStatus                                         Status;                                                  // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LT6Q[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              itemClass;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsItemHovered;                                           // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_05R0[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpgradeHovered;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeUnhovered;                                      // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeClicked;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       OverrideStatus;                                          // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ShowEquippedAsBorder;                                    // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PURX[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerCharacterID*                                  CharacerID;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTOOLTIP_UpgradeIcon_C*                              IconToolTip;                                             // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowStatusOnTooltip;                                     // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TierLocked;                                              // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		class UWidget* Get_UpgradeIcon_ToolTip();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ToggleStatPreview(bool Preview);
		void GetTierLock(class AFSDPlayerState* InPlayerState, const struct FUpgradeTier& InTierUpgrades, int32_t* LockLevel, class UTexture2D** LockIcon, ENUM_MenuColors* LockBackgroundTint);
		void TryUnequipUpgrade(bool* success);
		void GetUpgradeCategory(class UItemUpgradeCategory** Category);
		class UTexture2D* GetUpgradeIcon();
		void GetGoogleAnalytics(class UItemUpgrade* Upgrade);
		bool IsInteractable();
		void GetTierStatus(const struct FUpgradeTier& InTier, int32_t InTierIndex, class UPlayerCharacterID* inCharacterID, class UClass* InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus* DefaultStatus);
		void IsTierIsAffordable(struct FUpgradeTier* TierUpgrades, class UClass* InItemClass, class AFSDPlayerState* InPlayer, class UClass* InCharacter, bool* IsAffordable);
		void ShowTier(class UClass* InItemClass, class UPlayerCharacterID* inCharacterID, int32_t InTierIndex, const struct FUpgradeTier& InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip);
		void GetPlayerState(class AFSDPlayerState** PlayerState);
		void GetItemClass(class UClass** itemClass);
		void GetItemUpgrade(class UItemUpgrade** Upgrade);
		void TryEquipUpgrade(bool* Equipped);
		void TryPurchaseUpgrade(bool* Purchased);
		void GetUpgradeStatus(EItemUpgradeStatus* Status);
		void Show(class UItemUpgrade* InUpgrade, class UClass* InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked);
		void Refresh();
		void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
		void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
		void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
		void RefreshToolTip();
		void PlayPurchasedAnim();
		void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32_t EntryPoint);
		void OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
		void OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
		void OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
