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
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Overclocks_Equip_Item_C::GetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget");
		
		UITM_Overclocks_Equip_Item_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemUpgradeStatus                                 InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::SetState(EItemUpgradeStatus InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState");
		
		UITM_Overclocks_Equip_Item_C_SetState_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Overclock                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::GetOverClock(class UItemUpgrade** Overclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock");
		
		UITM_Overclocks_Equip_Item_C_GetOverClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overclock != nullptr)
			*Overclock = params.Overclock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                InOverclock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::SetOverclock(class UItemUpgrade* InOverclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock");
		
		UITM_Overclocks_Equip_Item_C_SetOverclock_Params params {};
		params.InOverclock = InOverclock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::SetIconSize(int32_t NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize");
		
		UITM_Overclocks_Equip_Item_C_SetIconSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclocks_Equip_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct");
		
		UITM_Overclocks_Equip_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::ExecuteUbergraph_ITM_Overclocks_Equip_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item");
		
		UITM_Overclocks_Equip_Item_C_ExecuteUbergraph_ITM_Overclocks_Equip_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::OnClicked__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_OnClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::OnUnhovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_OnUnhovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_Item_C::OnHovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature");
		
		UITM_Overclocks_Equip_Item_C_OnHovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Overclocks_Equip_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Overclocks_Equip_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C");
		return ptr;
	}

}


