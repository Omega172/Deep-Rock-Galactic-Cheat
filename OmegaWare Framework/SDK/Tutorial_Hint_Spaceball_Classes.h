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
	 * BlueprintGeneratedClass Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C
	 * Size -> 0x0018 (FullSize[0x0188] - InheritedSize[0x0170])
	 */
	class UTutorial_Hint_Spaceball_C : public UTutorialHintComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UResourceData*                                       ResourceType;                                            // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCappedResource*                                     Resource;                                                // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveOnHidden();
		void ReceiveOnInitialized();
		void OnUse(class UUsableComponentBase* Component);
		void ExecuteUbergraph_Tutorial_Hint_Spaceball(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
