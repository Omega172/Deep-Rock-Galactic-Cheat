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
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NameClassIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HealthShield                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfo_C::SetElementVisibility(bool NameClassIcon, bool HealthShield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility");
		
		UHUD_PlayerInfo_C_SetElementVisibility_Params params {};
		params.NameClassIcon = NameClassIcon;
		params.HealthShield = HealthShield;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::ShowDynamically()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically");
		
		UHUD_PlayerInfo_C_ShowDynamically_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfo_C::OnCharacterStateChanged_Event(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event");
		
		UHUD_PlayerInfo_C_OnCharacterStateChanged_Event_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfo_C::OnHealthChanged_Event(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event");
		
		UHUD_PlayerInfo_C_OnHealthChanged_Event_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::OnLaserPointerPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event");
		
		UHUD_PlayerInfo_C_OnLaserPointerPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::OnLaserPointerReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event");
		
		UHUD_PlayerInfo_C_OnLaserPointerReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::VisibilityModeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged");
		
		UHUD_PlayerInfo_C_VisibilityModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfo_C::BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature");
		
		UHUD_PlayerInfo_C_BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfo_C::BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature");
		
		UHUD_PlayerInfo_C_BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::OnFirePressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event");
		
		UHUD_PlayerInfo_C_OnFirePressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::OnFireReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event");
		
		UHUD_PlayerInfo_C_OnFireReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ammoStatus01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              healthStatus01                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfo_C::OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent");
		
		UHUD_PlayerInfo_C_OnSupplyStatusChangedEvent_Params params {};
		params.ammoStatus01 = ammoStatus01;
		params.healthStatus01 = healthStatus01;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::ShowAmmoCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter");
		
		UHUD_PlayerInfo_C_ShowAmmoCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUsableComponentBase*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfo_C::OnBeginHoveringEvent(class UUsableComponentBase* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent");
		
		UHUD_PlayerInfo_C_OnBeginHoveringEvent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::OnEndHoveringEvent_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event");
		
		UHUD_PlayerInfo_C_OnEndHoveringEvent_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct");
		
		UHUD_PlayerInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct");
		
		UHUD_PlayerInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfo_C::ExecuteUbergraph_HUD_PlayerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo");
		
		UHUD_PlayerInfo_C_ExecuteUbergraph_HUD_PlayerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerInfo.HUD_PlayerInfo_C");
		return ptr;
	}

}


