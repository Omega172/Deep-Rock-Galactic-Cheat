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
	 * Class ModioEx.ModioSubmissionExtensionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, const struct FModioModID& Mod, const struct FModioCreateModFileMemoryParams& Params);
		bool K2_LoadModFileToMemory(class UModioSubsystem* Target, const struct FModioModID& ModId, TArray<unsigned char>* ModData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
