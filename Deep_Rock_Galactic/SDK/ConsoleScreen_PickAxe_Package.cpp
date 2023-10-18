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
	 * 		Name   -> Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_PickAxe_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.Construct");
		
		UConsoleScreen_PickAxe_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.OnItemUINotificationChange
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_PickAxe_C::OnItemUINotificationChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.OnItemUINotificationChange");
		
		UConsoleScreen_PickAxe_C_OnItemUINotificationChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.ExecuteUbergraph_ConsoleScreen_PickAxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_PickAxe_C::ExecuteUbergraph_ConsoleScreen_PickAxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.ExecuteUbergraph_ConsoleScreen_PickAxe");
		
		UConsoleScreen_PickAxe_C_ExecuteUbergraph_ConsoleScreen_PickAxe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_PickAxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_PickAxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C");
		return ptr;
	}

}


