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
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.HandleKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FEventReply                                 OutReply                                                   (Parm, OutParm)
	 */
	void UITM_DeepDives_Start_C::HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.HandleKeyDown");
		
		UITM_DeepDives_Start_C_HandleKeyDown_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandled != nullptr)
			*OutHandled = params.OutHandled;
		if (OutReply != nullptr)
			*OutReply = params.OutReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_DeepDives_Start_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnKeyDown");
		
		UITM_DeepDives_Start_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.UpdateOptions
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.UpdateOptions");
		
		UITM_DeepDives_Start_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5");
		
		UITM_DeepDives_Start_C_OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5");
		
		UITM_DeepDives_Start_C_OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_14795847495E51F942775B86C1C4BCCF
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::OnFailure_14795847495E51F942775B86C1C4BCCF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_14795847495E51F942775B86C1C4BCCF");
		
		UITM_DeepDives_Start_C_OnFailure_14795847495E51F942775B86C1C4BCCF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_14795847495E51F942775B86C1C4BCCF
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::OnSuccess_14795847495E51F942775B86C1C4BCCF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_14795847495E51F942775B86C1C4BCCF");
		
		UITM_DeepDives_Start_C_OnSuccess_14795847495E51F942775B86C1C4BCCF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Start Mission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Start_C::StartMission(class UDeepDive* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Start Mission");
		
		UITM_DeepDives_Start_C_StartMission_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   DeepDive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature_Params params {};
		params.DeepDive = DeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   DeepDive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature_Params params {};
		params.DeepDive = DeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Open
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Open");
		
		UITM_DeepDives_Start_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EliteDeepDive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool EliteDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature_Params params {};
		params.EliteDeepDive = EliteDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EliteDeepDive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool EliteDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature_Params params {};
		params.EliteDeepDive = EliteDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Construct");
		
		UITM_DeepDives_Start_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.PreConstruct");
		
		UITM_DeepDives_Start_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnTimeOut
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Start_C::OnTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnTimeOut");
		
		UITM_DeepDives_Start_C_OnTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.RefreshTimeout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::RefreshTimeout(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.RefreshTimeout");
		
		UITM_DeepDives_Start_C_RefreshTimeout_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		unsigned char                                      CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Start_C::BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature");
		
		UITM_DeepDives_Start_C_BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.ExecuteUbergraph_ITM_DeepDives_Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Start_C::ExecuteUbergraph_ITM_DeepDives_Start(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.ExecuteUbergraph_ITM_DeepDives_Start");
		
		UITM_DeepDives_Start_C_ExecuteUbergraph_ITM_DeepDives_Start_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnJoinMission__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EliteDeepDive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Start_C::OnJoinMission__DelegateSignature(bool EliteDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnJoinMission__DelegateSignature");
		
		UITM_DeepDives_Start_C_OnJoinMission__DelegateSignature_Params params {};
		params.EliteDeepDive = EliteDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDives_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDives_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_Start.ITM_DeepDives_Start_C");
		return ptr;
	}

}


