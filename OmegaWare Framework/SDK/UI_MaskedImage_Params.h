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
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack
	 */
	struct UUI_MaskedImage_C_SetMaskBlack_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial
	 */
	struct UUI_MaskedImage_C_UpdateMaterial_Params
	{	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs
	 */
	struct UUI_MaskedImage_C_SetDrawAs_Params
	{
	public:
		ESlateBrushDrawType                                        InBrush_DrawAs;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKHX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted
	 */
	struct UUI_MaskedImage_C_SetMaskInverted_Params
	{
	public:
		bool                                                       Invert;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetMask
	 */
	struct UUI_MaskedImage_C_SetMask_Params
	{
	public:
		class UTexture*                                            Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint
	 */
	struct UUI_MaskedImage_C_SetImageTint_Params
	{
	public:
		struct FSlateColor                                         TintColor;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize
	 */
	struct UUI_MaskedImage_C_SetImageSize_Params
	{
	public:
		struct FVector2D                                           DesiredSize;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.SetImage
	 */
	struct UUI_MaskedImage_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MatchSize;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_698R[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct
	 */
	struct UUI_MaskedImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage
	 */
	struct UUI_MaskedImage_C_ExecuteUbergraph_UI_MaskedImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
