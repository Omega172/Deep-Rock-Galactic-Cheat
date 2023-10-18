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
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.Construct");
		
		UHUD_Resources_Player_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Player_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct");
		
		UHUD_Resources_Player_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_C::AddResource(class UCappedResource* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource");
		
		UHUD_Resources_Player_C_AddResource_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_C::OnResourceAdded(class UCappedResource* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded");
		
		UHUD_Resources_Player_C_OnResourceAdded_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_Resources_Player_Icon_C*                ResourceIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_C::OnResourceChanged(class UHUD_Resources_Player_Icon_C* ResourceIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged");
		
		UHUD_Resources_Player_C_OnResourceChanged_Params params {};
		params.ResourceIcon = ResourceIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_C::RefreshVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility");
		
		UHUD_Resources_Player_C_RefreshVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_C::OnLaserPointerPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event");
		
		UHUD_Resources_Player_C_OnLaserPointerPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_C::OnLaserPointerReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event");
		
		UHUD_Resources_Player_C_OnLaserPointerReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_C::ExecuteUbergraph_HUD_Resources_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player");
		
		UHUD_Resources_Player_C_ExecuteUbergraph_HUD_Resources_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Resources_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Resources_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Resources_Player.HUD_Resources_Player_C");
		return ptr;
	}

}


