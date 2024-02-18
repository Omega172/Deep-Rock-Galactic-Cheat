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
	 * WidgetBlueprintGeneratedClass UI_MissionStats_Categories.UI_MissionStats_Categories_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UUI_MissionStats_Categories_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_ArrowButton02_C*                              ArrowLeft;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ArrowButton02_C*                              ArrowRight;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CategoryParent;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  CategoryIcons;                                           // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUI_MissionStats_Category_C*>                 Widgets;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnSelectedChanged;                                       // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_MissionStats_Category_C*                         SelectedCategory;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SelectNext(bool ForwardDirection);
		void AddVerticalBar();
		void AddCategory(class UTexture2D* CategoryIcon, bool IsAllCategory, class UUI_MissionStats_Category_C** CategoryWidget);
		void GetCategorySelection(TArray<class UTexture2D*>* Selection);
		void PreConstruct(bool IsDesignTime);
		void SetCategories(TArray<class UTexture2D*> CategoryIcons);
		void SetupWidgetEvents(class UUI_MissionStats_Category_C* Widget);
		void OnCategoryClicked(class UUI_MissionStats_Category_C* CategoryWidget, bool IsSelected);
		void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void ExecuteUbergraph_UI_MissionStats_Categories(int32_t EntryPoint);
		void OnSelectedChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
