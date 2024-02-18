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
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPopup_ModdedSave_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyUp");
		
		UPopup_ModdedSave_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPopup_ModdedSave_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyDown");
		
		UPopup_ModdedSave_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.CancelButtonTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UPopup_ModdedSave_C::CancelButtonTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.CancelButtonTooltip");
		
		UPopup_ModdedSave_C_CancelButtonTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.SetCanCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Can                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OptionalTooltipText                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPopup_ModdedSave_C::SetCanCancel(bool Can, const class FText& OptionalTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.SetCanCancel");
		
		UPopup_ModdedSave_C_SetCanCancel_Params params {};
		params.Can = Can;
		params.OptionalTooltipText = OptionalTooltipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.Reset Color on Non Selected Save
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPopup_ModdedSave_C::ResetColoronNonSelectedSave(class UFSDSaveGame* SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.Reset Color on Non Selected Save");
		
		UPopup_ModdedSave_C_ResetColoronNonSelectedSave_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.BindSaveslotEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_SaveSlot_Entry_C*                       SaveslotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPopup_ModdedSave_C::BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.BindSaveslotEvents");
		
		UPopup_ModdedSave_C_BindSaveslotEvents_Params params {};
		params.SaveslotWidget = SaveslotWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.SetColors
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::SetColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.SetColors");
		
		UPopup_ModdedSave_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.Set Create New Saveslot Entry
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::SetCreateNewSaveslotEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.Set Create New Saveslot Entry");
		
		UPopup_ModdedSave_C_SetCreateNewSaveslotEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.Construct
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.Construct");
		
		UPopup_ModdedSave_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPopup_ModdedSave_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.PreConstruct");
		
		UPopup_ModdedSave_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveDeleted
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::OnSaveDeleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveDeleted");
		
		UPopup_ModdedSave_C_OnSaveDeleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveLoaded
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::OnSaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveLoaded");
		
		UPopup_ModdedSave_C_OnSaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveCreated
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::OnSaveCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveCreated");
		
		UPopup_ModdedSave_C_OnSaveCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UPopup_ModdedSave_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.Cancel
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.Cancel");
		
		UPopup_ModdedSave_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.ExecuteUbergraph_Popup_ModdedSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPopup_ModdedSave_C::ExecuteUbergraph_Popup_ModdedSave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.ExecuteUbergraph_Popup_ModdedSave");
		
		UPopup_ModdedSave_C_ExecuteUbergraph_Popup_ModdedSave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::OnModdedSaveCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveCancelled__DelegateSignature");
		
		UPopup_ModdedSave_C_OnModdedSaveCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPopup_ModdedSave_C::OnModdedSaveLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveLoaded__DelegateSignature");
		
		UPopup_ModdedSave_C_OnModdedSaveLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopup_ModdedSave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopup_ModdedSave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Popup_ModdedSave.Popup_ModdedSave_C");
		return ptr;
	}

}


