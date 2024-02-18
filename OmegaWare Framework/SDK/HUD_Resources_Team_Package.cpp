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
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsObjective                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCappedResource*                             OutResource                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::IsObjectiveResource(class UCappedResource* InResource, bool* IsObjective, class UCappedResource** OutResource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource");
		
		UHUD_Resources_Team_C_IsObjectiveResource_Params params {};
		params.InResource = InResource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsObjective != nullptr)
			*IsObjective = params.IsObjective;
		if (OutResource != nullptr)
			*OutResource = params.OutResource;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Team_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Construct");
		
		UHUD_Resources_Team_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Team_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct");
		
		UHUD_Resources_Team_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::AddResource(class UCappedResource* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource");
		
		UHUD_Resources_Team_C_AddResource_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Team_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget");
		
		UHUD_Resources_Team_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Team_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget");
		
		UHUD_Resources_Team_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Team_C::PingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget");
		
		UHUD_Resources_Team_C_PingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Team_C::OnTransitionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished");
		
		UHUD_Resources_Team_C_OnTransitionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceBank*                               ResourceBank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::OnDepositingEnd_Event(class UResourceBank* ResourceBank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event");
		
		UHUD_Resources_Team_C_OnDepositingEnd_Event_Params params {};
		params.ResourceBank = ResourceBank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceBank*                               ResourceBank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::OnDepositingBegin_Event(class UResourceBank* ResourceBank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event");
		
		UHUD_Resources_Team_C_OnDepositingBegin_Event_Params params {};
		params.ResourceBank = ResourceBank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::OnResourceChanged_Event(class UCappedResource* Resource, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event");
		
		UHUD_Resources_Team_C_OnResourceChanged_Event_Params params {};
		params.Resource = Resource;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::OnResourceAdded(class UCappedResource* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded");
		
		UHUD_Resources_Team_C_OnResourceAdded_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleNameplatesEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               boolValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Team_C::OnToggleNameplatesEvent_Event_1(bool boolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleNameplatesEvent_Event_1");
		
		UHUD_Resources_Team_C_OnToggleNameplatesEvent_Event_1_Params params {};
		params.boolValue = boolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Team_C::ExecuteUbergraph_HUD_Resources_Team(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team");
		
		UHUD_Resources_Team_C_ExecuteUbergraph_HUD_Resources_Team_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Resources_Team_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Resources_Team_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Resources_Team.HUD_Resources_Team_C");
		return ptr;
	}

}


