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
	 * Function Basic_Option.Basic_Option_C.SetContentLayout
	 */
	struct UBasic_Option_C_SetContentLayout_Params
	{
	public:
		float                                                      InLeftPadding;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7IPP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_Option.Basic_Option_C.SetIndent
	 */
	struct UBasic_Option_C_SetIndent_Params
	{
	public:
		int32_t                                                    InIndent;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Option.Basic_Option_C.SetOptionText
	 */
	struct UBasic_Option_C_SetOptionText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_Option.Basic_Option_C.PreConstruct
	 */
	struct UBasic_Option_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Option.Basic_Option_C.Tick
	 */
	struct UBasic_Option_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Option.Basic_Option_C.ExecuteUbergraph_Basic_Option
	 */
	struct UBasic_Option_C_ExecuteUbergraph_Basic_Option_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Option.Basic_Option_C.OnHoveringEnd__DelegateSignature
	 */
	struct UBasic_Option_C_OnHoveringEnd__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_Option.Basic_Option_C.OnHoveringBegin__DelegateSignature
	 */
	struct UBasic_Option_C_OnHoveringBegin__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
