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
	 * 		Name   -> Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSaveCategoryList_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.Construct");
		
		UITM_RestoreSaveCategoryList_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSaveCategoryList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UITM_RestoreSaveCategoryList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RestoreSaveCategoryList_Entry_C::ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry");
		
		UITM_RestoreSaveCategoryList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_RestoreSaveCategoryList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_RestoreSaveCategoryList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C");
		return ptr;
	}

}


