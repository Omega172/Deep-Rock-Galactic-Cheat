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
	 * WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class UHUD_BossFight_BaseEntry_C : public UBossFightWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBossFight                                          BossFightInfo;                                           // 0x0278(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void GetBossFight(struct FBossFight* BossFight);
		void OnCanTakeDamageChanged(bool OutCanTakeDamage);
		void OnDeath();
		void OnDisengaged();
		void OnHealthChanged(float Health);
		void Construct();
		void OnFightRemoved();
		void SetupInvulnerability();
		void ExecuteUbergraph_HUD_BossFight_BaseEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
