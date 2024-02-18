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
	 * WidgetBlueprintGeneratedClass HUD_EnemyTargeting.HUD_EnemyTargeting_C
	 * Size -> 0x0065 (FullSize[0x030D] - InheritedSize[0x02A8])
	 */
	class UHUD_EnemyTargeting_C : public ULookingAtWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DeadAnim;                                                // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Intro;                                                   // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ContentSwitcher;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DeadIcon;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_EnemyTargeting_HealthBar_C*                     HealthBar;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_EnemyTargeting_HealthBar_Elite_C*               HealthBar_Elite;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_EnemyTargeting_AfflictionBox_C*                 HUD_EnemyTargeting_AfflictionBox;                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_EnemyTargeting_Temperature_C*                   Icon_Temperature;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      StatusIconBox;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        VisibilityCanvas;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector                                             LastTargetLocation;                                      // 0x0300(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HealthBarVisible;                                        // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetContent(class ULookingAtContentWidget** OutActiveContent);
		void SelectContent();
		void UpdateScreenPosition();
		void ClampToScreenHeight(float CoordinateY, float Bound, float* ClampedY);
		void UpdateWidgets(bool Reset);
		void HandleTargetDamaged(float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
		void SetIsVisible(bool IsVisible);
		void ReceiveTargetLost();
		void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
		void ReceiveNewTarget(class AActor* InCurrentTarget);
		void Construct();
		void OnDamagedEnemy(float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_HUD_EnemyTargeting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
