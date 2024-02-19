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
	 * BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class ABP_Promotion_Console_C : public ABP_BaseSpaceRigConsole_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     audio;                                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController);
		void ExecuteUbergraph_BP_Promotion_Console(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
