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
	 * BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Game_UI_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetSkinText(class UItemSkin* InSkin, class UItemID* InOptionalItem, class UPlayerCharacterID* InOptionalCharacter, class UObject* __WorldContext, class FText* Title, class FText* Category, class FText* Description, bool* HasOptionalCharacterID, class UPlayerCharacterID** characterID);
		void GetRewardIcon(class UReward* Reward, class UObject* __WorldContext, class UTexture** Icon);
		void GetRewardText(class UReward* Reward, class UObject* __WorldContext, class FText* Title, class FText* Category, class FText* Description, bool* HasOptionalCharacterID, class UPlayerCharacterID** characterID);
		void GetEnemyFamilyName(EEnemyFamily Family, class UObject* __WorldContext, class FText* Name);
		void GetArmorTypeInfo(EArmorType Type, class UObject* __WorldContext, class FText* DisplayText, class UTexture2D** Icon, struct FLinearColor* Color);
		void GetEnemyTypeInfo(EEnemyType Type, class UObject* __WorldContext, class FText* DisplayText, class UTexture2D** Icon, struct FLinearColor* IconColor);
		void GetEnemyFamilyInfo(EEnemyFamily Family, class UObject* __WorldContext, class FText* Name, class UTexture2D** Icon, struct FLinearColor* Color);
		void GetPickaxePartLocationTitle(EPickaxePartLocation InPartLocation, bool UpperCase, bool LongName, class UObject* __WorldContext, class FText* OutTitle);
		void GetVanitySlotTitle(EVanitySlot InVanitySlot, bool UpperCase, class UObject* __WorldContext, class FText* OutTitle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
