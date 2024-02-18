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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPL_UpgradeHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void UPGDESC_CapsuleHitScan(class UClass* Item, class AFSDPlayerState* Player, ECapsuleHitscanUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_MicrowaveGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, EMicrowaveGunUpgrade upgradeType, bool UseTextOnly, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void FormatToPercentageZeroBasedNormalized(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
		void UPGDESC_CoilGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, ECoilgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_Crossbow(class UClass* Item, class UClass* Projectile, class AFSDPlayerState* Player, ECrossbowUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_ProjectileLauncher(class UClass* Item, class AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_LockOnRifle(class UClass* Item, class AFSDPlayerState* Player, ELockOnWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_GooCannon_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EGooGunProjectileUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_DynamicSTE(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_GooCannon(class UClass* Item, class AFSDPlayerState* Player, EGooGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void FormatStatic(const class FText& Text, float Value, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_DPS(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, const class FText& StatName, float Interval, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void FormatUpgradeToEntry(class FText* Text, struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void FormatUpgrade(struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value, EItemPreviewStatus* Format, bool* HasAnyUpgrades);
		void UPGDESC_Generic(class AFSDPlayerState* Player, class UClass* Item, class UItemUpgrade* upgradeType, bool UseCustomText, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_CryoSprayProjectile(class UClass* Item, class AFSDPlayerState* Player, class UClass* ProjectileClass, const class FText& UpgradeText, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_Random(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_HitCounter(class UClass* Item, class AFSDPlayerState* Player, class UClass* HitCounterClass, const class FText& UpgradeText, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void FormatToPercentageNormalized(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
		void UPGDESC_AmmoDrivenEx(class UClass* Item, class AFSDPlayerState* Player, TArray<EAmmoDrivenWeapnUpgradeType>* UpgradeTypes, TArray<struct FGearStatEntry>* GearStats, class UObject* __WorldContext);
		EItemPreviewStatus FormatPreviewStatus(bool FormatValue, struct FUpgradeValues* UpgradeValues, EFormatPreviewStatusType FormatType, class UObject* __WorldContext);
		void UPGDESC_DualMPs(class UClass* Item, class AFSDPlayerState* Player, EDualMachinePistolsUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_SentryGun(class UClass* Item, class AFSDPlayerState* Player, ESentryGunUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Detpack(class UClass* Item, class AFSDPlayerState* PlayerState, EDetPackUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Flaregun(class UClass* Item, class AFSDPlayerState* PlayerState, EFlaregunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ArmorStat(class AFSDPlayerState* Player, class UClass* armorClass, class UPawnStat* Stat, const class FText& Text, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed);
		void UPGDESC_TriggeredStat(class AFSDPlayerState* Player, class UClass* Item, class UClass* StatusEffect, const class FText& Text, ETriggeredStatusEffectType Type, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* gearstatentry, bool* isupgraded);
		void UPGDESC_PlatformGun(class UClass* Item, class AFSDPlayerState* Player, EPlatformGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Shouldshowtext);
		void UPGDESC_Bosco(class UClass* upgradedItem, class AFSDPlayerState* Player, EBoscoUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged);
		void UPGDESC_CoooldownAggregator(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_GrapplingHook(class UClass* Item, class AFSDPlayerState* Player, EGrapplingHookUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_FlaregunProjectile(class UClass* Item, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ZiplineGun(class UClass* Item, class AFSDPlayerState* Player, EZiplineGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Grenades(class UClass* Item, class AFSDPlayerState* Player, EGrenadeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_Pickaxe(class UClass* Item, class AFSDPlayerState* Player, EPickaxeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_LineCutterProjectile(class UClass* Item, class AFSDPlayerState* Player, ELineCutterProjectileUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_CombatShotgun(class UClass* Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ChargedProjectile(class UClass* Item, class AFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_StickyFlame(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_SawedOff(class UClass* Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Armor(class AFSDPlayerState* Player, class UClass* armorClass, EArmorUpgradeType ArmorUpgradeType, const class FText& Text, EFormatWeaponStatType Format, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_BurstWeapon(class UClass* Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_AoEFear(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_HotBullets(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_BeltDriven(class UClass* Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_AutoCannon(class UClass* Item, class AFSDPlayerState* Player, EAutoCannonUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void FormatValues(struct FUpgradeValues* UpgradeValues, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
		void UPGDESC_AssaultRifle(class UClass* Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_GatlingGun(class UClass* Item, class AFSDPlayerState* Player, EGatlingGunUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ShieldRegenerator(class UClass* Item, class AFSDPlayerState* Player, EShieldGeneratorUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void FormatCmtoM(float BaseValue, float UpgradeValue, float OldUpgradeValue, float FinalValue, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
		void FormatPercentage(float BaseValue, float UpgradedValue, float OldUpgradedValue, float FinalValue, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
		void UPGDESC_Cryospray(class UClass* Item, class AFSDPlayerState* Player, ECryoSprayUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_FlameThrower(class UClass* Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ChargedWeapon(class UClass* Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_BoltAction(class UClass* Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_TargetStateBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, ETargetStateDamageBonusType TargetState, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_TargetTypeBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, const class FName& Key, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_StatusBonus(class UClass* Item, class AFSDPlayerState* Player, class UClass* SstatusEffectIn, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_ElectricalSMG(class UClass* Item, class AFSDPlayerState* Player, EElectricalSMGUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_Flat(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, EFormatPreviewStatusType FormatType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_DamageConversion(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_DamageBonus_PushStatus(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_AmmoDriven(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_Damage(class UClass** Item, class UClass* upgradedItem, class AFSDPlayerState** Player, EDamageUpgrade upgradeType, const class FText& Prefix, EDamageComponentType DamageComponentType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_HitScan(class UClass* Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
		void UPGDESC_SingleUsable_UseDuration(class UClass* Item, class UClass* subItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_Item(class AFSDPlayerState* Player, class UClass* Item, EInventoryItemUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Flare_Base(class UClass* flareClass, class AFSDPlayerState* Player, EFlareUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_Drills(class UClass* Item, class AFSDPlayerState* Player, EDoubleDrillUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		void UPGDESC_Capacity(class UClass* upgradedItem, class AFSDPlayerState* Player, int32_t componentIndex, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
		void UPGDESC_HitScan_Bullets(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
