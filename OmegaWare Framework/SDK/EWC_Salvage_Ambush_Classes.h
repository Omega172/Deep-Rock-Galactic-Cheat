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
	 * BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C
	 * Size -> 0x0018 (FullSize[0x0064] - InheritedSize[0x004C])
	 */
	class UEWC_Salvage_Ambush_C : public UEWC_Base_C
	{
	public:
		unsigned char                                              UnknownData_N528[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             MuleLocation;                                            // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartWave();
		void ExecuteUbergraph_EWC_Salvage_Ambush(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
