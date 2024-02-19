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
	 * WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class UScreenOverlay_Afflictions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        RootCanvas;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class APlayerCharacter*                                    Player;                                                  // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHealthComponent*                                    HealthComponent;                                         // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UPlayerAfflictionOverlay*, class UPlayerAfflictionOverlayWidget*> ActiveOverlays;                                          // 0x0280(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void FindOverlayWidget(class UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, class UPlayerAfflictionOverlayWidget** OutWidget);
		void Construct();
		void OnShowOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
		void OnHideOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
		void ExecuteUbergraph_ScreenOverlay_Afflictions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
