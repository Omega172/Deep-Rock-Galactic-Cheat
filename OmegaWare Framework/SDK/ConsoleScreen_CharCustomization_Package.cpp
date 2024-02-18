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
	 * 		Name   -> Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_CharCustomization_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.Construct");
		
		UConsoleScreen_CharCustomization_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.OnItemUINotificationChange
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_CharCustomization_C::OnItemUINotificationChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.OnItemUINotificationChange");
		
		UConsoleScreen_CharCustomization_C_OnItemUINotificationChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.ExecuteUbergraph_ConsoleScreen_CharCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_CharCustomization_C::ExecuteUbergraph_ConsoleScreen_CharCustomization(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.ExecuteUbergraph_ConsoleScreen_CharCustomization");
		
		UConsoleScreen_CharCustomization_C_ExecuteUbergraph_ConsoleScreen_CharCustomization_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_CharCustomization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_CharCustomization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C");
		return ptr;
	}

}


