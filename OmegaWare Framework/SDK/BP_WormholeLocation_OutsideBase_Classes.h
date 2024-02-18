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
	 * BlueprintGeneratedClass BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABP_WormholeLocation_OutsideBase_C : public ABP_WormholeLocation_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnPlayerEnterLocation(class APlayerCharacter* Character);
		void OnPlayerLeaveLocation(class APlayerCharacter* Character);
		void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
