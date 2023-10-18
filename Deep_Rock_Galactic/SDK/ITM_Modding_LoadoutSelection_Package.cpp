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
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.GetSelectorTooltipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Modding_LoadoutSelection_C::GetSelectorTooltipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.GetSelectorTooltipWidget");
		
		UITM_Modding_LoadoutSelection_C_GetSelectorTooltipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.SetSelectorVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Modding_LoadoutSelection_C::SetSelectorVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.SetSelectorVisibility");
		
		UITM_Modding_LoadoutSelection_C_SetSelectorVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.Construct");
		
		UITM_Modding_LoadoutSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32_t ImageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature_Params params {};
		params.Texture = Texture;
		params.ImageIndex = ImageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.ExecuteUbergraph_ITM_Modding_LoadoutSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_LoadoutSelection_C::ExecuteUbergraph_ITM_Modding_LoadoutSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.ExecuteUbergraph_ITM_Modding_LoadoutSelection");
		
		UITM_Modding_LoadoutSelection_C_ExecuteUbergraph_ITM_Modding_LoadoutSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Modding_LoadoutSelection_C::OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.OnSlotLoaded__DelegateSignature");
		
		UITM_Modding_LoadoutSelection_C_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Modding_LoadoutSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Modding_LoadoutSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C");
		return ptr;
	}

}


