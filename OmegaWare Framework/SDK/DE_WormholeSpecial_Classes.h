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
	 * BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C
	 * Size -> 0x0048 (FullSize[0x0108] - InheritedSize[0x00C0])
	 */
	class UDE_WormholeSpecial_C : public UDrinkEffectComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlayerCharacter*                                    Character;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          OnStartTransform;                                        // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class ABP_WormholeLocation_Base_C*                         ActiveWormhole;                                          // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisableOlderActiveWormholeEffects();
		void IsLastActiveWormholeEffect(bool* waslasteffect);
		void SetOriginalposition();
		void ReceiveTick(float DeltaSeconds);
		void OnStartEffect(class APlayerCharacter* Character);
		void OnStopEffect();
		void SpawnTeleportEffects();
		void DisableActiveLocationEffects();
		void ExecuteUbergraph_DE_WormholeSpecial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
