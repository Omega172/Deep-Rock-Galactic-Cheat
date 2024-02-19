/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh");
		
		UITM_ItemUnlockedIcon_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren");
		
		UITM_ItemUnlockedIcon_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::ChildNotificationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged");
		
		UITM_ItemUnlockedIcon_C_ChildNotificationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_ItemUnlockedIcon_C*                     ChildIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ItemUnlockedIcon_C::AddChildNotification(class UITM_ItemUnlockedIcon_C* ChildIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification");
		
		UITM_ItemUnlockedIcon_C_AddChildNotification_Params params {};
		params.ChildIcon = ChildIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::RemoveNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification");
		
		UITM_ItemUnlockedIcon_C_RemoveNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectsWithID                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               MatchChildNotifications                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ItemUnlockedIcon_C::SetItemIDArray(TArray<class UObject*>* ObjectsWithID, bool MatchChildNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray");
		
		UITM_ItemUnlockedIcon_C_SetItemIDArray_Params params {};
		params.MatchChildNotifications = MatchChildNotifications;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectsWithID != nullptr)
			*ObjectsWithID = params.ObjectsWithID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::SetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible");
		
		UITM_ItemUnlockedIcon_C_SetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::HideIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon");
		
		UITM_ItemUnlockedIcon_C_HideIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::OnAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished");
		
		UITM_ItemUnlockedIcon_C_OnAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ItemUnlockedIcon_C::ExecuteUbergraph_ITM_ItemUnlockedIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon");
		
		UITM_ItemUnlockedIcon_C_ExecuteUbergraph_ITM_ItemUnlockedIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::OnChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature");
		
		UITM_ItemUnlockedIcon_C_OnChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_ItemUnlockedIcon_C::OnNotificationRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature");
		
		UITM_ItemUnlockedIcon_C_OnNotificationRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_ItemUnlockedIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_ItemUnlockedIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C");
		return ptr;
	}

}


