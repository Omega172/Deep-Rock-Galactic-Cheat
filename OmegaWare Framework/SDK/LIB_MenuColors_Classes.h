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
	 * BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_MenuColors_C : public UBlueprintFunctionLibrary
	{
	public:
		void MenuColorAndTint(const struct FMenuColorAndTint_FMenuColorAndTint& InValue, class UObject* __WorldContext, struct FLinearColor* OutResult);
		void WindowColors(ENUM_WindowColors InColor, class UObject* __WorldContext, struct FLinearColor* Color1, struct FLinearColor* Color2);
		void SelectTextColor(class UTextBlock* Text, ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition, class UObject* __WorldContext);
		void SetTextColor(class UTextBlock* Text, ENUM_MenuColors Color, class UObject* __WorldContext);
		void SelectMenuColor(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition, class UObject* __WorldContext, struct FLinearColor* OutputColor);
		void MenuColorsAndOpacity(ENUM_MenuColors ColorSelector, float Opacity, class UObject* __WorldContext, struct FLinearColor* OutputColor);
		void MenuColors(ENUM_MenuColors ColorSelector, class UObject* __WorldContext, struct FLinearColor* OutputColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
