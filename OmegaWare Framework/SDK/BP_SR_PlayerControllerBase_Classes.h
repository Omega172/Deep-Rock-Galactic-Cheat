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
	 * BlueprintGeneratedClass BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C
	 * Size -> 0x0009 (FullSize[0x0799] - InheritedSize[0x0790])
	 */
	class ABP_SR_PlayerControllerBase_C : public ABP_PlayerControllerBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsOpeningCharSelectionWorld;                             // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetMissionSelect(class UWindowWidget** Widget);
		void GetPopupCrafting(class UWindowWidget** Widget);
		void GetCrafting(class UWindowWidget** Widget);
		void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation);
		void ShowForgeWorkshop();
		void ExecuteUbergraph_BP_SR_PlayerControllerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
