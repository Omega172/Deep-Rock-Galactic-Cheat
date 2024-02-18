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
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateChangeAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IncrementAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DidUpdate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Trading_Resource_C::UpdateChangeAmount(int32_t IncrementAmount, bool* DidUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateChangeAmount");
		
		UITM_Trading_Resource_C_UpdateChangeAmount_Params params {};
		params.IncrementAmount = IncrementAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidUpdate != nullptr)
			*DidUpdate = params.DidUpdate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Trading_Resource_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.PreConstruct");
		
		UITM_Trading_Resource_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_Trading_BasketItem_C*                   TradeBasket                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_Resource_C::SetData(class UResourceData* Resource, class UITM_Trading_BasketItem_C* TradeBasket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetData");
		
		UITM_Trading_Resource_C_SetData_Params params {};
		params.Resource = Resource;
		params.TradeBasket = TradeBasket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoClearAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoTradeAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InitialDelay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_Resource_C::UpdateNumber(bool DoClearAnim, bool DoTradeAnim, float InitialDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateNumber");
		
		UITM_Trading_Resource_C_UpdateNumber_Params params {};
		params.DoClearAnim = DoClearAnim;
		params.DoTradeAnim = DoTradeAnim;
		params.InitialDelay = InitialDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetAvailableBalance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CreditsLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_Resource_C::SetAvailableBalance(int32_t CreditsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetAvailableBalance");
		
		UITM_Trading_Resource_C_SetAvailableBalance_Params params {};
		params.CreditsLeft = CreditsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.ClearAmount
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::ClearAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.ClearAmount");
		
		UITM_Trading_Resource_C_ClearAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateAmountOwned
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::UpdateAmountOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateAmountOwned");
		
		UITM_Trading_Resource_C_UpdateAmountOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.FadeFinished
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::FadeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.FadeFinished");
		
		UITM_Trading_Resource_C_FadeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");
		
		UITM_Trading_Resource_C_BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.IncrementAmount
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::IncrementAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.IncrementAmount");
		
		UITM_Trading_Resource_C_IncrementAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Trading_Resource_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.Construct");
		
		UITM_Trading_Resource_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.ResourceUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currentAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_Resource_C::ResourceUpdated(class UResourceData* Resource, float currentAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.ResourceUpdated");
		
		UITM_Trading_Resource_C_ResourceUpdated_Params params {};
		params.Resource = Resource;
		params.currentAmount = currentAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.ExecuteUbergraph_ITM_Trading_Resource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_Resource_C::ExecuteUbergraph_ITM_Trading_Resource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.ExecuteUbergraph_ITM_Trading_Resource");
		
		UITM_Trading_Resource_C_ExecuteUbergraph_ITM_Trading_Resource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_Resource.ITM_Trading_Resource_C.AmoutUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoClearAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoTradeAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Trading_Resource_C::AmoutUpdated__DelegateSignature(bool DoClearAnim, bool DoTradeAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_Resource.ITM_Trading_Resource_C.AmoutUpdated__DelegateSignature");
		
		UITM_Trading_Resource_C_AmoutUpdated__DelegateSignature_Params params {};
		params.DoClearAnim = DoClearAnim;
		params.DoTradeAnim = DoTradeAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Trading_Resource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Trading_Resource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Trading_Resource.ITM_Trading_Resource_C");
		return ptr;
	}

}


