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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetMenuColor
	 */
	struct UUI_GradientMasked_Image_C_SetMenuColor_Params
	{
	public:
		ENUM_MenuColors                                            InColor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTP1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InOpacity;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault
	 */
	struct UUI_GradientMasked_Image_C_GetTextureOrDefault_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage
	 */
	struct UUI_GradientMasked_Image_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed
	 */
	struct UUI_GradientMasked_Image_C_OnMaterialRefreshed_Params
	{	};

	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.PreConstruct
	 */
	struct UUI_GradientMasked_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image
	 */
	struct UUI_GradientMasked_Image_C_ExecuteUbergraph_UI_GradientMasked_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
