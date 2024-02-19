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
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.CanStartCampaign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   InCampaign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWND_JobsEntryV2_C::CanStartCampaign(class UCampaign* InCampaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.CanStartCampaign");
		
		UWND_JobsEntryV2_C_CanStartCampaign_Params params {};
		params.InCampaign = InCampaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.VisibleAndEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWND_JobsEntryV2_C::VisibleAndEnabled(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.VisibleAndEnabled");
		
		UWND_JobsEntryV2_C_VisibleAndEnabled_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetInfo
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::SetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetInfo");
		
		UWND_JobsEntryV2_C_SetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.IsActiveCampaign
	 * 		Flags  -> ()
	 */
	bool UWND_JobsEntryV2_C::IsActiveCampaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.IsActiveCampaign");
		
		UWND_JobsEntryV2_C_IsActiveCampaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JobsEntryV2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.PreConstruct");
		
		UWND_JobsEntryV2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWND_JobsEntryV2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JobsEntryV2_C::SetData(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.SetData");
		
		UWND_JobsEntryV2_C_SetData_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.Refresh");
		
		UWND_JobsEntryV2_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.Event_Updated
	 * 		Flags  -> ()
	 */
	void UWND_JobsEntryV2_C::Event_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.Event_Updated");
		
		UWND_JobsEntryV2_C_Event_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JobsEntryV2.WND_JobsEntryV2_C.ExecuteUbergraph_WND_JobsEntryV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JobsEntryV2_C::ExecuteUbergraph_WND_JobsEntryV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JobsEntryV2.WND_JobsEntryV2_C.ExecuteUbergraph_WND_JobsEntryV2");
		
		UWND_JobsEntryV2_C_ExecuteUbergraph_WND_JobsEntryV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_JobsEntryV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_JobsEntryV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_JobsEntryV2.WND_JobsEntryV2_C");
		return ptr;
	}

}


