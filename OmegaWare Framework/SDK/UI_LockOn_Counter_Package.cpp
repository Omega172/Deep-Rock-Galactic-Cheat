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
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetCurrentTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::SetCurrentTargets(int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetCurrentTargets");
		
		UUI_LockOn_Counter_C_SetCurrentTargets_Params params {};
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetMaxTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::SetMaxTargets(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetMaxTargets");
		
		UUI_LockOn_Counter_C_SetMaxTargets_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetupTargetCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasCreated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ActiveIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::SetupTargetCounter(bool WasCreated, class UUserWidget* Widget, int32_t ActiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetupTargetCounter");
		
		UUI_LockOn_Counter_C_SetupTargetCounter_Params params {};
		params.WasCreated = WasCreated;
		params.Widget = Widget;
		params.ActiveIndex = ActiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_Counter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.PreConstruct");
		
		UUI_LockOn_Counter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ALockOnWeapon*                               InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::SetItem(class ALockOnWeapon* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetItem");
		
		UUI_LockOn_Counter_C_SetItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.OnLockOnCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurrentCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::OnLockOnCountChanged(int32_t InCurrentCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.OnLockOnCountChanged");
		
		UUI_LockOn_Counter_C_OnLockOnCountChanged_Params params {};
		params.InCurrentCount = InCurrentCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter.UI_LockOn_Counter_C.ExecuteUbergraph_UI_LockOn_Counter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_C::ExecuteUbergraph_UI_LockOn_Counter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter.UI_LockOn_Counter_C.ExecuteUbergraph_UI_LockOn_Counter");
		
		UUI_LockOn_Counter_C_ExecuteUbergraph_UI_LockOn_Counter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockOn_Counter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockOn_Counter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockOn_Counter.UI_LockOn_Counter_C");
		return ptr;
	}

}


