/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UHUD_Countdown_Extraction_C::FormatTime(int32_t Time, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime");
		
		UHUD_Countdown_Extraction_C_FormatTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        countdownText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Countdown_Extraction_C::CountdownStarted(const class FText& countdownText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted");
		
		UHUD_Countdown_Extraction_C_CountdownStarted_Params params {};
		params.countdownText = countdownText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SecondsLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Countdown_Extraction_C::OnCountdownTimeChanged(int32_t SecondsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged");
		
		UHUD_Countdown_Extraction_C_OnCountdownTimeChanged_Params params {};
		params.SecondsLeft = SecondsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Countdown_Extraction_C::OnCountdownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished");
		
		UHUD_Countdown_Extraction_C_OnCountdownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Countdown_Extraction_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct");
		
		UHUD_Countdown_Extraction_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Countdown_Extraction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct");
		
		UHUD_Countdown_Extraction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Countdown_Extraction_C::ExecuteUbergraph_HUD_Countdown_Extraction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction");
		
		UHUD_Countdown_Extraction_C_ExecuteUbergraph_HUD_Countdown_Extraction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Countdown_Extraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Countdown_Extraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Countdown_Extraction.HUD_Countdown_Extraction_C");
		return ptr;
	}

}


