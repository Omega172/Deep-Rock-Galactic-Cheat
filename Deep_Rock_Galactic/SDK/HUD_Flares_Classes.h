#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C
	 * Size -> 0x0085 (FullSize[0x0305] - InheritedSize[0x0280])
	 */
	class UHUD_Flares_C : public UFSDUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      FlareBox;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 InputLabel;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UHUD_FlareIcon_C*>                            Icons;                                                   // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              reasons[0x50];                                           // 0x02A8(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       LaserpointerPressed;                                     // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NGDC[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NextIndex;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Progress;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RechargingFirst;                                         // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFlareProduction(int32_t InNextIndex, float InProgress);
		void CreateIcons(int32_t IconCount);
		void OnItemsLoaded();
		void OnFlareProduction(int32_t NextIndex, float Progress);
		void SetupDynamicHUD();
		void OnFlareCountChanged(int32_t CurrentCount, class UInventoryComponent* Inventory);
		void Construct();
		void UpdateVisibility();
		void OnLaserPointerPressed();
		void OnLaserPointerReleased_Event();
		void PreConstruct(bool IsDesignTime);
		void OnMaxFlareCountChanged_Event(int32_t CurrentCount, class UInventoryComponent* Inventory);
		void ExecuteUbergraph_HUD_Flares(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
