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
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjective*                                  Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectivesBox_C::CreateObjectiveWidget(class UObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget");
		
		UHUD_ObjectivesBox_C_CreateObjectiveWidget_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct");
		
		UHUD_ObjectivesBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjective*                                  Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectivesBox_C::OnObjectiveAdded(class UObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded");
		
		UHUD_ObjectivesBox_C_OnObjectiveAdded_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::OnLaserPointerPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed");
		
		UHUD_ObjectivesBox_C_OnLaserPointerPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::OnLaserPointerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased");
		
		UHUD_ObjectivesBox_C_OnLaserPointerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::ShowDynamically()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically");
		
		UHUD_ObjectivesBox_C_ShowDynamically_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::SetupDeepDiveLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label");
		
		UHUD_ObjectivesBox_C_SetupDeepDiveLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        GameEventName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_ObjectivesBox_C::OnGameEventCompletedEvent(const class FText& GameEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent");
		
		UHUD_ObjectivesBox_C_OnGameEventCompletedEvent_Params params {};
		params.GameEventName = GameEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ObjectivesBox_C::SetVisible(bool InVisible, bool animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible");
		
		UHUD_ObjectivesBox_C_SetVisible_Params params {};
		params.InVisible = InVisible;
		params.animate = animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectivesBox_C::AnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished");
		
		UHUD_ObjectivesBox_C_AnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveWidgetUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveWidget*                            InObjectiveWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectivesBox_C::OnObjectiveWidgetUpdated(class UObjectiveWidget* InObjectiveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveWidgetUpdated");
		
		UHUD_ObjectivesBox_C_OnObjectiveWidgetUpdated_Params params {};
		params.InObjectiveWidget = InObjectiveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnOptionalWidgetUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOptionalObjectiveWidget*                    InOptionalObjectiveWidget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectivesBox_C::OnOptionalWidgetUpdated(class UOptionalObjectiveWidget* InOptionalObjectiveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnOptionalWidgetUpdated");
		
		UHUD_ObjectivesBox_C_OnOptionalWidgetUpdated_Params params {};
		params.InOptionalObjectiveWidget = InOptionalObjectiveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectivesBox_C::ExecuteUbergraph_HUD_ObjectivesBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox");
		
		UHUD_ObjectivesBox_C_ExecuteUbergraph_HUD_ObjectivesBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ObjectivesBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ObjectivesBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ObjectivesBox.HUD_ObjectivesBox_C");
		return ptr;
	}

}


