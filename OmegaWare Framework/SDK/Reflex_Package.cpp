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
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.SetReflexMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EReflexMode                                        Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReflexBlueprintLibrary::SetReflexMode(EReflexMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.SetReflexMode");
		
		UReflexBlueprintLibrary_SetReflexMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReflexBlueprintLibrary::SetFlashIndicatorEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled");
		
		UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	 * 		Flags  -> ()
	 */
	float UReflexBlueprintLibrary::GetRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs");
		
		UReflexBlueprintLibrary_GetRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetReflexMode
	 * 		Flags  -> ()
	 */
	EReflexMode UReflexBlueprintLibrary::GetReflexMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetReflexMode");
		
		UReflexBlueprintLibrary_GetReflexMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	 * 		Flags  -> ()
	 */
	bool UReflexBlueprintLibrary::GetReflexAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable");
		
		UReflexBlueprintLibrary_GetReflexAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	 * 		Flags  -> ()
	 */
	float UReflexBlueprintLibrary::GetGameToRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs");
		
		UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	 * 		Flags  -> ()
	 */
	float UReflexBlueprintLibrary::GetGameLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs");
		
		UReflexBlueprintLibrary_GetGameLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	 * 		Flags  -> ()
	 */
	bool UReflexBlueprintLibrary::GetFlashIndicatorEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled");
		
		UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReflexBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReflexBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reflex.ReflexBlueprintLibrary");
		return ptr;
	}

}


