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
	 * BlueprintGeneratedClass LIB_Intoxication.LIB_Intoxication_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Intoxication_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetAlcoholStrengthPct(EDrinkableAlcoholStrength Strength, class APlayerCharacter* Character, class UObject* __WorldContext, int32_t* Percent);
		void GetAlcoholStrengthName(EDrinkableAlcoholStrength Strength, bool UpperCase, class UObject* __WorldContext, class FText* Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
