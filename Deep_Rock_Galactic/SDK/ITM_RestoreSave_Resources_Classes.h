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
	 * WidgetBlueprintGeneratedClass ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C
	 * Size -> 0x0079 (FullSize[0x02D9] - InheritedSize[0x0260])
	 */
	class UITM_RestoreSave_Resources_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      ParentBox;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ParentBox2;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UResourceData*>                               Resources;                                               // 0x0278(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;                                         // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsDesignTime;                                            // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddResource(class UResourceData* InResource, bool InHideWhenZero, int32_t Index);
		void SetResources(TArray<class UResourceData*>* InResources);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
		void ExecuteUbergraph_ITM_RestoreSave_Resources(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
