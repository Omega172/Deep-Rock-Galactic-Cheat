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
	 * BlueprintGeneratedClass DE_GenericBuffEffect.DE_GenericBuffEffect_C
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UDE_GenericBuffEffect_C : public UDrinkEffectComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnStartEffect(class APlayerCharacter* Character);
		void OnStopEffect();
		void ExecuteUbergraph_DE_GenericBuffEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
