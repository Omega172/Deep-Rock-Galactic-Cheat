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
	 * 		Name   -> Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HistoryCount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Hoop_History_C::GetHistoryCount(int32_t* HistoryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount");
		
		UUI_Hoop_History_C_GetHistoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HistoryCount != nullptr)
			*HistoryCount = params.HistoryCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
	 * 		Flags  -> ()
	 */
	void UUI_Hoop_History_C::OnRep_Scores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores");
		
		UUI_Hoop_History_C_OnRep_Scores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_History.UI_Hoop_History_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Hoop_History_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.Construct");
		
		UUI_Hoop_History_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Scores                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Hoop_History_C::UpdateScores(TArray<int32_t> Scores)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores");
		
		UUI_Hoop_History_C_UpdateScores_Params params {};
		params.Scores = Scores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Hoop_History_C::ExecuteUbergraph_UI_Hoop_History(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History");
		
		UUI_Hoop_History_C_ExecuteUbergraph_UI_Hoop_History_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Hoop_History_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Hoop_History_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Hoop_History.UI_Hoop_History_C");
		return ptr;
	}

}


