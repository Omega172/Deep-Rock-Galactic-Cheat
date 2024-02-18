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
	 * BlueprintGeneratedClass BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C
	 * Size -> 0x000B (FullSize[0x0268] - InheritedSize[0x025D])
	 */
	class ABP_Shotgun_A_Shell_C : public AMAG_BaseClass_C
	{
	public:
		unsigned char                                              UnknownData_DL1N[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool Attached(class AActor* Parent);
		void OnItemSkinned(class USkinEffect* Skin);
		void ExecuteUbergraph_BP_Shotgun_A_Shell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
