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
	 * BlueprintGeneratedClass MixFunctions.MixFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMixFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void PushMixAtDistanceForDuration(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, float Duration, class UObject* __WorldContext);
		void PopMix(class USoundMix* InSoundMixModifier, class UObject* __WorldContext);
		void PopMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext);
		void PushMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
