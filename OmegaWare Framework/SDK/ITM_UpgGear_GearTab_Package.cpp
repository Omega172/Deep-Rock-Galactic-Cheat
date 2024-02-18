/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.CreateToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_UpgGear_GearTab_C::CreateToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.CreateToolTip");
		
		UITM_UpgGear_GearTab_C_CreateToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsItemUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_GearTab_C::UpdateNotification(bool IsItemUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification");
		
		UITM_UpgGear_GearTab_C_UpdateNotification_Params params {};
		params.IsItemUnlocked = IsItemUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::GetItemClass(class UClass** itemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass");
		
		UITM_UpgGear_GearTab_C_GetItemClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemClass != nullptr)
			*itemClass = params.itemClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UITM_UpgGear_GearTab_C::IsItemClass(class UClass* InItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass");
		
		UITM_UpgGear_GearTab_C_IsItemClass_Params params {};
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh");
		
		UITM_UpgGear_GearTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InItemHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_GearTab_C::SetHovered(bool InItemHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered");
		
		UITM_UpgGear_GearTab_C_SetHovered_Params params {};
		params.InItemHovered = InItemHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct");
		
		UITM_UpgGear_GearTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ItemSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_GearTab_C::SetSelected(bool ItemSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected");
		
		UITM_UpgGear_GearTab_C_SetSelected_Params params {};
		params.ItemSelected = ItemSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_GearTab_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct");
		
		UITM_UpgGear_GearTab_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewItemClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::OnItemChanged_Event(class UClass* NewItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event");
		
		UITM_UpgGear_GearTab_C_OnItemChanged_Event_Params params {};
		params.NewItemClass = NewItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::OnItemUINotificationChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange");
		
		UITM_UpgGear_GearTab_C_OnItemUINotificationChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_GearTab_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct");
		
		UITM_UpgGear_GearTab_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::ExecuteUbergraph_ITM_UpgGear_GearTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab");
		
		UITM_UpgGear_GearTab_C_ExecuteUbergraph_ITM_UpgGear_GearTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_GearTab_C*                      Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::OnUnhovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_OnUnhovered__DelegateSignature_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_GearTab_C*                      Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::OnHovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_OnHovered__DelegateSignature_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_GearTab_C*                      Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearTab_C::OnClicked__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature");
		
		UITM_UpgGear_GearTab_C_OnClicked__DelegateSignature_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_GearTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_GearTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C");
		return ptr;
	}

}


