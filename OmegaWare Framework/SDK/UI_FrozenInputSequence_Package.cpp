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
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.SetupSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EThawInputDirection>                        Sequence                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               First                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrozenInputSequence_C::SetupSequence(TArray<EThawInputDirection> Sequence, bool First)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.SetupSequence");
		
		UUI_FrozenInputSequence_C_SetupSequence_Params params {};
		params.Sequence = Sequence;
		params.First = First;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputSequence_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.Construct");
		
		UUI_FrozenInputSequence_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrozenInputSequence_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.PreConstruct");
		
		UUI_FrozenInputSequence_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputSuccess
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputSequence_C::OnInputSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputSuccess");
		
		UUI_FrozenInputSequence_C_OnInputSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputFailed
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputSequence_C::OnInputFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputFailed");
		
		UUI_FrozenInputSequence_C_OnInputFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.ExecuteUbergraph_UI_FrozenInputSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FrozenInputSequence_C::ExecuteUbergraph_UI_FrozenInputSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.ExecuteUbergraph_UI_FrozenInputSequence");
		
		UUI_FrozenInputSequence_C_ExecuteUbergraph_UI_FrozenInputSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FrozenInputSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FrozenInputSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FrozenInputSequence.UI_FrozenInputSequence_C");
		return ptr;
	}

}


