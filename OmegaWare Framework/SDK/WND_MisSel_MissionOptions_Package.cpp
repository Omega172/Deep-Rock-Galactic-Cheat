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
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWND_MisSel_MissionOptions_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnKeyUp");
		
		UWND_MisSel_MissionOptions_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FEventReply                                 OutReply                                                   (Parm, OutParm)
	 */
	void UWND_MisSel_MissionOptions_C::HandleKeyUp(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleKeyUp");
		
		UWND_MisSel_MissionOptions_C_HandleKeyUp_Params params {};
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
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty
	 * 		Flags  -> ()
	 */
	class UDifficultySetting* UWND_MisSel_MissionOptions_C::GetSelectedDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty");
		
		UWND_MisSel_MissionOptions_C_GetSelectedDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::UpdateConfirmButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton");
		
		UWND_MisSel_MissionOptions_C_UpdateConfirmButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Explanation                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWND_MisSel_MissionOptions_C::SetMissionLocked(bool IsLocked, const class FText& Explanation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked");
		
		UWND_MisSel_MissionOptions_C_SetMissionLocked_Params params {};
		params.IsLocked = IsLocked;
		params.Explanation = Explanation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::HandleModeChange(EMissionSelection_Mode Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange");
		
		UWND_MisSel_MissionOptions_C_HandleModeChange_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Password                                                   (Parm, OutParm)
	 * 		bool                                               HasPassword                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_MisSel_MissionOptions_C::GetPassword(class FText* Password, bool* HasPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword");
		
		UWND_MisSel_MissionOptions_C_GetPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Password != nullptr)
			*Password = params.Password;
		if (HasPassword != nullptr)
			*HasPassword = params.HasPassword;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
	 * 		Flags  -> ()
	 */
	bool UWND_MisSel_MissionOptions_C::IsFriendsOnly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly");
		
		UWND_MisSel_MissionOptions_C_IsFriendsOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::UpdateHazardBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus");
		
		UWND_MisSel_MissionOptions_C_UpdateHazardBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA994BEDE78()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78");
		
		UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA994BEDE78_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA994BEDE78()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78");
		
		UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA994BEDE78_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA9DC34619D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D");
		
		UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA9DC34619D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA9DC34619D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D");
		
		UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA9DC34619D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_MisSel_MissionOptions_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct");
		
		UWND_MisSel_MissionOptions_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct");
		
		UWND_MisSel_MissionOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::ShowMode(EMissionSelection_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode");
		
		UWND_MisSel_MissionOptions_C_ShowMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::SetMission(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission");
		
		UWND_MisSel_MissionOptions_C_SetMission_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		unsigned char                                      CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::ResetSelectedDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty");
		
		UWND_MisSel_MissionOptions_C_ResetSelectedDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetFocusDependentOnInputDevice
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::SetFocusDependentOnInputDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetFocusDependentOnInputDevice");
		
		UWND_MisSel_MissionOptions_C_SetFocusDependentOnInputDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::ExecuteUbergraph_WND_MisSel_MissionOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions");
		
		UWND_MisSel_MissionOptions_C_ExecuteUbergraph_WND_MisSel_MissionOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartSoloMission__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnStartSoloMission__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartSoloMission__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_OnStartSoloMission__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          NewDifficulty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_MissionOptions_C::OnDifficultyChanged__DelegateSignature(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_OnDifficultyChanged__DelegateSignature_Params params {};
		params.NewDifficulty = NewDifficulty;
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnJoinMission__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_OnJoinMission__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_MissionOptions_C::OnStartMission__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature");
		
		UWND_MisSel_MissionOptions_C_OnStartMission__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_MisSel_MissionOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_MisSel_MissionOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C");
		return ptr;
	}

}


