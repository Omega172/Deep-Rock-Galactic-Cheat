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
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
	 */
	struct UBasic_BG_CutCorner_W_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
	 */
	struct UBasic_BG_CutCorner_W_Image_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          ImageBackground;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          front;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
	 */
	struct UBasic_BG_CutCorner_W_Image_C_SetOutlineColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
	 */
	struct UBasic_BG_CutCorner_W_Image_C_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
	 */
	struct UBasic_BG_CutCorner_W_Image_C_UpdateCornorSize_Params
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
	 */
	struct UBasic_BG_CutCorner_W_Image_C_SetStyle_Params
	{
	public:
		E_MM_ButtonStyle                                           IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
	 */
	struct UBasic_BG_CutCorner_W_Image_C_ExecuteUbergraph_Basic_BG_CutCorner_W_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8C5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
