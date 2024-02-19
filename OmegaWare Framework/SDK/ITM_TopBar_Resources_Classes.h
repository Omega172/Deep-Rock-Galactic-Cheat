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
	 * WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C
	 * Size -> 0x0073 (FullSize[0x02D3] - InheritedSize[0x0260])
	 */
	class UITM_TopBar_Resources_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      ParentBox;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UResourceData*>                               Resources;                                               // 0x0270(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;                                         // 0x0280(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsDesignTime;                                            // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HideWhenZero;                                            // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoCountAnim;                                             // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetResourceAmount(class UResourceData* Resource, float* Amount);
		void AddResource(class UResourceData* InResource, bool InHideWhenZero);
		void SetResources(TArray<class UResourceData*>* InResources);
		void PreConstruct(bool IsDesignTime);
		void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
		void ExecuteUbergraph_ITM_TopBar_Resources(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
