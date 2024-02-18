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
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipText
	 */
	struct UITM_LoadoutSelectorBar_C_GetToolTipText_Params
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.Get Selected Button
	 */
	struct UITM_LoadoutSelectorBar_C_GetSelectedButton_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget
	 */
	struct UITM_LoadoutSelectorBar_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData
	 */
	struct UITM_LoadoutSelectorBar_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected
	 */
	struct UITM_LoadoutSelectorBar_C_SetSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed
	 */
	struct UITM_LoadoutSelectorBar_C_SelectPressed_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon
	 */
	struct UITM_LoadoutSelectorBar_C_SetLoadoutIcon_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout
	 */
	struct UITM_LoadoutSelectorBar_C_RefreshLoadout_Params
	{	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible
	 */
	struct UITM_LoadoutSelectorBar_C_SetSelectorVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnPaste
	 */
	struct UITM_LoadoutSelectorBar_C_OnPaste_Params
	{
	public:
		class UITM_LoadoutSelectButton_C*                          LoadoutButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnCopyPasteHovered
	 */
	struct UITM_LoadoutSelectorBar_C_OnCopyPasteHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YP6P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UITM_LoadoutSelectButton_C*                          Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.PreConstruct
	 */
	struct UITM_LoadoutSelectorBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnClicked
	 */
	struct UITM_LoadoutSelectorBar_C_OnClicked_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar
	 */
	struct UITM_LoadoutSelectorBar_C_ExecuteUbergraph_ITM_LoadoutSelectorBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.CopyLoadoutAtIndex__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_CopyLoadoutAtIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature
	 */
	struct UITM_LoadoutSelectorBar_C_NewLoadoutSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
