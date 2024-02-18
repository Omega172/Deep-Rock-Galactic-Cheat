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
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewFee                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_FactionSelect_C::Initialize(int32_t NewFee, class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize");
		
		UITM_FactionSelect_C_Initialize_Params params {};
		params.NewFee = NewFee;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_FactionSelect_C::SetFaction(class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction");
		
		UITM_FactionSelect_C_SetFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewFee                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_FactionSelect_C::SetFee(int32_t NewFee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee");
		
		UITM_FactionSelect_C_SetFee_Params params {};
		params.NewFee = NewFee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_FactionSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct");
		
		UITM_FactionSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_FactionSelect_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_FactionSelect_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_FactionSelect_C::AnswerCC(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC");
		
		UITM_FactionSelect_C_AnswerCC_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_FactionSelect_C::ExecuteUbergraph_ITM_FactionSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect");
		
		UITM_FactionSelect_C_ExecuteUbergraph_ITM_FactionSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_FactionSelect_C::FactionSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature");
		
		UITM_FactionSelect_C_FactionSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_FactionSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_FactionSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_FactionSelect.ITM_FactionSelect_C");
		return ptr;
	}

}


