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
	 * WidgetBlueprintGeneratedClass UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UUI_JettyBoots_Obstacle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PointsGathered(const struct FSpriteRect& InRect, bool* OutGatheredPoints, int32_t* OutPoints);
		void CalculateColumn(class UUI_JettyBoots_Column_C* InColumn, int32_t InStartX, int32_t InGateWidth, float InTop, float InBottom, struct FSpriteRect* OutRect);
		void SetColumnRect(class UUI_JettyBoots_Column_C* Column, const struct FSpriteRect& Rect, float StartX);
		void OnInitialize(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutStartX, int32_t* OutEndX);
		void Init(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutEndX);
		void Intersects(const struct FSpriteRect& InRect, bool* OutIntersects);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_JettyBoots_Obstacle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
