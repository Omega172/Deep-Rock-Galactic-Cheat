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
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
	 */
	struct UUI_MissionStats_Categories_C_SelectNext_Params
	{
	public:
		bool                                                       ForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0XSX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
	 */
	struct UUI_MissionStats_Categories_C_AddVerticalBar_Params
	{	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
	 */
	struct UUI_MissionStats_Categories_C_AddCategory_Params
	{
	public:
		class UTexture2D*                                          CategoryIcon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAllCategory;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QU3P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_MissionStats_Category_C*                         CategoryWidget;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
	 */
	struct UUI_MissionStats_Categories_C_GetCategorySelection_Params
	{
	public:
		TArray<class UTexture2D*>                                  Selection;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
	 */
	struct UUI_MissionStats_Categories_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
	 */
	struct UUI_MissionStats_Categories_C_SetCategories_Params
	{
	public:
		TArray<class UTexture2D*>                                  CategoryIcons;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
	 */
	struct UUI_MissionStats_Categories_C_SetupWidgetEvents_Params
	{
	public:
		class UUI_MissionStats_Category_C*                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
	 */
	struct UUI_MissionStats_Categories_C_OnCategoryClicked_Params
	{
	public:
		class UUI_MissionStats_Category_C*                         CategoryWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UUI_MissionStats_Categories_C_BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UUI_MissionStats_Categories_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
	 */
	struct UUI_MissionStats_Categories_C_ExecuteUbergraph_UI_MissionStats_Categories_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
	 */
	struct UUI_MissionStats_Categories_C_OnSelectedChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
