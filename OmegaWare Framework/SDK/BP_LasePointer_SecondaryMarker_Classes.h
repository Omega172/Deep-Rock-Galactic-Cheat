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
	 * BlueprintGeneratedClass BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class ABP_LasePointer_SecondaryMarker_C : public ABP_LaserPointer_Marker_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UpdateMaterial();
		void ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
