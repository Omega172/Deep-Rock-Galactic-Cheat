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
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UITM_BaseUpgradeIcon_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable");
		
		UITM_BaseUpgradeIcon_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemUpgradeStatus                                 InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLockRequirement                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  LockTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    LockTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InShowEquippedAsBorder                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InShowLockIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InShowLockRequirement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InTierLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_BaseUpgradeIcon_C::Update(class UTexture2D* InIcon, EItemUpgradeStatus InStatus, int32_t InLockRequirement, class UTexture2D* LockTexture, ENUM_MenuColors LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update");
		
		UITM_BaseUpgradeIcon_C_Update_Params params {};
		params.InIcon = InIcon;
		params.InStatus = InStatus;
		params.InLockRequirement = InLockRequirement;
		params.LockTexture = LockTexture;
		params.LockTint = LockTint;
		params.InShowEquippedAsBorder = InShowEquippedAsBorder;
		params.InShowLockIcon = InShowLockIcon;
		params.InShowLockRequirement = InShowLockRequirement;
		params.InTierLocked = InTierLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_BaseUpgradeIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct");
		
		UITM_BaseUpgradeIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BaseUpgradeIcon_C::ExecuteUbergraph_ITM_BaseUpgradeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon");
		
		UITM_BaseUpgradeIcon_C_ExecuteUbergraph_ITM_BaseUpgradeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BaseUpgradeIcon_C::OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_OnClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BaseUpgradeIcon_C::OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_OnHoverEnd__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_BaseUpgradeIcon_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BaseUpgradeIcon_C::OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature");
		
		UITM_BaseUpgradeIcon_C_OnHoverBegin__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_BaseUpgradeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_BaseUpgradeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C");
		return ptr;
	}

}


