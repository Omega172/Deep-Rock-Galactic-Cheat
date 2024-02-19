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
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct
	 */
	struct UItm_HeaderCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected
	 */
	struct UItm_HeaderCategory_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor
	 */
	struct UItm_HeaderCategory_C_SetColor_Params
	{
	public:
		struct FSlateColor                                         Filled;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         outline;                                                 // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         Text;                                                    // 0x0050(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText
	 */
	struct UItm_HeaderCategory_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory
	 */
	struct UItm_HeaderCategory_C_ExecuteUbergraph_Itm_HeaderCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature
	 */
	struct UItm_HeaderCategory_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
