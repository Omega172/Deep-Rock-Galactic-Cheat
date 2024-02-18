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
	 * 		Name   -> Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Hoop_HistoryLine_C::SetScore(int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore");
		
		UUI_Hoop_HistoryLine_C_SetScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Hoop_HistoryLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct");
		
		UUI_Hoop_HistoryLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Hoop_HistoryLine_C::ExecuteUbergraph_UI_Hoop_HistoryLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine");
		
		UUI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Hoop_HistoryLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Hoop_HistoryLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C");
		return ptr;
	}

}


