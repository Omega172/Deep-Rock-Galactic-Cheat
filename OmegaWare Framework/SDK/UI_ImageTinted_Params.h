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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.SetBrushSize
	 */
	struct UUI_ImageTinted_C_SetBrushSize_Params
	{
	public:
		struct FVector2D                                           BrushImageSize;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.SelectTint
	 */
	struct UUI_ImageTinted_C_SelectTint_Params
	{
	public:
		ENUM_MenuColors                                            _FALSE_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            _TRUE__;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.GetBrush
	 */
	struct UUI_ImageTinted_C_GetBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
	 */
	struct UUI_ImageTinted_C_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MatchSize;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19OM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.SetTint
	 */
	struct UUI_ImageTinted_C_SetTint_Params
	{
	public:
		ENUM_MenuColors                                            InTint;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGBC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InOpacity;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
	 */
	struct UUI_ImageTinted_C_SetBrush_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
	 */
	struct UUI_ImageTinted_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
	 */
	struct UUI_ImageTinted_C_ExecuteUbergraph_UI_ImageTinted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
