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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Basic_Image.Basic_Image_C.ScaleToFitY
	 */
	struct UBasic_Image_C_ScaleToFitY_Params
	{
	public:
		float                                                      InHeight;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y3XZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Image.Basic_Image_C.ScaleToFitX
	 */
	struct UBasic_Image_C_ScaleToFitX_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D64K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetBasicToolTip
	 */
	struct UBasic_Image_C_SetBasicToolTip_Params
	{
	public:
		class FText                                                BasicToolTipText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FVector2D                                           BasicToolTipPosition;                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           BasicToolTipAlignment;                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.GetBasicToolTip
	 */
	struct UBasic_Image_C_GetBasicToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetDynamicMaterialValues
	 */
	struct UBasic_Image_C_SetDynamicMaterialValues_Params
	{	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetDynamicMaterialTexture
	 */
	struct UBasic_Image_C_SetDynamicMaterialTexture_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            Value;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetDynamicMaterialVector
	 */
	struct UBasic_Image_C_SetDynamicMaterialVector_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetDynamicMaterialScalar
	 */
	struct UBasic_Image_C_SetDynamicMaterialScalar_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AI5I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Image.Basic_Image_C.FadeOut
	 */
	struct UBasic_Image_C_FadeOut_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.FadeIn
	 */
	struct UBasic_Image_C_FadeIn_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.GetBrushSize
	 */
	struct UBasic_Image_C_GetBrushSize_Params
	{
	public:
		struct FVector2D                                           BrushImageSize;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetBrushSize
	 */
	struct UBasic_Image_C_SetBrushSize_Params
	{
	public:
		struct FVector2D                                           DesiredSize;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetBrushFromSoftTexture
	 */
	struct UBasic_Image_C_SetBrushFromSoftTexture_Params
	{
	public:
		unsigned char                                              UnknownData_ZP5U[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bMatchSize;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.GetDynamicMaterial
	 */
	struct UBasic_Image_C_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetTintAndOpacity
	 */
	struct UBasic_Image_C_SetTintAndOpacity_Params
	{
	public:
		ENUM_MenuColors                                            InTint;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E49E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InTintOpacity;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetTintOpacity
	 */
	struct UBasic_Image_C_SetTintOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetTint
	 */
	struct UBasic_Image_C_SetTint_Params
	{
	public:
		ENUM_MenuColors                                            InTint;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SelectTint
	 */
	struct UBasic_Image_C_SelectTint_Params
	{
	public:
		ENUM_MenuColors                                            _FALSE_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            _TRUE__;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENUM_MenuColors                                            SelectedTint;                                            // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetBrushFromTexture
	 */
	struct UBasic_Image_C_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.SetBrush
	 */
	struct UBasic_Image_C_SetBrush_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.GetBrush
	 */
	struct UBasic_Image_C_GetBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.PreConstruct
	 */
	struct UBasic_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Image.Basic_Image_C.Construct
	 */
	struct UBasic_Image_C_Construct_Params
	{	};

	/**
	 * Function Basic_Image.Basic_Image_C.ExecuteUbergraph_Basic_Image
	 */
	struct UBasic_Image_C_ExecuteUbergraph_Basic_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
