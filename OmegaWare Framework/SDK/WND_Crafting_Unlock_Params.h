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
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ReceiveCanCloseWindow
	 */
	struct UWND_Crafting_Unlock_C_ReceiveCanCloseWindow_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                InKey;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InIsMouseEvent;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnMouseButtonUp
	 */
	struct UWND_Crafting_Unlock_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
	 */
	struct UWND_Crafting_Unlock_C_CreateResources_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
	 */
	struct UWND_Crafting_Unlock_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithResources
	 */
	struct UWND_Crafting_Unlock_C_BuyWithResources_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
	 */
	struct UWND_Crafting_Unlock_C_Cancel_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
	 */
	struct UWND_Crafting_Unlock_C_Show_Params
	{
	public:
		unsigned char                                              UnknownData_TY49[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFSDPlayerState*                                     Player;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Character;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
	 */
	struct UWND_Crafting_Unlock_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
	 */
	struct UWND_Crafting_Unlock_C_Close_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWND_Crafting_Unlock_C_BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_FlatButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWND_Crafting_Unlock_C_BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_FlatButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWND_Crafting_Unlock_C_BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_Crafting_Unlock_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_Crafting_Unlock_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Equip
	 */
	struct UWND_Crafting_Unlock_C_Equip_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithFashionite
	 */
	struct UWND_Crafting_Unlock_C_BuyWithFashionite_Params
	{	};

	/**
	 * Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
	 */
	struct UWND_Crafting_Unlock_C_ExecuteUbergraph_WND_Crafting_Unlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
