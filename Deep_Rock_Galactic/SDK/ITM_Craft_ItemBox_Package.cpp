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
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.RefreshCanAfford
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::RefreshCanAfford()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.RefreshCanAfford");
		
		UITM_Craft_ItemBox_C_RefreshCanAfford_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::FreeRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget");
		
		UITM_Craft_ItemBox_C_FreeRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::CreateResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources");
		
		UITM_Craft_ItemBox_C_CreateResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::SetCostColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor");
		
		UITM_Craft_ItemBox_C_SetCostColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::SetRankRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements");
		
		UITM_Craft_ItemBox_C_SetRankRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::SetTextAndIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon");
		
		UITM_Craft_ItemBox_C_SetTextAndIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::SetCanUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock");
		
		UITM_Craft_ItemBox_C_SetCanUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemBox_C::SetData(class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData");
		
		UITM_Craft_ItemBox_C_SetData_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Craft_ItemBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct");
		
		UITM_Craft_ItemBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemBox_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update");
		
		UITM_Craft_ItemBox_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemBox_C::ExecuteUbergraph_ITM_Craft_ItemBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox");
		
		UITM_Craft_ItemBox_C_ExecuteUbergraph_ITM_Craft_ItemBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Craft_ItemBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Craft_ItemBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Craft_ItemBox.ITM_Craft_ItemBox_C");
		return ptr;
	}

}


