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
	 * 		Name   -> Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.GetFirstWord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutWord                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMissionControl_TextAnimator_C::GetFirstWord(const class FString& inString, class FString* OutWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.GetFirstWord");
		
		UMissionControl_TextAnimator_C_GetFirstWord_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWord != nullptr)
			*OutWord = params.OutWord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetAnimProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_TextAnimator_C::SetAnimProgress(float AnimProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetAnimProgress");
		
		UMissionControl_TextAnimator_C_SetAnimProgress_Params params {};
		params.AnimProgress = AnimProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            UnformattedLength                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_TextAnimator_C::SetText(const class FText& InText, int32_t* UnformattedLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetText");
		
		UMissionControl_TextAnimator_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnformattedLength != nullptr)
			*UnformattedLength = params.UnformattedLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionControl_TextAnimator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.PreConstruct");
		
		UMissionControl_TextAnimator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.ExecuteUbergraph_MissionControl_TextAnimator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionControl_TextAnimator_C::ExecuteUbergraph_MissionControl_TextAnimator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.ExecuteUbergraph_MissionControl_TextAnimator");
		
		UMissionControl_TextAnimator_C_ExecuteUbergraph_MissionControl_TextAnimator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionControl_TextAnimator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionControl_TextAnimator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionControl_TextAnimator.MissionControl_TextAnimator_C");
		return ptr;
	}

}


