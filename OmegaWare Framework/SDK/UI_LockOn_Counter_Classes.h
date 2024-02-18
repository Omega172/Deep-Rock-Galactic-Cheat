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
	 * WidgetBlueprintGeneratedClass UI_LockOn_Counter.UI_LockOn_Counter_C
	 * Size -> 0x0044 (FullSize[0x02A4] - InheritedSize[0x0260])
	 */
	class UUI_LockOn_Counter_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        RowBoxV;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxTargets;                                              // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PHT4[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_LockOn_Counter_Entry_C*>                  TargetCounters;                                          // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ALockOnWeapon*                                       Item;                                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTargets;                                          // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             InnerPadding;                                            // 0x0294(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetCurrentTargets(int32_t InCount);
		void SetMaxTargets(int32_t Count);
		void SetupTargetCounter(bool WasCreated, class UUserWidget* Widget, int32_t ActiveIndex);
		void PreConstruct(bool IsDesignTime);
		void SetItem(class ALockOnWeapon* InItem);
		void OnLockOnCountChanged(int32_t InCurrentCount);
		void ExecuteUbergraph_UI_LockOn_Counter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
