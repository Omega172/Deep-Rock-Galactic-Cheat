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
	 * BlueprintGeneratedClass BP_HUD.BP_HUD_C
	 * Size -> 0x0140 (FullSize[0x0478] - InheritedSize[0x0338])
	 */
	class ABP_HUD_C : public AFSDHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget*>                                     Widgets;                                                 // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class APlayerController*                                   PlayerController;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HudInitialized;                                          // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanAddToViewport;                                        // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LX3D[0x6];                                   // 0x0362(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDMainHUDWidget*                                   HudWidget;                                               // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class URadarPointComponent*>                        RadarPointsInQueue;                                      // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       EscMenu;                                                 // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       CheatMenu;                                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScreenOverlay_Afflictions_C*                        AfflictionWidget;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Invitation_C*                                    InviteRequest;                                           // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       QuickCheatMenu;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              HUDClass[0x28];                                          // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              EscapeMenuClass[0x28];                                   // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CheatMenuClass[0x28];                                    // 0x0400(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              QuickCheatMenuClass[0x28];                               // 0x0428(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AfflictionClass[0x28];                                   // 0x0450(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetQuickCheatMenu(class UWindowWidget** QuickCheatMenu);
		void GetCheatMenu(class UWindowWidget** CheatMenu);
		void GetHUDWidget(class UFSDMainHUDWidget** HudWidget);
		void GetEscapeMenu(class UWindowWidget** EscMenu);
		void PopEvent(class UWidget* eventWidget, bool Left);
		void CreateEscMenu();
		void IsInitialized(bool* Out);
		void CreateQuickCheatsIfNotCreated();
		void PushEvent(class UWidget* eventWidget, bool Left);
		void CreateCheatsIfNotCreated();
		void RemoveAllWidgetsFromParents();
		void AddAllWidgetToViewport();
		void AddWidgetClass(class UClass* Class, class UWidget** Widget);
		void PlayerSpawned(class APlayerCharacter* Player);
		void RadarPointAdded(class URadarPointComponent* radarPoint);
		void HandleSeamlessTravel();
		void OnVisibilityChanged();
		void ReceiveDestroyed();
		void CameraDroneSpawned(class APlayerCameraDrone* Drone);
		void OnEndLevelReceived_Event();
		void OnShowMainMenu();
		void LoadEscapeMenu();
		void MenuLoaded();
		void OnHUDInitialized();
		void QuickCheatMenuRequest();
		void CheatMenuRequest();
		void ExecuteUbergraph_BP_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
