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
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver
	 */
	struct UBasic_Menu_MinimalWindow_C_IsMouseOver_Params
	{
	public:
		bool                                                       MouseOver;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived
	 */
	struct UBasic_Menu_MinimalWindow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct
	 */
	struct UBasic_Menu_MinimalWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost
	 */
	struct UBasic_Menu_MinimalWindow_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter
	 */
	struct UBasic_Menu_MinimalWindow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave
	 */
	struct UBasic_Menu_MinimalWindow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow
	 */
	struct UBasic_Menu_MinimalWindow_C_ExecuteUbergraph_Basic_Menu_MinimalWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_OnLostFocus__DelegateSignature_Params
	{
	public:
		class UBasic_Menu_MinimalWindow_C*                         Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UBasic_Menu_MinimalWindow_C*                         Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_OnCursorLeave__DelegateSignature_Params
	{
	public:
		class UBasic_Menu_MinimalWindow_C*                         Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_OnCursorEnter__DelegateSignature_Params
	{
	public:
		class UBasic_Menu_MinimalWindow_C*                         Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_ThickBars__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature
	 */
	struct UBasic_Menu_MinimalWindow_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
