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
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.CreateToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_RestoreSaveList_Entry_C::CreateToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.CreateToolTipWidget");
		
		UITM_RestoreSaveList_Entry_C_CreateToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PromotionRank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      slotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               CurrentSave                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UFSDSaveGame*                                SaveGameInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RestoreSaveList_Entry_C::SetValues(int32_t PlayerRank, int32_t Credits, int32_t PromotionRank, const class FString& slotName, bool CurrentSave, class UFSDSaveGame* SaveGameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues");
		
		UITM_RestoreSaveList_Entry_C_SetValues_Params params {};
		params.PlayerRank = PlayerRank;
		params.Credits = Credits;
		params.PromotionRank = PromotionRank;
		params.slotName = slotName;
		params.CurrentSave = CurrentSave;
		params.SaveGameInstance = SaveGameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnFailure_01B969514F5C76910A60AC87B4757BE7
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSaveList_Entry_C::OnFailure_01B969514F5C76910A60AC87B4757BE7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnFailure_01B969514F5C76910A60AC87B4757BE7");
		
		UITM_RestoreSaveList_Entry_C_OnFailure_01B969514F5C76910A60AC87B4757BE7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnSuccess_01B969514F5C76910A60AC87B4757BE7
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSaveList_Entry_C::OnSuccess_01B969514F5C76910A60AC87B4757BE7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnSuccess_01B969514F5C76910A60AC87B4757BE7");
		
		UITM_RestoreSaveList_Entry_C_OnSuccess_01B969514F5C76910A60AC87B4757BE7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSaveList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UITM_RestoreSaveList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_RestoreSaveList_Entry_C::Answer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer");
		
		UITM_RestoreSaveList_Entry_C_Answer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_RestoreSaveList_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.PreConstruct");
		
		UITM_RestoreSaveList_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RestoreSaveList_Entry_C::ExecuteUbergraph_ITM_RestoreSaveList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry");
		
		UITM_RestoreSaveList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_RestoreSaveList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_RestoreSaveList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C");
		return ptr;
	}

}


