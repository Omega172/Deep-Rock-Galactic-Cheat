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
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateClipCount
	 * 		Flags  -> ()
	 */
	void UGooCannon_AmmoCounter_C::UpdateClipCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateClipCount");
		
		UGooCannon_AmmoCounter_C_UpdateClipCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateAmmoCritical
	 * 		Flags  -> ()
	 */
	void UGooCannon_AmmoCounter_C::UpdateAmmoCritical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.UpdateAmmoCritical");
		
		UGooCannon_AmmoCounter_C_UpdateAmmoCritical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGooCannon_AmmoCounter_C::SetNumber(int32_t Value, class UTextBlock* Label, int32_t* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetNumber");
		
		UGooCannon_AmmoCounter_C_SetNumber_Params params {};
		params.Value = Value;
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGooCannon_AmmoCounter_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetTotalCount");
		
		UGooCannon_AmmoCounter_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UGooCannon_AmmoCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.Construct");
		
		UGooCannon_AmmoCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGooCannon_AmmoCounter_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.SetClipCount");
		
		UGooCannon_AmmoCounter_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.ExecuteUbergraph_GooCannon_AmmoCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGooCannon_AmmoCounter_C::ExecuteUbergraph_GooCannon_AmmoCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GooCannon_AmmoCounter.GooCannon_AmmoCounter_C.ExecuteUbergraph_GooCannon_AmmoCounter");
		
		UGooCannon_AmmoCounter_C_ExecuteUbergraph_GooCannon_AmmoCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGooCannon_AmmoCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGooCannon_AmmoCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GooCannon_AmmoCounter.GooCannon_AmmoCounter_C");
		return ptr;
	}

}


