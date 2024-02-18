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
	 * BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
	 * Size -> 0x0018 (FullSize[0x04F0] - InheritedSize[0x04D8])
	 */
	class AWPN_ShieldRegeneratorItem_C : public AShieldGeneratorItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     RechargeAudio;                                           // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  RechargedMaterial;                                       // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaterial();
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void RecieveStartUsing();
		void ReceiveItemThrown(class AThrowableActor* thrownActor);
		void ReceiveGeneratorRecharged();
		void ReceiveGeneratorRechargeProgress(float Progress);
		void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t Amount);
		void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32_t Amount);
		void ReceiveGeneratorReturned();
		void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
