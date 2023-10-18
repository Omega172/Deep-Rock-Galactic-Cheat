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
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext
	 */
	struct UScrollLIst_Category_Window_C_SelectNext_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton
	 */
	struct UScrollLIst_Category_Window_C_CreateButton_Params
	{
	public:
		struct FMM_ButtonInfo                                      Button;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FText                                                HeaderText;                                              // 0x0070(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldClick;                                             // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowArrow;                                               // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULH3[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x008C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked
	 */
	struct UScrollLIst_Category_Window_C_OnClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData
	 */
	struct UScrollLIst_Category_Window_C_SetData_Params
	{
	public:
		class U_MENU_MinersManual_C*                               _MENU_MinersManual;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro
	 */
	struct UScrollLIst_Category_Window_C_PlayButtonIntro_Params
	{
	public:
		class ULore_List_Element_C*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear
	 */
	struct UScrollLIst_Category_Window_C_Clear_Params
	{	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick
	 */
	struct UScrollLIst_Category_Window_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal
	 */
	struct UScrollLIst_Category_Window_C_PlayAnimInternal_Params
	{
	public:
		class ULore_List_Element_C*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader
	 */
	struct UScrollLIst_Category_Window_C_CheckForHeader_Params
	{
	public:
		class ULore_List_Element_C*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct
	 */
	struct UScrollLIst_Category_Window_C_Construct_Params
	{	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent
	 */
	struct UScrollLIst_Category_Window_C_CustomEvent_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay
	 */
	struct UScrollLIst_Category_Window_C_ScrollIntoViewDelay_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection
	 */
	struct UScrollLIst_Category_Window_C_PrepareNewSection_Params
	{
	public:
		int32_t                                                    NumberOfButtons;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized
	 */
	struct UScrollLIst_Category_Window_C_OnInitialized_Params
	{	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace
	 */
	struct UScrollLIst_Category_Window_C_DecreseFillSpace_Params
	{	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton
	 */
	struct UScrollLIst_Category_Window_C_SetSelectedButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window
	 */
	struct UScrollLIst_Category_Window_C_ExecuteUbergraph_ScrollLIst_Category_Window_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEFA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
