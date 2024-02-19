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
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SeasonXP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AddedXP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSeasonEvent>                        SeasonEvents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_SeasonProgressBar_C::AnimateCount(int32_t SeasonXP, int32_t AddedXP, TArray<struct FSeasonEvent> SeasonEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateCount");
		
		UITM_SeasonProgressBar_C_AnimateCount_Params params {};
		params.SeasonXP = SeasonXP;
		params.AddedXP = AddedXP;
		params.SeasonEvents = SeasonEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FromLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ToLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FromPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FromXP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ToXP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::AnimateXP(int32_t FromLevel, int32_t ToLevel, float FromPercent, float ToPercent, int32_t FromXP, int32_t ToXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateXP");
		
		UITM_SeasonProgressBar_C_AnimateXP_Params params {};
		params.FromLevel = FromLevel;
		params.ToLevel = ToLevel;
		params.FromPercent = FromPercent;
		params.ToPercent = ToPercent;
		params.FromXP = FromXP;
		params.ToXP = ToXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::UpdateText(int32_t CurrentLevel, float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateText");
		
		UITM_SeasonProgressBar_C_UpdateText_Params params {};
		params.CurrentLevel = CurrentLevel;
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateTextFromXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::UpdateTextFromXP(int32_t XP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateTextFromXP");
		
		UITM_SeasonProgressBar_C_UpdateTextFromXP_Params params {};
		params.XP = XP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateXPText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            currXP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::UpdateXPText(int32_t currXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateXPText");
		
		UITM_SeasonProgressBar_C_UpdateXPText_Params params {};
		params.currXP = currXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ContinueCount
	 * 		Flags  -> ()
	 */
	void UITM_SeasonProgressBar_C::ContinueCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ContinueCount");
		
		UITM_SeasonProgressBar_C_ContinueCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SeasonProgressBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.PreConstruct");
		
		UITM_SeasonProgressBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ExecuteUbergraph_ITM_SeasonProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::ExecuteUbergraph_ITM_SeasonProgressBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ExecuteUbergraph_ITM_SeasonProgressBar");
		
		UITM_SeasonProgressBar_C_ExecuteUbergraph_ITM_SeasonProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.LevelReached__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SeasonProgressBar_C::LevelReached__DelegateSignature(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.LevelReached__DelegateSignature");
		
		UITM_SeasonProgressBar_C_LevelReached__DelegateSignature_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.XPCountFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SeasonProgressBar_C::XPCountFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.XPCountFinished__DelegateSignature");
		
		UITM_SeasonProgressBar_C_XPCountFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SeasonProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SeasonProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SeasonProgressBar.ITM_SeasonProgressBar_C");
		return ptr;
	}

}


