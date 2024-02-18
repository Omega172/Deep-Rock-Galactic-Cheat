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
	 * WidgetBlueprintGeneratedClass HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C
	 * Size -> 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
	 */
	class UHUD_HeavyParticleCannon_AmmoCount_C : public UCustomAmmoCountWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_HUD_BracketWindowBig_Single_C*                Basic_HUD_BracketWindowBig_Single;                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_HeavyParticleCannon_AmmoCount_Internal_C*       HUD_HeavyParticleCannon_AmmoCount_Internal;              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ReceiveItemSet();
		void SetData(int32_t ClipSize, float ReloadDuration);
		void ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
