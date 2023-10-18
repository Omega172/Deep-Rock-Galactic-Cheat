/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Headline                                                   (Parm, OutParm)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UITM_LoadoutSelectorBar_C::GetToolTipText(class FText* Headline, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipText");
		
		UITM_LoadoutSelectorBar_C_GetToolTipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Headline != nullptr)
			*Headline = params.Headline;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.Get Selected Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::GetSelectedButton(class UITM_LoadoutSelectButton_C** Button, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.Get Selected Button");
		
		UITM_LoadoutSelectorBar_C_GetSelectedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_LoadoutSelectorBar_C::GetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget");
		
		UITM_LoadoutSelectorBar_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::SetData(class UPlayerCharacterID* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData");
		
		UITM_LoadoutSelectorBar_C_SetData_Params params {};
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::SetSelected(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected");
		
		UITM_LoadoutSelectorBar_C_SetSelected_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32_t ImageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature_Params params {};
		params.Texture = Texture;
		params.ImageIndex = ImageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::SelectPressed(class UITM_LoadoutSelectButton_C* Button, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed");
		
		UITM_LoadoutSelectorBar_C_SelectPressed_Params params {};
		params.Button = Button;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::SetLoadoutIcon(class UITM_LoadoutSelectButton_C* Button, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon");
		
		UITM_LoadoutSelectorBar_C_SetLoadoutIcon_Params params {};
		params.Button = Button;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout
	 * 		Flags  -> ()
	 */
	void UITM_LoadoutSelectorBar_C::RefreshLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout");
		
		UITM_LoadoutSelectorBar_C_RefreshLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadoutSelectorBar_C::SetSelectorVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible");
		
		UITM_LoadoutSelectorBar_C_SetSelectorVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnPaste
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadoutSelectButton_C*                  LoadoutButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::OnPaste(class UITM_LoadoutSelectButton_C* LoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnPaste");
		
		UITM_LoadoutSelectorBar_C_OnPaste_Params params {};
		params.LoadoutButton = LoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnCopyPasteHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UITM_LoadoutSelectButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::OnCopyPasteHovered(bool IsHovered, class UITM_LoadoutSelectButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnCopyPasteHovered");
		
		UITM_LoadoutSelectorBar_C_OnCopyPasteHovered_Params params {};
		params.IsHovered = IsHovered;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadoutSelectorBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.PreConstruct");
		
		UITM_LoadoutSelectorBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadoutSelectorBar_C::OnClicked(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.OnClicked");
		
		UITM_LoadoutSelectorBar_C_OnClicked_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::ExecuteUbergraph_ITM_LoadoutSelectorBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar");
		
		UITM_LoadoutSelectorBar_C_ExecuteUbergraph_ITM_LoadoutSelectorBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.CopyLoadoutAtIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutSelectorBar_C::CopyLoadoutAtIndex__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.CopyLoadoutAtIndex__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_CopyLoadoutAtIndex__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadoutSelectorBar_C::NewLoadoutSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature");
		
		UITM_LoadoutSelectorBar_C_NewLoadoutSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_LoadoutSelectorBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_LoadoutSelectorBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C");
		return ptr;
	}

}


