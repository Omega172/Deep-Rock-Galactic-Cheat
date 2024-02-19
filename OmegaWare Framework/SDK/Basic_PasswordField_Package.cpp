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
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.GetPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Password                                                   (Parm, OutParm)
	 */
	void UBasic_PasswordField_C::GetPassword(class FText* Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.GetPassword");
		
		UBasic_PasswordField_C_GetPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Password != nullptr)
			*Password = params.Password;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.GetPasswordHint
	 * 		Flags  -> ()
	 */
	class FText UBasic_PasswordField_C::GetPasswordHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.GetPasswordHint");
		
		UBasic_PasswordField_C_GetPasswordHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_PasswordField_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.PreConstruct");
		
		UBasic_PasswordField_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBasic_PasswordField_C::BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UBasic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_PasswordField_C::BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UBasic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.ExecuteUbergraph_Basic_PasswordField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_PasswordField_C::ExecuteUbergraph_Basic_PasswordField(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.ExecuteUbergraph_Basic_PasswordField");
		
		UBasic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		unsigned char                                      CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_PasswordField_C::OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.OnTextCommitted__DelegateSignature");
		
		UBasic_PasswordField_C_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_PasswordField.Basic_PasswordField_C.OnTextChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_PasswordField_C::OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_PasswordField.Basic_PasswordField_C.OnTextChanged__DelegateSignature");
		
		UBasic_PasswordField_C_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_PasswordField_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_PasswordField_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_PasswordField.Basic_PasswordField_C");
		return ptr;
	}

}


