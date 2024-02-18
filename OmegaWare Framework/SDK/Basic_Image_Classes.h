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
	 * WidgetBlueprintGeneratedClass Basic_Image.Basic_Image_C
	 * Size -> 0x0210 (FullSize[0x0470] - InheritedSize[0x0260])
	 */
	class UBasic_Image_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimFadeIn;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ImageComponent;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         Brush;                                                   // 0x0278(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		ENUM_MenuColors                                            Tint;                                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_62L0[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TintOpacity;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<class FName, float>                                   Scalars;                                                 // 0x0308(0x0050) Edit, BlueprintVisible, BlueprintReadOnly
		TMap<class FName, struct FLinearColor>                     Vectors;                                                 // 0x0358(0x0050) Edit, BlueprintVisible, BlueprintReadOnly
		unsigned char                                              Textures[0x50];                                          // 0x03A8(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, struct FMenuColorAndOpacity>             MenuColors;                                              // 0x03F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly
		class FText                                                BasicToolTipText;                                        // 0x0448(0x0018) Edit, BlueprintVisible
		struct FVector2D                                           BasicToolTipPosition;                                    // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           BasicToolTipAlignment;                                   // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ScaleToFitY(float InHeight);
		void ScaleToFitX(float InWidth);
		void SetBasicToolTip(const class FText& BasicToolTipText, const struct FVector2D& BasicToolTipPosition, const struct FVector2D& BasicToolTipAlignment);
		class UWidget* GetBasicToolTip();
		void SetDynamicMaterialValues();
		void SetDynamicMaterialTexture(const class FName& ParameterName, class UTexture* Value);
		void SetDynamicMaterialVector(const class FName& ParameterName, const struct FLinearColor& Value);
		void SetDynamicMaterialScalar(const class FName& ParameterName, float Value);
		void FadeOut(float InDuration);
		void FadeIn(float InDuration);
		void GetBrushSize(struct FVector2D* BrushImageSize);
		void SetBrushSize(const struct FVector2D& DesiredSize);
		void SetBrushFromSoftTexture(bool bMatchSize);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		void SetTintAndOpacity(ENUM_MenuColors InTint, float InTintOpacity);
		void SetTintOpacity(float InOpacity);
		void SetTint(ENUM_MenuColors InTint);
		void SelectTint(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition, ENUM_MenuColors* SelectedTint);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrush(const struct FSlateBrush& InBrush);
		void GetBrush(struct FSlateBrush* Brush);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_Basic_Image(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
