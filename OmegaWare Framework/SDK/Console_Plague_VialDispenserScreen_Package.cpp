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
	 * 		Name   -> Function Console_Plague_VialDispenserScreen.Console_Plague_VialDispenserScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_Plague_VialDispenserScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_Plague_VialDispenserScreen.Console_Plague_VialDispenserScreen_C.PreConstruct");
		
		UConsole_Plague_VialDispenserScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_Plague_VialDispenserScreen.Console_Plague_VialDispenserScreen_C.ExecuteUbergraph_Console_Plague_VialDispenserScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_Plague_VialDispenserScreen_C::ExecuteUbergraph_Console_Plague_VialDispenserScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_Plague_VialDispenserScreen.Console_Plague_VialDispenserScreen_C.ExecuteUbergraph_Console_Plague_VialDispenserScreen");
		
		UConsole_Plague_VialDispenserScreen_C_ExecuteUbergraph_Console_Plague_VialDispenserScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsole_Plague_VialDispenserScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsole_Plague_VialDispenserScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Console_Plague_VialDispenserScreen.Console_Plague_VialDispenserScreen_C");
		return ptr;
	}

}


