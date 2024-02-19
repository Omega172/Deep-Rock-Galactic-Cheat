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
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateDeleteButtonToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_SaveSlot_Entry_C::CreateDeleteButtonToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateDeleteButtonToolTip");
		
		UITM_SaveSlot_Entry_C_CreateDeleteButtonToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateLoadButtonToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_SaveSlot_Entry_C::CreateLoadButtonToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateLoadButtonToolTip");
		
		UITM_SaveSlot_Entry_C_CreateLoadButtonToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetIfSaveIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMainSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::SetIfSaveIsActive(bool IsMainSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetIfSaveIsActive");
		
		UITM_SaveSlot_Entry_C_SetIfSaveIsActive_Params params {};
		params.IsMainSlot = IsMainSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SaveNameExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::SaveNameExists(const class FString& Name, bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SaveNameExists");
		
		UITM_SaveSlot_Entry_C_SaveNameExists_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetSelectedColor
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::SetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetSelectedColor");
		
		UITM_SaveSlot_Entry_C_SetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetHeroRanks
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::SetHeroRanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetHeroRanks");
		
		UITM_SaveSlot_Entry_C_SetHeroRanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.GetSaveSlotName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnEmptyOnNonUser                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutSaveSlotName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_C::GetSaveSlotName(class UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, class FString* OutSaveSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.GetSaveSlotName");
		
		UITM_SaveSlot_Entry_C_GetSaveSlotName_Params params {};
		params.SaveGame = SaveGame;
		params.ReturnEmptyOnNonUser = ReturnEmptyOnNonUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSaveSlotName != nullptr)
			*OutSaveSlotName = params.OutSaveSlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveGameInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MainSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::SetValues(class UFSDSaveGame* SaveGameInstance, bool MainSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetValues");
		
		UITM_SaveSlot_Entry_C_SetValues_Params params {};
		params.SaveGameInstance = SaveGameInstance;
		params.MainSlot = MainSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.LoadAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::LoadAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.LoadAnswer");
		
		UITM_SaveSlot_Entry_C_LoadAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.DeleteAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::DeleteAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.DeleteAnswer");
		
		UITM_SaveSlot_Entry_C_DeleteAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.PreConstruct");
		
		UITM_SaveSlot_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ExecuteUbergraph_ITM_SaveSlot_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_C::ExecuteUbergraph_ITM_SaveSlot_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ExecuteUbergraph_ITM_SaveSlot_Entry");
		
		UITM_SaveSlot_Entry_C_ExecuteUbergraph_ITM_SaveSlot_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeletedWithReference__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_C::OnSaveDeletedWithReference__DelegateSignature(class UFSDSaveGame* save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeletedWithReference__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_OnSaveDeletedWithReference__DelegateSignature_Params params {};
		params.save = save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::OnSaveLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveLoaded__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_OnSaveLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDetails__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_C::OnSaveDetails__DelegateSignature(class UFSDSaveGame* SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDetails__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_OnSaveDetails__DelegateSignature_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveConverted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::OnSaveConverted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveConverted__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_OnSaveConverted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_C::OnSaveDeleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeleted__DelegateSignature");
		
		UITM_SaveSlot_Entry_C_OnSaveDeleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SaveSlot_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SaveSlot_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C");
		return ptr;
	}

}


