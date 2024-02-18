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
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
	 * 		Flags  -> ()
	 */
	void UWND_Jobs_Entry_Base_C::Fold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold");
		
		UWND_Jobs_Entry_Base_C_Fold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Jobs_Entry_Base_C::SetData(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData");
		
		UWND_Jobs_Entry_Base_C_SetData_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWND_Jobs_Entry_Base_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh");
		
		UWND_Jobs_Entry_Base_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold
	 * 		Flags  -> ()
	 */
	void UWND_Jobs_Entry_Base_C::Unfold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold");
		
		UWND_Jobs_Entry_Base_C_Unfold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Jobs_Entry_Base_C::ExecuteUbergraph_WND_Jobs_Entry_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base");
		
		UWND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_Jobs_Entry_Base_C::Updated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature");
		
		UWND_Jobs_Entry_Base_C_Updated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWND_Jobs_Entry_Base_C*                      Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Jobs_Entry_Base_C::Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature");
		
		UWND_Jobs_Entry_Base_C_Unfolded__DelegateSignature_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_Jobs_Entry_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_Jobs_Entry_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C");
		return ptr;
	}

}


