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
	 * Function Basic_Label.Basic_Label_C.SelectTextColor
	 */
	struct UBasic_Label_C_SelectTextColor_Params
	{
	public:
		ENUM_MenuColors                                            _FALSE_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            _TRUE__;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.GetText
	 */
	struct UBasic_Label_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetWrappingPolicy
	 */
	struct UBasic_Label_C_SetWrappingPolicy_Params
	{
	public:
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetWrapTextAt
	 */
	struct UBasic_Label_C_SetWrapTextAt_Params
	{
	public:
		float                                                      WrapTextAt;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetAutoWrapText
	 */
	struct UBasic_Label_C_SetAutoWrapText_Params
	{
	public:
		bool                                                       AutoTextWrap;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetFontSize
	 */
	struct UBasic_Label_C_SetFontSize_Params
	{
	public:
		int32_t                                                    inFontSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NZZJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetMinDesiredWidth
	 */
	struct UBasic_Label_C_SetMinDesiredWidth_Params
	{
	public:
		float                                                      MinDesiredWidth;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetJustification
	 */
	struct UBasic_Label_C_SetJustification_Params
	{
	public:
		ETextJustify                                               Justification;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetTextColor
	 */
	struct UBasic_Label_C_SetTextColor_Params
	{
	public:
		ENUM_MenuColors                                            TextColor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVSV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetText
	 */
	struct UBasic_Label_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.SetMargin
	 */
	struct UBasic_Label_C_SetMargin_Params
	{
	public:
		struct FMargin                                             NewMargin;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.PreConstruct
	 */
	struct UBasic_Label_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Label.Basic_Label_C.ExecuteUbergraph_Basic_Label
	 */
	struct UBasic_Label_C_ExecuteUbergraph_Basic_Label_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
