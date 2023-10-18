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
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundCue*                                   InSound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RunningMultiText_C::PlayCue(class USoundCue* InSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue");
		
		UUI_RunningMultiText_C_PlayCue_Params params {};
		params.InSound = InSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun
	 * 		Flags  -> ()
	 */
	void UUI_RunningMultiText_C::InitRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun");
		
		UUI_RunningMultiText_C_InitRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine
	 * 		Flags  -> ()
	 */
	void UUI_RunningMultiText_C::SetNextLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine");
		
		UUI_RunningMultiText_C_SetNextLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RunningMultiText_C::SetRunnerProgress(float InProgress, bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress");
		
		UUI_RunningMultiText_C_SetRunnerProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RunningMultiText_C::SetTextRunnerActive(bool Inactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive");
		
		UUI_RunningMultiText_C_SetTextRunnerActive_Params params {};
		params.Inactive = Inactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                InTexts                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_RunningMultiText_C::SetTexts(TArray<class FText>* InTexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts");
		
		UUI_RunningMultiText_C_SetTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTexts != nullptr)
			*InTexts = params.InTexts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NormalizedTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RunningMultiText_C::OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023");
		
		UUI_RunningMultiText_C_OnTick_B06C42A944ABEA2C4BF8E7AF24421023_Params params {};
		params.DeltaTime = DeltaTime;
		params.NormalizedTime = NormalizedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NormalizedTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RunningMultiText_C::Completed_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023");
		
		UUI_RunningMultiText_C_Completed_B06C42A944ABEA2C4BF8E7AF24421023_Params params {};
		params.DeltaTime = DeltaTime;
		params.NormalizedTime = NormalizedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RunningMultiText_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct");
		
		UUI_RunningMultiText_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun
	 * 		Flags  -> ()
	 */
	void UUI_RunningMultiText_C::DoRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun");
		
		UUI_RunningMultiText_C_DoRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_RunningMultiText_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct");
		
		UUI_RunningMultiText_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RunningMultiText_C::ExecuteUbergraph_UI_RunningMultiText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText");
		
		UUI_RunningMultiText_C_ExecuteUbergraph_UI_RunningMultiText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RunningMultiText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RunningMultiText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RunningMultiText.UI_RunningMultiText_C");
		return ptr;
	}

}


