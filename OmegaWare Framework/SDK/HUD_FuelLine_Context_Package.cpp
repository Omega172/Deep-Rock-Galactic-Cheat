﻿/**
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
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.UpdateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InPrimitive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FuelLine_Context_C::UpdateWidget(class UPrimitiveComponent* InPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.UpdateWidget");
		
		UHUD_FuelLine_Context_C_UpdateWidget_Params params {};
		params.InPrimitive = InPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveContextActorChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InContextActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FuelLine_Context_C::ReceiveContextActorChanged(class AActor* InContextActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveContextActorChanged");
		
		UHUD_FuelLine_Context_C_ReceiveContextActorChanged_Params params {};
		params.InContextActor = InContextActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_FuelLine_Context_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.PreConstruct");
		
		UHUD_FuelLine_Context_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InContextPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FuelLine_Context_C::ReceiveUpdate(class UPrimitiveComponent* InContextPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveUpdate");
		
		UHUD_FuelLine_Context_C_ReceiveUpdate_Params params {};
		params.InContextPrimitive = InContextPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InContextPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FuelLine_Context_C::ReceiveShow(class UPrimitiveComponent* InContextPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveShow");
		
		UHUD_FuelLine_Context_C_ReceiveShow_Params params {};
		params.InContextPrimitive = InContextPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ExecuteUbergraph_HUD_FuelLine_Context
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FuelLine_Context_C::ExecuteUbergraph_HUD_FuelLine_Context(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ExecuteUbergraph_HUD_FuelLine_Context");
		
		UHUD_FuelLine_Context_C_ExecuteUbergraph_HUD_FuelLine_Context_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_FuelLine_Context_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_FuelLine_Context_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_FuelLine_Context.HUD_FuelLine_Context_C");
		return ptr;
	}

}


