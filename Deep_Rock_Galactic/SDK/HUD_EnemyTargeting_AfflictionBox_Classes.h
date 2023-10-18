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
	 * WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UHUD_EnemyTargeting_AfflictionBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      AfflictionBox;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Size;                                                    // 0x0270(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_JS6N[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAfflictionComponent*                            AfflictionComponent;                                     // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UPawnAffliction*, class UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets;                                       // 0x0280(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              PreviewAfflictions[0x10];                                // 0x02D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UPawnAffliction*>                             IgnoreAfflictions;                                       // 0x02E0(0x0010) Edit, BlueprintVisible

	public:
		void SetAfflictionComponent(class UPawnAfflictionComponent* InAfflictionComponent);
		void ToggleIgnoreAfflictions(TArray<class UPawnAffliction*>* Affliction, bool ShouldIgnore);
		void ToggleIgnoreAffliction(class UPawnAffliction* Affliction, bool ShouldIgnore);
		void ClearAfflictions();
		void ToggleAffliction(class UPawnAffliction* InAffliction, bool InVisible);
		void SetTarget(class AActor* InAfflictionTarget);
		void OnAfflictionActivatedEvent_Event(class UPawnAffliction* Affliction);
		void OnAfflictionDeactivatedEvent_Event(class UPawnAffliction* Affliction);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
