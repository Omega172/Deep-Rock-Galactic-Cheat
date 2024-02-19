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
	 * WidgetBlueprintGeneratedClass OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C
	 * Size -> 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
	 */
	class UOnScreenIndicator_Actor_Shout_C : public UShoutWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_ShoutBox_C*                                      ShoutBox;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FVector2D CalculateScreenPos();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnShout();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature(bool InShoutActive);
		void UpdateScreenPosAndDistance();
		void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
