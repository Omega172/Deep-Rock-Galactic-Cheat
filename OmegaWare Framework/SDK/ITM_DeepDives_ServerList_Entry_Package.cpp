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
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_DeepDives_ServerList_Entry_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonDown");
		
		UITM_DeepDives_ServerList_Entry_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_DeepDives_ServerList_Entry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnKeyUp");
		
		UITM_DeepDives_ServerList_Entry_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_DeepDives_ServerList_Entry_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonUp");
		
		UITM_DeepDives_ServerList_Entry_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OpenProfile
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::OpenProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OpenProfile");
		
		UITM_DeepDives_ServerList_Entry_C_OpenProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetServername
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::SetServername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetServername");
		
		UITM_DeepDives_ServerList_Entry_C_SetServername_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetMissionNameWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_ServerList_Entry_C::SetMissionNameWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetMissionNameWidth");
		
		UITM_DeepDives_ServerList_Entry_C_SetMissionNameWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.GetMissionToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_DeepDives_ServerList_Entry_C::GetMissionToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.GetMissionToolTip");
		
		UITM_DeepDives_ServerList_Entry_C_GetMissionToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetColumnWidths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      InWidths                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_DeepDives_ServerList_Entry_C::SetColumnWidths(TArray<float>* InWidths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetColumnWidths");
		
		UITM_DeepDives_ServerList_Entry_C_SetColumnWidths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWidths != nullptr)
			*InWidths = params.InWidths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ToggleMissionDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_ServerList_Entry_C::ToggleMissionDetails(bool Visible, bool* OutVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ToggleMissionDetails");
		
		UITM_DeepDives_ServerList_Entry_C_ToggleMissionDetails_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVisible != nullptr)
			*OutVisible = params.OutVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetNoMission
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::SetNoMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetNoMission");
		
		UITM_DeepDives_ServerList_Entry_C_SetNoMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_ServerList_Entry_C::SetSession(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetSession");
		
		UITM_DeepDives_ServerList_Entry_C_SetSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_ServerList_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.PreConstruct");
		
		UITM_DeepDives_ServerList_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ExecuteUbergraph_ITM_DeepDives_ServerList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_ServerList_Entry_C::ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ExecuteUbergraph_ITM_DeepDives_ServerList_Entry");
		
		UITM_DeepDives_ServerList_Entry_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.JoinServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_ServerList_Entry_C::JoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.JoinServer__DelegateSignature");
		
		UITM_DeepDives_ServerList_Entry_C_JoinServer__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDives_ServerList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDives_ServerList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C");
		return ptr;
	}

}


