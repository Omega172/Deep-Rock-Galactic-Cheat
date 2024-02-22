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
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CapsuleHitScan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECapsuleHitscanUpgradeType                         upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_CapsuleHitScan(class UClass* Item, class AFSDPlayerState* Player, ECapsuleHitscanUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CapsuleHitScan");
		
		UBPL_UpgradeHelpers_C_UPGDESC_CapsuleHitScan_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_MicrowaveGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EMicrowaveGunUpgrade                               upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseTextOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_MicrowaveGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, EMicrowaveGunUpgrade upgradeType, bool UseTextOnly, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_MicrowaveGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_MicrowaveGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.Prefix = Prefix;
		params.upgradeType = upgradeType;
		params.UseTextOnly = UseTextOnly;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageZeroBasedNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpgradeValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldUpgradeValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatWeaponStatType                              FormatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatToPercentageZeroBasedNormalized(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageZeroBasedNormalized");
		
		UBPL_UpgradeHelpers_C_FormatToPercentageZeroBasedNormalized_Params params {};
		params.BaseValue = BaseValue;
		params.UpgradeValue = UpgradeValue;
		params.OldUpgradeValue = OldUpgradeValue;
		params.FinalValue = FinalValue;
		params.FormatType = FormatType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoilGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ECoilgunUpgrades                                   upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_CoilGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, ECoilgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoilGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_CoilGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.Prefix = Prefix;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Crossbow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECrossbowUpgrades                                  upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Crossbow(class UClass* Item, class UClass* Projectile, class AFSDPlayerState* Player, ECrossbowUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Crossbow");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Crossbow_Params params {};
		params.Item = Item;
		params.Projectile = Projectile;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ProjectileLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EProjectileLauncherBaseUpgradeType                 upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ProjectileLauncher(class UClass* Item, class AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ProjectileLauncher");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ProjectileLauncher_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LockOnRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELockOnWeaponUpgrades                              upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_LockOnRifle(class UClass* Item, class AFSDPlayerState* Player, ELockOnWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LockOnRifle");
		
		UBPL_UpgradeHelpers_C_UPGDESC_LockOnRifle_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GooCannon_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGooGunProjectileUpgrades                          upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_GooCannon_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EGooGunProjectileUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GooCannon_Projectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_GooCannon_Projectile_Params params {};
		params.Item = Item;
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DynamicSTE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EModifyStatusEffectDamageUpgrade                   upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DynamicSTE(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DynamicSTE");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DynamicSTE_Params params {};
		params.Item = Item;
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GooCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGooGunUpgrades                                    upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_GooCannon(class UClass* Item, class AFSDPlayerState* Player, EGooGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GooCannon");
		
		UBPL_UpgradeHelpers_C_UPGDESC_GooCannon_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatStatic(const class FText& Text, float Value, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatStatic");
		
		UBPL_UpgradeHelpers_C_FormatStatic_Params params {};
		params.Text = Text;
		params.Value = Value;
		params.Format = Format;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Interval                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DPS(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, const class FText& StatName, float Interval, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DPS");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DPS_Params params {};
		params.Item = Item;
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.StatName = StatName;
		params.Interval = Interval;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgradeToEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FUpgradeValues                              UpgradeValues                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EFormatWeaponStatType                              StatFormat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatPreviewStatusType                           PreviewFormat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::FormatUpgradeToEntry(class FText* Text, struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgradeToEntry");
		
		UBPL_UpgradeHelpers_C_FormatUpgradeToEntry_Params params {};
		params.StatFormat = StatFormat;
		params.PreviewFormat = PreviewFormat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (UpgradeValues != nullptr)
			*UpgradeValues = params.UpgradeValues;
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeValues                              UpgradeValues                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EFormatWeaponStatType                              StatFormat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatPreviewStatusType                           PreviewFormat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 * 		EItemPreviewStatus                                 Format                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::FormatUpgrade(struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value, EItemPreviewStatus* Format, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatUpgrade");
		
		UBPL_UpgradeHelpers_C_FormatUpgrade_Params params {};
		params.StatFormat = StatFormat;
		params.PreviewFormat = PreviewFormat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeValues != nullptr)
			*UpgradeValues = params.UpgradeValues;
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
		if (Format != nullptr)
			*Format = params.Format;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Generic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemUpgrade*                                upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseCustomText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Generic(class AFSDPlayerState* Player, class UClass* Item, class UItemUpgrade* upgradeType, bool UseCustomText, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Generic");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Generic_Params params {};
		params.Player = Player;
		params.Item = Item;
		params.upgradeType = upgradeType;
		params.UseCustomText = UseCustomText;
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CryoSprayProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ProjectileClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_CryoSprayProjectile(class UClass* Item, class AFSDPlayerState* Player, class UClass* ProjectileClass, const class FText& UpgradeText, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CryoSprayProjectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_CryoSprayProjectile_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.ProjectileClass = ProjectileClass;
		params.UpgradeText = UpgradeText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Random
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_Random(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Random");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Random_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      HitCounterClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_HitCounter(class UClass* Item, class AFSDPlayerState* Player, class UClass* HitCounterClass, const class FText& UpgradeText, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitCounter");
		
		UBPL_UpgradeHelpers_C_UPGDESC_HitCounter_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.HitCounterClass = HitCounterClass;
		params.UpgradeText = UpgradeText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpgradeValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldUpgradeValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatWeaponStatType                              FormatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatToPercentageNormalized(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatToPercentageNormalized");
		
		UBPL_UpgradeHelpers_C_FormatToPercentageNormalized_Params params {};
		params.BaseValue = BaseValue;
		params.UpgradeValue = UpgradeValue;
		params.OldUpgradeValue = OldUpgradeValue;
		params.FinalValue = FinalValue;
		params.FormatType = FormatType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDrivenEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EAmmoDrivenWeapnUpgradeType>                UpgradeTypes                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FGearStatEntry>                      GearStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDrivenEx(class UClass* Item, class AFSDPlayerState* Player, TArray<EAmmoDrivenWeapnUpgradeType>* UpgradeTypes, TArray<struct FGearStatEntry>* GearStats, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDrivenEx");
		
		UBPL_UpgradeHelpers_C_UPGDESC_AmmoDrivenEx_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeTypes != nullptr)
			*UpgradeTypes = params.UpgradeTypes;
		if (GearStats != nullptr)
			*GearStats = params.GearStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPreviewStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FormatValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUpgradeValues                              UpgradeValues                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EFormatPreviewStatusType                           FormatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EItemPreviewStatus UBPL_UpgradeHelpers_C::FormatPreviewStatus(bool FormatValue, struct FUpgradeValues* UpgradeValues, EFormatPreviewStatusType FormatType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPreviewStatus");
		
		UBPL_UpgradeHelpers_C_FormatPreviewStatus_Params params {};
		params.FormatValue = FormatValue;
		params.FormatType = FormatType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeValues != nullptr)
			*UpgradeValues = params.UpgradeValues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DualMPs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDualMachinePistolsUpgrades                        upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DualMPs(class UClass* Item, class AFSDPlayerState* Player, EDualMachinePistolsUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DualMPs");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DualMPs_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESentryGunUpgradeType                              UpgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_SentryGun(class UClass* Item, class AFSDPlayerState* Player, ESentryGunUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_SentryGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.UpgradeType = UpgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Detpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDetPackUpgrades                                   upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Detpack(class UClass* Item, class AFSDPlayerState* PlayerState, EDetPackUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Detpack");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Detpack_Params params {};
		params.Item = Item;
		params.PlayerState = PlayerState;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flaregun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFlaregunUpgrades                                  upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Flaregun(class UClass* Item, class AFSDPlayerState* PlayerState, EFlaregunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flaregun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Flaregun_Params params {};
		params.Item = Item;
		params.PlayerState = PlayerState;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      armorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPawnStat*                                   Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ArmorStat(class AFSDPlayerState* Player, class UClass* armorClass, class UPawnStat* Stat, const class FText& Text, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ArmorStat_Params params {};
		params.Player = Player;
		params.armorClass = armorClass;
		params.Stat = Stat;
		params.Text = Text;
		params.Format = Format;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (Changed != nullptr)
			*Changed = params.Changed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETriggeredStatusEffectType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              gearstatentry                                              (Parm, OutParm)
	 * 		bool                                               isupgraded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_TriggeredStat(class AFSDPlayerState* Player, class UClass* Item, class UClass* StatusEffect, const class FText& Text, ETriggeredStatusEffectType Type, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* gearstatentry, bool* isupgraded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat");
		
		UBPL_UpgradeHelpers_C_UPGDESC_TriggeredStat_Params params {};
		params.Player = Player;
		params.Item = Item;
		params.StatusEffect = StatusEffect;
		params.Text = Text;
		params.Type = Type;
		params.Format = Format;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (gearstatentry != nullptr)
			*gearstatentry = params.gearstatentry;
		if (isupgraded != nullptr)
			*isupgraded = params.isupgraded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlatformGunUpgrades                               upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               Shouldshowtext                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_PlatformGun(class UClass* Item, class AFSDPlayerState* Player, EPlatformGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Shouldshowtext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_PlatformGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (Shouldshowtext != nullptr)
			*Shouldshowtext = params.Shouldshowtext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBoscoUpgrades                                     upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasChanged                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Bosco(class UClass* upgradedItem, class AFSDPlayerState* Player, EBoscoUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Bosco_Params params {};
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasChanged != nullptr)
			*HasChanged = params.HasChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_CoooldownAggregator(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator");
		
		UBPL_UpgradeHelpers_C_UPGDESC_CoooldownAggregator_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGrapplingHookUpgrade                              upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_GrapplingHook(class UClass* Item, class AFSDPlayerState* Player, EGrapplingHookUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook");
		
		UBPL_UpgradeHelpers_C_UPGDESC_GrapplingHook_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFlaregunProjectileUpgrades                        upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_FlaregunProjectile(class UClass* Item, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_FlaregunProjectile_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.upgradedActor = upgradedActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EZiplineGunUpgrades                                upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ZiplineGun(class UClass* Item, class AFSDPlayerState* Player, EZiplineGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ZiplineGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGrenadeUpgradeType                                upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Grenades(class UClass* Item, class AFSDPlayerState* Player, EGrenadeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Grenades_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPickaxeUpgradeType                                upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Pickaxe(class UClass* Item, class AFSDPlayerState* Player, EPickaxeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Pickaxe_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutterProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELineCutterProjectileUpgradeType                   upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_LineCutterProjectile(class UClass* Item, class AFSDPlayerState* Player, ELineCutterProjectileUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutterProjectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_LineCutterProjectile_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAutoShotgunUpgrades                               upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_CombatShotgun(class UClass* Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_CombatShotgun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EChargedProjectileUpgrades                         upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ChargedProjectile(class UClass* Item, class AFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ChargedProjectile_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.upgradedActor = upgradedActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_StickyFlame(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame");
		
		UBPL_UpgradeHelpers_C_UPGDESC_StickyFlame_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.StatusEffect = StatusEffect;
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESawedOffShotgunUpgrades                           upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_SawedOff(class UClass* Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff");
		
		UBPL_UpgradeHelpers_C_UPGDESC_SawedOff_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      armorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EArmorUpgradeType                                  ArmorUpgradeType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatPreviewStatusType                           PreviewFormat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Armor(class AFSDPlayerState* Player, class UClass* armorClass, EArmorUpgradeType ArmorUpgradeType, const class FText& Text, EFormatWeaponStatType Format, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Armor_Params params {};
		params.Player = Player;
		params.armorClass = armorClass;
		params.ArmorUpgradeType = ArmorUpgradeType;
		params.Text = Text;
		params.Format = Format;
		params.PreviewFormat = PreviewFormat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBurstWeaponUpgrades                               upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_BurstWeapon(class UClass* Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon");
		
		UBPL_UpgradeHelpers_C_UPGDESC_BurstWeapon_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_AoEFear(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_AoEFear_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.StatName = StatName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageClass*                                DamageClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_HotBullets(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_HotBullets_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.DamageClass = DamageClass;
		params.StatName = StatName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBeltDrivenWeaponUpgrade                           upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_BeltDriven(class UClass* Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven");
		
		UBPL_UpgradeHelpers_C_UPGDESC_BeltDriven_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAutoCannonUpgrades                                upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_AutoCannon(class UClass* Item, class AFSDPlayerState* Player, EAutoCannonUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon");
		
		UBPL_UpgradeHelpers_C_UPGDESC_AutoCannon_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeValues                              UpgradeValues                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatValues(struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues");
		
		UBPL_UpgradeHelpers_C_FormatValues_Params params {};
		params.Format = Format;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeValues != nullptr)
			*UpgradeValues = params.UpgradeValues;
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAssaultRifleUpgrade                               upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_AssaultRifle(class UClass* Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle");
		
		UBPL_UpgradeHelpers_C_UPGDESC_AssaultRifle_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGatlingGunUpgrade                                 upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_GatlingGun(class UClass* Item, class AFSDPlayerState* Player, EGatlingGunUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun");
		
		UBPL_UpgradeHelpers_C_UPGDESC_GatlingGun_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EShieldGeneratorUpgrades                           upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ShieldRegenerator(class UClass* Item, class AFSDPlayerState* Player, EShieldGeneratorUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ShieldRegenerator_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpgradeValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldUpgradeValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatCmtoM(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM");
		
		UBPL_UpgradeHelpers_C_FormatCmtoM_Params params {};
		params.BaseValue = BaseValue;
		params.UpgradeValue = UpgradeValue;
		params.OldUpgradeValue = OldUpgradeValue;
		params.FinalValue = FinalValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpgradedValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldUpgradedValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFormatWeaponStatType                              Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        BaseText                                                   (Parm, OutParm)
	 * 		class FText                                        UpgradeText                                                (Parm, OutParm)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::FormatPercentage(float BaseValue, float UpgradedValue, float OldUpgradedValue, float FinalValue, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage");
		
		UBPL_UpgradeHelpers_C_FormatPercentage_Params params {};
		params.BaseValue = BaseValue;
		params.UpgradedValue = UpgradedValue;
		params.OldUpgradedValue = OldUpgradedValue;
		params.FinalValue = FinalValue;
		params.Format = Format;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseText != nullptr)
			*BaseText = params.BaseText;
		if (UpgradeText != nullptr)
			*UpgradeText = params.UpgradeText;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECryoSprayUpgrades                                 upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Cryospray(class UClass* Item, class AFSDPlayerState* Player, ECryoSprayUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Cryospray_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFlameThrowerUpgradeType                           upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_FlameThrower(class UClass* Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower");
		
		UBPL_UpgradeHelpers_C_UPGDESC_FlameThrower_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EChargedWeaponUpgrades                             upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ChargedWeapon(class UClass* Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ChargedWeapon_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EProjectileUpgrade                                 upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Projectile_Params params {};
		params.Item = Item;
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBoltActionRifleUpgrades                           upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_BoltAction(class UClass* Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction");
		
		UBPL_UpgradeHelpers_C_UPGDESC_BoltAction_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETargetStateDamageBonusType                        TargetState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_TargetStateBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, ETargetStateDamageBonusType TargetState, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetStateBonus_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.StatName = StatName;
		params.TargetState = TargetState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_TargetTypeBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, const class FName& Key, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_TargetTypeBonus_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.StatName = StatName;
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SstatusEffectIn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_StatusBonus(class UClass* Item, class AFSDPlayerState* Player, class UClass* SstatusEffectIn, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_StatusBonus_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.SstatusEffectIn = SstatusEffectIn;
		params.StatName = StatName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EElectricalSMGUpgrades                             upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_ElectricalSMG(class UClass* Item, class AFSDPlayerState* Player, EElectricalSMGUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG");
		
		UBPL_UpgradeHelpers_C_UPGDESC_ElectricalSMG_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageClass*                                DamageClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EFormatPreviewStatusType                           FormatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_Flat(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, EFormatPreviewStatusType FormatType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_Flat_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.DamageClass = DamageClass;
		params.StatName = StatName;
		params.FormatType = FormatType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageClass*                                DamageClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OverrideStatType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EFormatWeaponStatType                              StatTypeOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_DamageConversion(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_DamageConversion_Params params {};
		params.Item = Item;
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.DamageClass = DamageClass;
		params.StatName = StatName;
		params.OverrideStatType = OverrideStatType;
		params.StatTypeOverride = StatTypeOverride;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_PushStatus(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus");
		
		UBPL_UpgradeHelpers_C_UPGDESC_DamageBonus_PushStatus_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.StatusEffect = StatusEffect;
		params.StatName = StatName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAmmoDrivenWeapnUpgradeType                        upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideStatType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EFormatWeaponStatType                              StatTypeOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven");
		
		UBPL_UpgradeHelpers_C_UPGDESC_AmmoDriven_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.OverrideStatType = OverrideStatType;
		params.StatTypeOverride = StatTypeOverride;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDamageUpgrade                                     upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EDamageComponentType                               DamageComponentType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Damage(class UClass** Item, class UClass* upgradedItem, class AFSDPlayerState** Player, EDamageUpgrade upgradeType, const class FText& Prefix, EDamageComponentType DamageComponentType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Damage_Params params {};
		params.upgradedItem = upgradedItem;
		params.upgradeType = upgradeType;
		params.Prefix = Prefix;
		params.DamageComponentType = DamageComponentType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
		if (Player != nullptr)
			*Player = params.Player;
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHitScanBaseUpgradeType                            upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasAnyUpgrades                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_HitScan(class UClass* Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan");
		
		UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasAnyUpgrades != nullptr)
			*HasAnyUpgrades = params.HasAnyUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      subItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_SingleUsable_UseDuration(class UClass* Item, class UClass* subItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration");
		
		UBPL_UpgradeHelpers_C_UPGDESC_SingleUsable_UseDuration_Params params {};
		params.Item = Item;
		params.subItem = subItem;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInventoryItemUpgradeType                          upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Item(class AFSDPlayerState* Player, class UClass* Item, EInventoryItemUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Item_Params params {};
		params.Player = Player;
		params.Item = Item;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      flareClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFlareUpgradeType                                  upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Flare_Base(class UClass* flareClass, class AFSDPlayerState* Player, EFlareUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Flare_Base_Params params {};
		params.flareClass = flareClass;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDoubleDrillUpgradeType                            upgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Drills(class UClass* Item, class AFSDPlayerState* Player, EDoubleDrillUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Drills_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.upgradeType = upgradeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      upgradedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            componentIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_Capacity(class UClass* upgradedItem, class AFSDPlayerState* Player, int32_t componentIndex, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity");
		
		UBPL_UpgradeHelpers_C_UPGDESC_Capacity_Params params {};
		params.upgradedItem = upgradedItem;
		params.Player = Player;
		params.componentIndex = componentIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 * 		bool                                               HasUpgradedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPL_UpgradeHelpers_C::UPGDESC_HitScan_Bullets(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets");
		
		UBPL_UpgradeHelpers_C_UPGDESC_HitScan_Bullets_Params params {};
		params.Item = Item;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
		if (HasUpgradedValue != nullptr)
			*HasUpgradedValue = params.HasUpgradedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPL_UpgradeHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPL_UpgradeHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C");
		return ptr;
	}

}


