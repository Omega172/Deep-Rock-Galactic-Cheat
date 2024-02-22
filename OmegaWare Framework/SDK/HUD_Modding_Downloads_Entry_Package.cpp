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
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetIsFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFinished                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Modding_Downloads_Entry_C::GetIsFinished(bool* IsFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetIsFinished");
		
		UHUD_Modding_Downloads_Entry_C_GetIsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFinished != nullptr)
			*IsFinished = params.IsFinished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUGCPackageError                                   InErrorType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_Entry_C::Error(EUGCPackageError InErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Error");
		
		UHUD_Modding_Downloads_Entry_C_Error_Params params {};
		params.InErrorType = InErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Finish
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_Entry_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Finish");
		
		UHUD_Modding_Downloads_Entry_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_Entry_C::GetProgress(float* Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetProgress");
		
		UHUD_Modding_Downloads_Entry_C_GetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Progress != nullptr)
			*Progress = params.Progress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetModName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_Entry_C::GetModName(class FString* ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetModName");
		
		UHUD_Modding_Downloads_Entry_C_GetModName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModName != nullptr)
			*ModName = params.ModName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InModName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InDownloading                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InDownloaded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTotal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_Entry_C::SetProgress(const class FString& InModName, bool InDownloading, int32_t InDownloaded, int32_t InTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.SetProgress");
		
		UHUD_Modding_Downloads_Entry_C_SetProgress_Params params {};
		params.InModName = InModName;
		params.InDownloading = InDownloading;
		params.InDownloaded = InDownloaded;
		params.InTotal = InTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Modding_Downloads_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.PreConstruct");
		
		UHUD_Modding_Downloads_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.ExecuteUbergraph_HUD_Modding_Downloads_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_Entry_C::ExecuteUbergraph_HUD_Modding_Downloads_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.ExecuteUbergraph_HUD_Modding_Downloads_Entry");
		
		UHUD_Modding_Downloads_Entry_C_ExecuteUbergraph_HUD_Modding_Downloads_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Modding_Downloads_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Modding_Downloads_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C");
		return ptr;
	}

}


