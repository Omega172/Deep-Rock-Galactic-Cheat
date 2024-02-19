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
	 * WidgetBlueprintGeneratedClass UI_MissionReadOut_Base.UI_MissionReadOut_Base_C
	 * Size -> 0x0031 (FullSize[0x0291] - InheritedSize[0x0260])
	 */
	class UUI_MissionReadOut_Base_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          ContentSlot;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULCD_MissionReadout_NoMissionSelected_C*             LCD_MissionReadout_NoMissionSelected;                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     MissionSwitcher;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMissionSelected;                                       // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowDeepDives;                                           // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CanShowMissionType(class UGeneratedMission* InMission, bool* CanShow);
		void Construct();
		void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
		void ExecuteUbergraph_UI_MissionReadOut_Base(int32_t EntryPoint);
		void OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
