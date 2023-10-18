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
	 * 		Name   -> Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_SeasonTerminal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.Construct");
		
		UConsoleScreen_SeasonTerminal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.ExecuteUbergraph_ConsoleScreen_SeasonTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_SeasonTerminal_C::ExecuteUbergraph_ConsoleScreen_SeasonTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.ExecuteUbergraph_ConsoleScreen_SeasonTerminal");
		
		UConsoleScreen_SeasonTerminal_C_ExecuteUbergraph_ConsoleScreen_SeasonTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_SeasonTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_SeasonTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C");
		return ptr;
	}

}


