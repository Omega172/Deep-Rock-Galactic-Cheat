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
	 * BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
	 * Size -> 0x0010 (FullSize[0x04B8] - InheritedSize[0x04A8])
	 */
	class AWPN_DetPack_Detonator_C : public ADetPackItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            StatusMaterial;                                          // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void RecieveStartUsing();
		void RecieveEquipped();
		void ReceiveResupply(float percentage);
		void Receive_OnRep_IsDetonatorOut();
		void ExecuteUbergraph_WPN_DetPack_Detonator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
