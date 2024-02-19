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
	 * 		Name   -> Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ThrowCarriable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.Construct");
		
		UHUD_ThrowCarriable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.OnThrowCarriableProgress_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              timeToCancel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isDone                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ThrowCarriable_C::OnThrowCarriableProgress_Event(float Progress, float timeToCancel, bool isDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.OnThrowCarriableProgress_Event");
		
		UHUD_ThrowCarriable_C_OnThrowCarriableProgress_Event_Params params {};
		params.Progress = Progress;
		params.timeToCancel = timeToCancel;
		params.isDone = isDone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.ExecuteUbergraph_HUD_ThrowCarriable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ThrowCarriable_C::ExecuteUbergraph_HUD_ThrowCarriable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.ExecuteUbergraph_HUD_ThrowCarriable");
		
		UHUD_ThrowCarriable_C_ExecuteUbergraph_HUD_ThrowCarriable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ThrowCarriable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ThrowCarriable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ThrowCarriable.HUD_ThrowCarriable_C");
		return ptr;
	}

}


