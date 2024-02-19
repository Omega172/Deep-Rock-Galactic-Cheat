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
	 * BlueprintGeneratedClass LIB_Game.LIB_Game_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Game_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetMissionSeedString(class UObject* __WorldContext, class FString* SeedString);
		void SetTextureAndColor(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, const struct FLinearColor& InColorAndOpacity, class UObject* __WorldContext);
		void IsFlaggedVisible(class UWidget* InWidget, class UObject* __WorldContext, bool* IsFlaggedVisible);
		void SetSoftTextureAndTint(class UImage* Target, bool bMatchSize, const struct FLinearColor& Tint, class UObject* __WorldContext);
		void SetTextureAndTint(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, const struct FLinearColor& Tint, class UObject* __WorldContext);
		void UpdateBool(bool* Variable, bool InValue, class UObject* __WorldContext, bool* ValueChanged, bool* OutValue);
		void SetVisibilityIf(class UWidget* Widget, ESlateVisibility Visibility, bool Condition, class UObject* __WorldContext, bool* IsVisible);
		void LoadMission(const struct FSoftObjectPath& NewParam, class UObject* __WorldContext);
		void SelectVisibility(class UWidget* Widget, ESlateVisibility _FALSE_, ESlateVisibility _TRUE__, bool Index, class UObject* __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* NewVisibility);
		void IsOnSpaceRig(class UObject* __WorldContext, bool* OnSpaceRig);
		void IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool* Kicked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
