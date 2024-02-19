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
	 * WidgetBlueprintGeneratedClass UI_Milestone_View.UI_Milestone_View_C
	 * Size -> 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
	 */
	class UUI_Milestone_View_C : public UUI_KPI_Tab_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWrapBox*                                            ItemWrapBox;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ScrollBarBox_C*                               ScrollBar;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AvailablePerkPoints_C*                           UI_AvailablePerkPoints;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MissionStats_Categories_C*                       UI_MissionStats_Categories;                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUI_Milestone_Item_C*>                        KPI_Items;                                               // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UTexture2D*>                                  Categories;                                              // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTexture2D*>                                  CategoryFilter;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasClaimableMilestones;                                  // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTFP[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHasClaimableChanged;                                   // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UMilestoneAsset*>                             Milestones;                                              // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddMilestone(class UMilestoneAsset* InMilestone);
		void Clear();
		void BuildList();
		void UpdateHasClaimableState();
		void Construct();
		void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature();
		void InitMilestoneWidget(class UUI_Milestone_Item_C* Item);
		void OnItemClaimableChanged_Event(class UUI_Milestone_Item_C* MilestoneItem);
		void Refresh();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_Milestone_View(int32_t EntryPoint);
		void OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
