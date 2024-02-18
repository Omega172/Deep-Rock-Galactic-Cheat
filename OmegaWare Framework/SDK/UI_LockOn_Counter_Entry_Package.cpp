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
	 * 		Name   -> Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewIsOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewIsLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_Counter_Entry_C::SetState(bool NewIsOn, bool NewIsLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.SetState");
		
		UUI_LockOn_Counter_Entry_C_SetState_Params params {};
		params.NewIsOn = NewIsOn;
		params.NewIsLimit = NewIsLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_Counter_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.PreConstruct");
		
		UUI_LockOn_Counter_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.ExecuteUbergraph_UI_LockOn_Counter_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Counter_Entry_C::ExecuteUbergraph_UI_LockOn_Counter_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.ExecuteUbergraph_UI_LockOn_Counter_Entry");
		
		UUI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockOn_Counter_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockOn_Counter_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C");
		return ptr;
	}

}


