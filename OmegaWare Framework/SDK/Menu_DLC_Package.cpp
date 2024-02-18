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
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.AddDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameDLC*                                    InDLC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::AddDLC(class UGameDLC* InDLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.AddDLC");
		
		UMenu_DLC_C_AddDLC_Params params {};
		params.InDLC = InDLC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.Clear
	 * 		Flags  -> ()
	 */
	void UMenu_DLC_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.Clear");
		
		UMenu_DLC_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenu_DLC_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.PreConstruct");
		
		UMenu_DLC_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.OnEntryHoverBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_DLC_Entry_C*                            InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::OnEntryHoverBegin(class UITM_DLC_Entry_C* InEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.OnEntryHoverBegin");
		
		UMenu_DLC_C_OnEntryHoverBegin_Params params {};
		params.InEntry = InEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.OnEntryHoverEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_DLC_Entry_C*                            InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::OnEntryHoverEnd(class UITM_DLC_Entry_C* InEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.OnEntryHoverEnd");
		
		UMenu_DLC_C_OnEntryHoverEnd_Params params {};
		params.InEntry = InEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenu_DLC_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.Construct");
		
		UMenu_DLC_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.OnVisibilityChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::OnVisibilityChanged_Event(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.OnVisibilityChanged_Event");
		
		UMenu_DLC_C_OnVisibilityChanged_Event_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.OnLastWindowClosed_Event
	 * 		Flags  -> ()
	 */
	void UMenu_DLC_C::OnLastWindowClosed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.OnLastWindowClosed_Event");
		
		UMenu_DLC_C_OnLastWindowClosed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.OnEntryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_DLC_Entry_C*                            InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::OnEntryClicked(class UITM_DLC_Entry_C* InEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.OnEntryClicked");
		
		UMenu_DLC_C_OnEntryClicked_Params params {};
		params.InEntry = InEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_DLC.Menu_DLC_C.ExecuteUbergraph_Menu_DLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_DLC_C::ExecuteUbergraph_Menu_DLC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_DLC.Menu_DLC_C.ExecuteUbergraph_Menu_DLC");
		
		UMenu_DLC_C_ExecuteUbergraph_Menu_DLC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenu_DLC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenu_DLC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_DLC.Menu_DLC_C");
		return ptr;
	}

}


