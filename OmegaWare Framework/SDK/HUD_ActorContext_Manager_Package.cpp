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
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.GetContextWidgetFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorContextWidget*                         OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorContext_Manager_C::GetContextWidgetFromActor(class AActor* InActor, class UActorContextWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.GetContextWidgetFromActor");
		
		UHUD_ActorContext_Manager_C_GetContextWidgetFromActor_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.SetContextWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorContextWidget*                         InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InPrimitive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorContext_Manager_C::SetContextWidget(class UActorContextWidget* InWidget, class UPrimitiveComponent* InPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.SetContextWidget");
		
		UHUD_ActorContext_Manager_C_SetContextWidget_Params params {};
		params.InWidget = InWidget;
		params.InPrimitive = InPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ActorContext_Manager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.Construct");
		
		UHUD_ActorContext_Manager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.OnTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         NewPrimitive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorContext_Manager_C::OnTargetChanged(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.OnTargetChanged");
		
		UHUD_ActorContext_Manager_C_OnTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		params.NewPrimitive = NewPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.UpdateTick
	 * 		Flags  -> ()
	 */
	void UHUD_ActorContext_Manager_C::UpdateTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.UpdateTick");
		
		UHUD_ActorContext_Manager_C_UpdateTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.ExecuteUbergraph_HUD_ActorContext_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorContext_Manager_C::ExecuteUbergraph_HUD_ActorContext_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.ExecuteUbergraph_HUD_ActorContext_Manager");
		
		UHUD_ActorContext_Manager_C_ExecuteUbergraph_HUD_ActorContext_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ActorContext_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ActorContext_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ActorContext_Manager.HUD_ActorContext_Manager_C");
		return ptr;
	}

}


