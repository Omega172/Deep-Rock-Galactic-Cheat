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
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat
	 * 		Flags  -> ()
	 */
	void ADonkey_BreadCrumb_C::OnRep_NextPointLookat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat");
		
		ADonkey_BreadCrumb_C_OnRep_NextPointLookat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NextPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADonkey_BreadCrumb_C::SetNextArrowPoint(const struct FVector& NextPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint");
		
		ADonkey_BreadCrumb_C_SetNextArrowPoint_Params params {};
		params.NextPoint = NextPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint
	 * 		Flags  -> ()
	 */
	struct FVector ADonkey_BreadCrumb_C::GetArrowPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint");
		
		ADonkey_BreadCrumb_C_GetArrowPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADonkey_BreadCrumb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay");
		
		ADonkey_BreadCrumb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
	 * 		Flags  -> ()
	 */
	void ADonkey_BreadCrumb_C::Blink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink");
		
		ADonkey_BreadCrumb_C_Blink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink_Photosensitive
	 * 		Flags  -> ()
	 */
	void ADonkey_BreadCrumb_C::Blink_Photosensitive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink_Photosensitive");
		
		ADonkey_BreadCrumb_C_Blink_Photosensitive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADonkey_BreadCrumb_C::ExecuteUbergraph_Donkey_BreadCrumb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb");
		
		ADonkey_BreadCrumb_C_ExecuteUbergraph_Donkey_BreadCrumb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADonkey_BreadCrumb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADonkey_BreadCrumb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Donkey_BreadCrumb.Donkey_BreadCrumb_C");
		return ptr;
	}

}


