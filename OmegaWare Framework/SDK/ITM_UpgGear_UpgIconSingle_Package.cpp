/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_UpgGear_UpgIconSingle_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown");
		
		UITM_UpgGear_UpgIconSingle_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_UpgGear_UpgIconSingle_C::Get_UpgradeIcon_ToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip");
		
		UITM_UpgGear_UpgIconSingle_C_Get_UpgradeIcon_ToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_UpgGear_UpgIconSingle_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown");
		
		UITM_UpgGear_UpgIconSingle_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::ToggleStatPreview(bool Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview");
		
		UITM_UpgGear_UpgIconSingle_C_ToggleStatPreview_Params params {};
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUpgradeTier                                InTierUpgrades                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            LockLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  LockIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    LockBackgroundTint                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetTierLock(class AFSDPlayerState* InPlayerState, const struct FUpgradeTier& InTierUpgrades, int32_t* LockLevel, class UTexture2D** LockIcon, ENUM_MenuColors* LockBackgroundTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock");
		
		UITM_UpgGear_UpgIconSingle_C_GetTierLock_Params params {};
		params.InPlayerState = InPlayerState;
		params.InTierUpgrades = InTierUpgrades;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LockLevel != nullptr)
			*LockLevel = params.LockLevel;
		if (LockIcon != nullptr)
			*LockIcon = params.LockIcon;
		if (LockBackgroundTint != nullptr)
			*LockBackgroundTint = params.LockBackgroundTint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::TryUnequipUpgrade(bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade");
		
		UITM_UpgGear_UpgIconSingle_C_TryUnequipUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgradeCategory*                        Category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetUpgradeCategory(class UItemUpgradeCategory** Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory");
		
		UITM_UpgGear_UpgIconSingle_C_GetUpgradeCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UITM_UpgGear_UpgIconSingle_C::GetUpgradeIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon");
		
		UITM_UpgGear_UpgIconSingle_C_GetUpgradeIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetGoogleAnalytics(class UItemUpgrade* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics");
		
		UITM_UpgGear_UpgIconSingle_C_GetGoogleAnalytics_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UITM_UpgGear_UpgIconSingle_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable");
		
		UITM_UpgGear_UpgIconSingle_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeTier                                InTier                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InTierIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          InCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemUpgradeStatus                                 DefaultStatus                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetTierStatus(const struct FUpgradeTier& InTier, int32_t InTierIndex, class UPlayerCharacterID* InCharacterID, class UClass* InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus* DefaultStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus");
		
		UITM_UpgGear_UpgIconSingle_C_GetTierStatus_Params params {};
		params.InTier = InTier;
		params.InTierIndex = InTierIndex;
		params.InCharacterID = InCharacterID;
		params.InItem = InItem;
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultStatus != nullptr)
			*DefaultStatus = params.DefaultStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeTier                                TierUpgrades                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAffordable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::IsTierIsAffordable(struct FUpgradeTier* TierUpgrades, class UClass* InItemClass, class AFSDPlayerState* InPlayer, class UClass* InCharacter, bool* IsAffordable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable");
		
		UITM_UpgGear_UpgIconSingle_C_IsTierIsAffordable_Params params {};
		params.InItemClass = InItemClass;
		params.InPlayer = InPlayer;
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TierUpgrades != nullptr)
			*TierUpgrades = params.TierUpgrades;
		if (IsAffordable != nullptr)
			*IsAffordable = params.IsAffordable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          InCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTierIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUpgradeTier                                InTier                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InShowLockRequirement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowToolTip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::ShowTier(class UClass* InItemClass, class UPlayerCharacterID* InCharacterID, int32_t InTierIndex, const struct FUpgradeTier& InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier");
		
		UITM_UpgGear_UpgIconSingle_C_ShowTier_Params params {};
		params.InItemClass = InItemClass;
		params.InCharacterID = InCharacterID;
		params.InTierIndex = InTierIndex;
		params.InTier = InTier;
		params.InPlayerState = InPlayerState;
		params.InShowLockRequirement = InShowLockRequirement;
		params.ShowToolTip = ShowToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetPlayerState(class AFSDPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState");
		
		UITM_UpgGear_UpgIconSingle_C_GetPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetItemClass(class UClass** itemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass");
		
		UITM_UpgGear_UpgIconSingle_C_GetItemClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemClass != nullptr)
			*itemClass = params.itemClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Upgrade                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetItemUpgrade(class UItemUpgrade** Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade");
		
		UITM_UpgGear_UpgIconSingle_C_GetItemUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Upgrade != nullptr)
			*Upgrade = params.Upgrade;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::TryEquipUpgrade(bool* Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade");
		
		UITM_UpgGear_UpgIconSingle_C_TryEquipUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipped != nullptr)
			*Equipped = params.Equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Purchased                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::TryPurchaseUpgrade(bool* Purchased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade");
		
		UITM_UpgGear_UpgIconSingle_C_TryPurchaseUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Purchased != nullptr)
			*Purchased = params.Purchased;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemUpgradeStatus                                 Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::GetUpgradeStatus(EItemUpgradeStatus* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus");
		
		UITM_UpgGear_UpgIconSingle_C_GetUpgradeStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Status != nullptr)
			*Status = params.Status;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                InUpgrade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          PlayerCharacterID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowEquipAsBorder                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InTierLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_UpgIconSingle_C::Show(class UItemUpgrade* InUpgrade, class UClass* InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show");
		
		UITM_UpgGear_UpgIconSingle_C_Show_Params params {};
		params.InUpgrade = InUpgrade;
		params.InItemClass = InItemClass;
		params.PlayerCharacterID = PlayerCharacterID;
		params.InPlayerState = InPlayerState;
		params.ShowEquipAsBorder = ShowEquipAsBorder;
		params.InTierLocked = InTierLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_UpgIconSingle_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh");
		
		UITM_UpgGear_UpgIconSingle_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_UpgIconSingle_C::RefreshToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip");
		
		UITM_UpgGear_UpgIconSingle_C_RefreshToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_UpgIconSingle_C::PlayPurchasedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim");
		
		UITM_UpgGear_UpgIconSingle_C_PlayPurchasedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle");
		
		UITM_UpgGear_UpgIconSingle_C_ExecuteUbergraph_ITM_UpgGear_UpgIconSingle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_OnUpgradeClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_OnUpgradeUnhovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_UpgIconSingle_C::OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature");
		
		UITM_UpgGear_UpgIconSingle_C_OnUpgradeHovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_UpgIconSingle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_UpgIconSingle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C");
		return ptr;
	}

}


