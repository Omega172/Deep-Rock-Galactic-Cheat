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
	 * 		Name   -> Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_MemorialQuotes_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.Construct");
		
		UConsoleScreen_MemorialQuotes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.ExecuteUbergraph_ConsoleScreen_MemorialQuotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_MemorialQuotes_C::ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.ExecuteUbergraph_ConsoleScreen_MemorialQuotes");
		
		UConsoleScreen_MemorialQuotes_C_ExecuteUbergraph_ConsoleScreen_MemorialQuotes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_MemorialQuotes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_MemorialQuotes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C");
		return ptr;
	}

}


