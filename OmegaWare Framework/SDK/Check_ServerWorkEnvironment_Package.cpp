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
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsChecked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerWorkEnvironment_C::SetIsChecked(bool InIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked");
		
		UCheck_ServerWorkEnvironment_C_SetIsChecked_Params params {};
		params.InIsChecked = InIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UCheck_ServerWorkEnvironment_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable");
		
		UCheck_ServerWorkEnvironment_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerWorkEnvironment_C::GetIsChecked(bool* Checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked");
		
		UCheck_ServerWorkEnvironment_C_GetIsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Checked != nullptr)
			*Checked = params.Checked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerWorkEnvironment_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct");
		
		UCheck_ServerWorkEnvironment_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerWorkEnvironment_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UCheck_ServerWorkEnvironment_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCheck_ServerWorkEnvironment_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCheck_ServerWorkEnvironment_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
	 * 		Flags  -> ()
	 */
	void UCheck_ServerWorkEnvironment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct");
		
		UCheck_ServerWorkEnvironment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCheck_ServerWorkEnvironment_C::ExecuteUbergraph_Check_ServerWorkEnvironment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment");
		
		UCheck_ServerWorkEnvironment_C_ExecuteUbergraph_Check_ServerWorkEnvironment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCheck_ServerWorkEnvironment_C*              CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDifficultySetting*                          Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerWorkEnvironment_C::OnCheckedChanged__DelegateSignature(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature");
		
		UCheck_ServerWorkEnvironment_C_OnCheckedChanged__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		params.Difficulty = Difficulty;
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheck_ServerWorkEnvironment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheck_ServerWorkEnvironment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C");
		return ptr;
	}

}


