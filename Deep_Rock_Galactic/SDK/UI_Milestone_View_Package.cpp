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
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.AddMilestone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMilestoneAsset*                             InMilestone                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Milestone_View_C::AddMilestone(class UMilestoneAsset* InMilestone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.AddMilestone");
		
		UUI_Milestone_View_C_AddMilestone_Params params {};
		params.InMilestone = InMilestone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.Clear
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Clear");
		
		UUI_Milestone_View_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.BuildList
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::BuildList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.BuildList");
		
		UUI_Milestone_View_C_BuildList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::UpdateHasClaimableState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State");
		
		UUI_Milestone_View_C_UpdateHasClaimableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Construct");
		
		UUI_Milestone_View_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature");
		
		UUI_Milestone_View_C_BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Milestone_Item_C*                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Milestone_View_C::InitMilestoneWidget(class UUI_Milestone_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget");
		
		UUI_Milestone_View_C_InitMilestoneWidget_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Milestone_Item_C*                        MilestoneItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Milestone_View_C::OnItemClaimableChanged_Event(class UUI_Milestone_Item_C* MilestoneItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event");
		
		UUI_Milestone_View_C_OnItemClaimableChanged_Event_Params params {};
		params.MilestoneItem = MilestoneItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_Milestone_View_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Refresh");
		
		UUI_Milestone_View_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Milestone_View_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.PreConstruct");
		
		UUI_Milestone_View_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Milestone_View_C::ExecuteUbergraph_UI_Milestone_View(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View");
		
		UUI_Milestone_View_C_ExecuteUbergraph_UI_Milestone_View_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasClaimable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Milestone_View_C::OnHasClaimableChanged__DelegateSignature(bool HasClaimable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature");
		
		UUI_Milestone_View_C_OnHasClaimableChanged__DelegateSignature_Params params {};
		params.HasClaimable = HasClaimable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Milestone_View_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Milestone_View_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Milestone_View.UI_Milestone_View_C");
		return ptr;
	}

}


