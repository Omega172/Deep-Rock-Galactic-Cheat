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
	 * BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_ToolTips_C : public UBlueprintFunctionLibrary
	{
	public:
		void CreateToolTip(class UWidget* ToolTipTarget, class UClass* ToolTipClass, const struct FVector2D& Offset, class UObject* __WorldContext, class UUserWidget** OutToolTip);
		void CreateBiomeToolTip(class UWidget* Target, const struct FVector2D& Position, const struct FVector2D& Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C** ToolTipWidget);
		void CreateBasicToolTip(class UWidget* Target, const class FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
