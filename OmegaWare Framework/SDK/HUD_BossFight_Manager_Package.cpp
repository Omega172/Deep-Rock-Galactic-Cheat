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
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.RemoveCustomWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_Manager_C::RemoveCustomWidget(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.RemoveCustomWidget");
		
		UHUD_BossFight_Manager_C_RemoveCustomWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddCustomWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_Manager_C::AddCustomWidget(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddCustomWidget");
		
		UHUD_BossFight_Manager_C_AddCustomWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_Manager_C::AddBossFight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight");
		
		UHUD_BossFight_Manager_C_AddBossFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_Manager_C::OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9");
		
		UHUD_BossFight_Manager_C_OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_Manager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct");
		
		UHUD_BossFight_Manager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_Manager_C::OnNewBossFight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight");
		
		UHUD_BossFight_Manager_C_OnNewBossFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BossFight_Manager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct");
		
		UHUD_BossFight_Manager_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup BossFights
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_Manager_C::SetupBossFights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup BossFights");
		
		UHUD_BossFight_Manager_C_SetupBossFights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup Custom Widgets
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_Manager_C::SetupCustomWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup Custom Widgets");
		
		UHUD_BossFight_Manager_C_SetupCustomWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_Manager_C::ExecuteUbergraph_HUD_BossFight_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager");
		
		UHUD_BossFight_Manager_C_ExecuteUbergraph_HUD_BossFight_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BossFight_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BossFight_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BossFight_Manager.HUD_BossFight_Manager_C");
		return ptr;
	}

}


