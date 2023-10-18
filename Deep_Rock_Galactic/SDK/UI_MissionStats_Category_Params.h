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
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
	 */
	struct UUI_MissionStats_Category_C_Click_Params
	{	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
	 */
	struct UUI_MissionStats_Category_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
	 */
	struct UUI_MissionStats_Category_C_GetCategoryIcon_Params
	{
	public:
		class UTexture2D*                                          CategoryIcon;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
	 */
	struct UUI_MissionStats_Category_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
	 */
	struct UUI_MissionStats_Category_C_IsSelected_Params
	{
	public:
		bool                                                       CategorySelected;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
	 */
	struct UUI_MissionStats_Category_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
	 */
	struct UUI_MissionStats_Category_C_SetSelected_Params
	{
	public:
		bool                                                       CategorySelected;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
	 */
	struct UUI_MissionStats_Category_C_Construct_Params
	{	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
	 */
	struct UUI_MissionStats_Category_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
	 */
	struct UUI_MissionStats_Category_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
	 */
	struct UUI_MissionStats_Category_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
	 */
	struct UUI_MissionStats_Category_C_ExecuteUbergraph_UI_MissionStats_Category_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
	 */
	struct UUI_MissionStats_Category_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_MissionStats_Category_C*                         CategoryWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
