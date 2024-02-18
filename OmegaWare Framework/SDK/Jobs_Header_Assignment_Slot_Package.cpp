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
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.AbortPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJobs_Header_Assignment_Slot_C::AbortPressed(bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.AbortPressed");
		
		UJobs_Header_Assignment_Slot_C_AbortPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJobs_Header_Assignment_Slot_C::BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UJobs_Header_Assignment_Slot_C_BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.OnAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJobs_Header_Assignment_Slot_C::OnAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.OnAnswer");
		
		UJobs_Header_Assignment_Slot_C_OnAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJobs_Header_Assignment_Slot_C::SetData(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.SetData");
		
		UJobs_Header_Assignment_Slot_C_SetData_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Refresh
	 * 		Flags  -> ()
	 */
	void UJobs_Header_Assignment_Slot_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Refresh");
		
		UJobs_Header_Assignment_Slot_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJobs_Header_Assignment_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.PreConstruct");
		
		UJobs_Header_Assignment_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJobs_Header_Assignment_Slot_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UJobs_Header_Assignment_Slot_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Event_Updated
	 * 		Flags  -> ()
	 */
	void UJobs_Header_Assignment_Slot_C::Event_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Event_Updated");
		
		UJobs_Header_Assignment_Slot_C_Event_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.ExecuteUbergraph_Jobs_Header_Assignment_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJobs_Header_Assignment_Slot_C::ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.ExecuteUbergraph_Jobs_Header_Assignment_Slot");
		
		UJobs_Header_Assignment_Slot_C_ExecuteUbergraph_Jobs_Header_Assignment_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJobs_Header_Assignment_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJobs_Header_Assignment_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C");
		return ptr;
	}

}


