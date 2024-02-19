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
	 * WidgetBlueprintGeneratedClass HUD_Cookable_HighExplosive.HUD_Cookable_HighExplosive_C
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class UHUD_Cookable_HighExplosive_C : public UHUD_Cookable_Crosshair_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_CircularProgressBar_C*                           UI_CircularProgressBar;                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void UpdateCookTime(float Progress);
		void ExecuteUbergraph_HUD_Cookable_HighExplosive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
