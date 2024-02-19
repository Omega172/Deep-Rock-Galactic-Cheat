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
	 * BlueprintGeneratedClass BP_JetBootsMovement.BP_JetBootsMovement_C
	 * Size -> 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
	 */
	class UBP_JetBootsMovement_C : public UJetBootsMovementComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              StatusEffect;                                            // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_JetBootsFuel_Vertical_C*                        FuelWidget;                                              // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_JetBootsBurnTrigger_C*                           SpawnedBurnTrigger;                                      // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FuelUpdated_Event_1(float jetFuel, bool overHeated);
		void Receive_OnCharacterSet(class APlayerCharacter* Player);
		void Receive_OnActiveChangedLocal(bool IsActive, bool fromTakeOff);
		void BindToFuelUsed();
		void OnFuelUsed(float jetFuel, bool overHeated);
		void Receive_OnDestroy();
		void Receive_OnOverheatedChanged(bool overHeated);
		void Receive_OnActiveChangedNonLocal(bool IsActive, bool fromTakeOff);
		void Receive_OnTakeOffLocal();
		void Receive_OnActiveChangedServer(bool IsActive, bool fromTakeOff);
		void ExecuteUbergraph_BP_JetBootsMovement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
