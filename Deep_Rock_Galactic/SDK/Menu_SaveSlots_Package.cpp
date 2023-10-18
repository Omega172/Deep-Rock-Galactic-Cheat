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
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.Set Create New Saveslot Entry
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SetCreateNewSaveslotEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.Set Create New Saveslot Entry");
		
		UMenu_SaveSlots_C_SetCreateNewSaveslotEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.BindSaveslotEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_SaveSlot_Entry_C*                       SaveslotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_SaveSlots_C::BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.BindSaveslotEvents");
		
		UMenu_SaveSlots_C_BindSaveslotEvents_Params params {};
		params.SaveslotWidget = SaveslotWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.Set Selected Save
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_SaveSlots_C::SetSelectedSave(class UFSDSaveGame* SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.Set Selected Save");
		
		UMenu_SaveSlots_C_SetSelectedSave_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SetColors
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SetColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SetColors");
		
		UMenu_SaveSlots_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SetInitialSelectedSave
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SetInitialSelectedSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SetInitialSelectedSave");
		
		UMenu_SaveSlots_C_SetInitialSelectedSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.CreateSaveSlots
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::CreateSaveSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.CreateSaveSlots");
		
		UMenu_SaveSlots_C_CreateSaveSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.OnFailure_E9E78193470C6DFEB6754298C681AA76
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::OnFailure_E9E78193470C6DFEB6754298C681AA76()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.OnFailure_E9E78193470C6DFEB6754298C681AA76");
		
		UMenu_SaveSlots_C_OnFailure_E9E78193470C6DFEB6754298C681AA76_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.OnSuccess_E9E78193470C6DFEB6754298C681AA76
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::OnSuccess_E9E78193470C6DFEB6754298C681AA76()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.OnSuccess_E9E78193470C6DFEB6754298C681AA76");
		
		UMenu_SaveSlots_C_OnSuccess_E9E78193470C6DFEB6754298C681AA76_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.Construct");
		
		UMenu_SaveSlots_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDeleted
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SaveDeleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDeleted");
		
		UMenu_SaveSlots_C_SaveDeleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SaveConverted
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SaveConverted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SaveConverted");
		
		UMenu_SaveSlots_C_SaveConverted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenu_SaveSlots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.PreConstruct");
		
		UMenu_SaveSlots_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_SaveSlots_C::SaveDetails(class UFSDSaveGame* SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDetails");
		
		UMenu_SaveSlots_C_SaveDetails_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SaveLoaded
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SaveLoaded");
		
		UMenu_SaveSlots_C_SaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.NewSaveslotCreated
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::NewSaveslotCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.NewSaveslotCreated");
		
		UMenu_SaveSlots_C_NewSaveslotCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.ExecuteUbergraph_Menu_SaveSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_SaveSlots_C::ExecuteUbergraph_Menu_SaveSlots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.ExecuteUbergraph_Menu_SaveSlots");
		
		UMenu_SaveSlots_C_ExecuteUbergraph_Menu_SaveSlots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_SaveSlots.Menu_SaveSlots_C.SettingsChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMenu_SaveSlots_C::SettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_SaveSlots.Menu_SaveSlots_C.SettingsChanged__DelegateSignature");
		
		UMenu_SaveSlots_C_SettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenu_SaveSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenu_SaveSlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_SaveSlots.Menu_SaveSlots_C");
		return ptr;
	}

}


