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
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.Verify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EGameType>                                  InSelectedGameTypes                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCheck_ServerGameType_C::Verify(TArray<EGameType> InSelectedGameTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.Verify");
		
		UCheck_ServerGameType_C_Verify_Params params {};
		params.InSelectedGameTypes = InSelectedGameTypes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSandbox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerGameType_C::Reset(bool InSandbox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.Reset");
		
		UCheck_ServerGameType_C_Reset_Params params {};
		params.InSandbox = InSandbox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UCheck_ServerGameType_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.IsInteractable");
		
		UCheck_ServerGameType_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.GetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerGameType_C::GetIsChecked(bool* Checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.GetIsChecked");
		
		UCheck_ServerGameType_C_GetIsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Checked != nullptr)
			*Checked = params.Checked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerGameType_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.PreConstruct");
		
		UCheck_ServerGameType_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCheck_ServerGameType_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UCheck_ServerGameType_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.Construct
	 * 		Flags  -> ()
	 */
	void UCheck_ServerGameType_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.Construct");
		
		UCheck_ServerGameType_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.ExecuteUbergraph_Check_ServerGameType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCheck_ServerGameType_C::ExecuteUbergraph_Check_ServerGameType(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.ExecuteUbergraph_Check_ServerGameType");
		
		UCheck_ServerGameType_C_ExecuteUbergraph_Check_ServerGameType_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Check_ServerGameType.Check_ServerGameType_C.OnCheckedChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGameType                                          Gametype                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCheck_ServerGameType_C::OnCheckedChanged__DelegateSignature(bool IsChecked, EGameType Gametype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Check_ServerGameType.Check_ServerGameType_C.OnCheckedChanged__DelegateSignature");
		
		UCheck_ServerGameType_C_OnCheckedChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.Gametype = Gametype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheck_ServerGameType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheck_ServerGameType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Check_ServerGameType.Check_ServerGameType_C");
		return ptr;
	}

}


