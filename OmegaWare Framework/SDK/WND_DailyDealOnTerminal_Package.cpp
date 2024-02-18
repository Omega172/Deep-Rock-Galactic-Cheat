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
	 * 		Name   -> Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_DailyDealOnTerminal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.Construct");
		
		UWND_DailyDealOnTerminal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.OnCreditsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_DailyDealOnTerminal_C::OnCreditsChanged(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.OnCreditsChanged");
		
		UWND_DailyDealOnTerminal_C_OnCreditsChanged_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.UpdateDealText
	 * 		Flags  -> ()
	 */
	void UWND_DailyDealOnTerminal_C::UpdateDealText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.UpdateDealText");
		
		UWND_DailyDealOnTerminal_C_UpdateDealText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.ExecuteUbergraph_WND_DailyDealOnTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_DailyDealOnTerminal_C::ExecuteUbergraph_WND_DailyDealOnTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.ExecuteUbergraph_WND_DailyDealOnTerminal");
		
		UWND_DailyDealOnTerminal_C_ExecuteUbergraph_WND_DailyDealOnTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_DailyDealOnTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_DailyDealOnTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C");
		return ptr;
	}

}


