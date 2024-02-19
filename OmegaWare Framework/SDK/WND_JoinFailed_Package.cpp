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
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.OnFailure_EF9B242446B45E709293BAB20166BCB2
	 * 		Flags  -> ()
	 */
	void UWND_JoinFailed_C::OnFailure_EF9B242446B45E709293BAB20166BCB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.OnFailure_EF9B242446B45E709293BAB20166BCB2");
		
		UWND_JoinFailed_C_OnFailure_EF9B242446B45E709293BAB20166BCB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.OnSuccess_EF9B242446B45E709293BAB20166BCB2
	 * 		Flags  -> ()
	 */
	void UWND_JoinFailed_C::OnSuccess_EF9B242446B45E709293BAB20166BCB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.OnSuccess_EF9B242446B45E709293BAB20166BCB2");
		
		UWND_JoinFailed_C_OnSuccess_EF9B242446B45E709293BAB20166BCB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoinFailed_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JoinFailed_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JoinFailed_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct");
		
		UWND_JoinFailed_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWND_JoinFailed_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.Cancel");
		
		UWND_JoinFailed_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.OnShown
	 * 		Flags  -> ()
	 */
	void UWND_JoinFailed_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.OnShown");
		
		UWND_JoinFailed_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoinFailed_C::ExecuteUbergraph_WND_JoinFailed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed");
		
		UWND_JoinFailed_C_ExecuteUbergraph_WND_JoinFailed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_JoinFailed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_JoinFailed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_JoinFailed.WND_JoinFailed_C");
		return ptr;
	}

}


