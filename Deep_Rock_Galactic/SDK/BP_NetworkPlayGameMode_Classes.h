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
	 * BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
	 * Size -> 0x000F (FullSize[0x0528] - InheritedSize[0x0519])
	 */
	class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
	{
	public:
		unsigned char                                              UnknownData_E9FI[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class UClass* GetDefaultPawnClassForController(class AController* InController);
		void RecieveAllDwarvesDown();
		void ExecuteUbergraph_BP_NetworkPlayGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
