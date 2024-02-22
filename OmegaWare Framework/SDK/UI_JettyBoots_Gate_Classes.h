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
	 * WidgetBlueprintGeneratedClass UI_JettyBoots_Gate.UI_JettyBoots_Gate_C
	 * Size -> 0x0059 (FullSize[0x02C1] - InheritedSize[0x0268])
	 */
	class UUI_JettyBoots_Gate_C : public UUI_JettyBoots_Obstacle_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_JettyBoots_Column_C*                             BottomColumn;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoots_Column_C*                             TopColumn;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    GateWidth;                                               // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSpriteRect                                         TopRect;                                                 // 0x0284(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSpriteRect                                         BottomRect;                                              // 0x0294(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FJettyBootSetting                                   PreviewLevelSettings;                                    // 0x02A4(0x0018) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    PreviewCanvasHeight;                                     // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PreviewFirstGate;                                        // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor

	public:
		void OnInitialize(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutStartX, int32_t* OutEndX);
		void Intersects(const struct FSpriteRect& InRect, bool* OutIntersects);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_JettyBoots_Gate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
