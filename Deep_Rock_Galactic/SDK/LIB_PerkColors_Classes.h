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
	 * BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_PerkColors_C : public UBlueprintFunctionLibrary
	{
	public:
		void PerkColorFromType(EPerkUsageType InType, class UObject* __WorldContext, struct FLinearColor* OutColor);
		void PerkColorByState(EPerkUsageType InPerkType, EPerkTierState InPerkState, class UObject* __WorldContext, struct FLinearColor* OutBackground, struct FLinearColor* OutBorder, struct FLinearColor* OutIcon);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
