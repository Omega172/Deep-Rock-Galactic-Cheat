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
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWND_JoiningPassword_C::SetSession(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession");
		
		UWND_JoiningPassword_C_SetSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningPassword_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JoiningPassword_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningPassword_C::BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JoiningPassword_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JoiningPassword_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct");
		
		UWND_JoiningPassword_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		unsigned char                                      CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningPassword_C::BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature");
		
		UWND_JoiningPassword_C_BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningPassword_C::ExecuteUbergraph_WND_JoiningPassword(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword");
		
		UWND_JoiningPassword_C_ExecuteUbergraph_WND_JoiningPassword_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningPassword_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature");
		
		UWND_JoiningPassword_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningPassword_C::JoinWithPassword__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature");
		
		UWND_JoiningPassword_C_JoinWithPassword__DelegateSignature_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_JoiningPassword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_JoiningPassword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_JoiningPassword.WND_JoiningPassword_C");
		return ptr;
	}

}


