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
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnNewChallenge
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::OnNewChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnNewChallenge");
		
		UITM_Challenge_InfoBox_C_OnNewChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.AddChallengeToGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChallengeInfo                              ChallengeInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItm_SeasonChallenge_Small_C*                W_Challenge                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Challenge_InfoBox_C::AddChallengeToGrid(const struct FChallengeInfo& ChallengeInfo, int32_t Column, class UItm_SeasonChallenge_Small_C** W_Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.AddChallengeToGrid");
		
		UITM_Challenge_InfoBox_C_AddChallengeToGrid_Params params {};
		params.ChallengeInfo = ChallengeInfo;
		params.Column = Column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (W_Challenge != nullptr)
			*W_Challenge = params.W_Challenge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.SetOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsOpen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Challenge_InfoBox_C::SetOpen(bool InIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.SetOpen");
		
		UITM_Challenge_InfoBox_C_SetOpen_Params params {};
		params.InIsOpen = InIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Challenge_InfoBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.PreConstruct");
		
		UITM_Challenge_InfoBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.RefreshChallenges
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::RefreshChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.RefreshChallenges");
		
		UITM_Challenge_InfoBox_C_RefreshChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Challenge_InfoBox_C_BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Challenge_InfoBox_C::OnChallengeHover(bool IsHovered, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHover");
		
		UITM_Challenge_InfoBox_C_OnChallengeHover_Params params {};
		params.IsHovered = IsHovered;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Construct");
		
		UITM_Challenge_InfoBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Click
	 * 		Flags  -> ()
	 */
	void UITM_Challenge_InfoBox_C::Click()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Click");
		
		UITM_Challenge_InfoBox_C_Click_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.ExecuteUbergraph_ITM_Challenge_InfoBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Challenge_InfoBox_C::ExecuteUbergraph_ITM_Challenge_InfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.ExecuteUbergraph_ITM_Challenge_InfoBox");
		
		UITM_Challenge_InfoBox_C_ExecuteUbergraph_ITM_Challenge_InfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             AssetReferences                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USeasonChallenge*                            Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Challenge_InfoBox_C::OnChallengeHovered__DelegateSignature(TArray<class UObject*>* AssetReferences, bool InHovered, class USeasonChallenge* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHovered__DelegateSignature");
		
		UITM_Challenge_InfoBox_C_OnChallengeHovered__DelegateSignature_Params params {};
		params.InHovered = InHovered;
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetReferences != nullptr)
			*AssetReferences = params.AssetReferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Challenge_InfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Challenge_InfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C");
		return ptr;
	}

}


