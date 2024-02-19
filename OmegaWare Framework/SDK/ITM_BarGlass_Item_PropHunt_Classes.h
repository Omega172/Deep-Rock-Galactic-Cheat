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
	 * BlueprintGeneratedClass ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C
	 * Size -> 0x000B (FullSize[0x0440] - InheritedSize[0x0435])
	 */
	class AITM_BarGlass_Item_PropHunt_C : public AITM_BarGlass_Item_C
	{
	public:
		unsigned char                                              UnknownData_RBS4[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Refresh();
		void ReceiveBeginPlay();
		void ReceiveConsumed();
		void ExecuteUbergraph_ITM_BarGlass_Item_PropHunt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
