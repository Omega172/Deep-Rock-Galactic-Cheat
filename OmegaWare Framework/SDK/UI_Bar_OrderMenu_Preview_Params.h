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
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
	 */
	struct UUI_Bar_OrderMenu_Preview_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
	 */
	struct UUI_Bar_OrderMenu_Preview_C_SetPreviewItem_Params
	{
	public:
		class USpaceRigBarMenuItem*                                currentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
	 */
	struct UUI_Bar_OrderMenu_Preview_C_Construct_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
	 */
	struct UUI_Bar_OrderMenu_Preview_C_FadeIn_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
	 */
	struct UUI_Bar_OrderMenu_Preview_C_FadeOut_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished
	 */
	struct UUI_Bar_OrderMenu_Preview_C_FadeOutFinished_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Refresh Visuals
	 */
	struct UUI_Bar_OrderMenu_Preview_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
	 */
	struct UUI_Bar_OrderMenu_Preview_C_ExecuteUbergraph_UI_Bar_OrderMenu_Preview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
	 */
	struct UUI_Bar_OrderMenu_Preview_C_OnPreviewItemChanged__DelegateSignature_Params
	{
	public:
		class USpaceRigBarMenuItem*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USpaceRigBarMenuItem*                                NewItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
