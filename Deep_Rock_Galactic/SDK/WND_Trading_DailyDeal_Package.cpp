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
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.FormatDailyDealResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                Resources                                                  (Parm, OutParm)
	 */
	void UWND_Trading_DailyDeal_C::FormatDailyDealResources(TMap<class UResourceData*, int32_t>* Resources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.FormatDailyDealResources");
		
		UWND_Trading_DailyDeal_C_FormatDailyDealResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Resources != nullptr)
			*Resources = params.Resources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.No_D21FAC5A44FF696C3525F18876AC316A
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::No_D21FAC5A44FF696C3525F18876AC316A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.No_D21FAC5A44FF696C3525F18876AC316A");
		
		UWND_Trading_DailyDeal_C_No_D21FAC5A44FF696C3525F18876AC316A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Yes_D21FAC5A44FF696C3525F18876AC316A
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::Yes_D21FAC5A44FF696C3525F18876AC316A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Yes_D21FAC5A44FF696C3525F18876AC316A");
		
		UWND_Trading_DailyDeal_C_Yes_D21FAC5A44FF696C3525F18876AC316A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_Trading_DailyDeal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.PreConstruct");
		
		UWND_Trading_DailyDeal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Refresh");
		
		UWND_Trading_DailyDeal_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.UpdateTime
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.UpdateTime");
		
		UWND_Trading_DailyDeal_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_DailyDeal_C::BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWND_Trading_DailyDeal_C_BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Construct");
		
		UWND_Trading_DailyDeal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnResourceAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currentAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_DailyDeal_C::OnResourceAmountChanged(class UResourceData* Resource, float currentAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnResourceAmountChanged");
		
		UWND_Trading_DailyDeal_C_OnResourceAmountChanged_Params params {};
		params.Resource = Resource;
		params.currentAmount = currentAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnCreditsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_DailyDeal_C::OnCreditsChanged(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnCreditsChanged");
		
		UWND_Trading_DailyDeal_C_OnCreditsChanged_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.ExecuteUbergraph_WND_Trading_DailyDeal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_DailyDeal_C::ExecuteUbergraph_WND_Trading_DailyDeal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.ExecuteUbergraph_WND_Trading_DailyDeal");
		
		UWND_Trading_DailyDeal_C_ExecuteUbergraph_WND_Trading_DailyDeal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnDealBought__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_Trading_DailyDeal_C::OnDealBought__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnDealBought__DelegateSignature");
		
		UWND_Trading_DailyDeal_C_OnDealBought__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_Trading_DailyDeal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_Trading_DailyDeal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_Trading_DailyDeal.WND_Trading_DailyDeal_C");
		return ptr;
	}

}


