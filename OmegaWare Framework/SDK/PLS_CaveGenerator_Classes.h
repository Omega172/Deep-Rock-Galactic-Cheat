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
	 * BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C
	 * Size -> 0x0008 (FullSize[0x0500] - InheritedSize[0x04F8])
	 */
	class APLS_CaveGenerator_C : public APLS_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void CreateCaveGraph();
		void CreateSpawn();
		void ExecuteUbergraph_PLS_CaveGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
