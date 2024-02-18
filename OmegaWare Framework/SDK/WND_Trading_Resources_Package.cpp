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
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.UpdateAmountAfterDeal
	 * 		Flags  -> ()
	 */
	void UWND_Trading_Resources_C::UpdateAmountAfterDeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.UpdateAmountAfterDeal");
		
		UWND_Trading_Resources_C_UpdateAmountAfterDeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.CountTradeResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                Map                                                        (ConstParm, Parm, OutParm)
	 * 		bool                                               IsBuyingMinerals                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_Trading_Resources_C::CountTradeResources(TMap<class UResourceData*, int32_t> Map, bool* IsBuyingMinerals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.CountTradeResources");
		
		UWND_Trading_Resources_C_CountTradeResources_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBuyingMinerals != nullptr)
			*IsBuyingMinerals = params.IsBuyingMinerals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.OnAmoutUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoClearAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoTradeAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_Trading_Resources_C::OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.OnAmoutUpdated");
		
		UWND_Trading_Resources_C_OnAmoutUpdated_Params params {};
		params.DoClearAnim = DoClearAnim;
		params.DoTradeAnim = DoTradeAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.No_678F03CB47E4D126FB4FF99BC3F43B71
	 * 		Flags  -> ()
	 */
	void UWND_Trading_Resources_C::No_678F03CB47E4D126FB4FF99BC3F43B71()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.No_678F03CB47E4D126FB4FF99BC3F43B71");
		
		UWND_Trading_Resources_C_No_678F03CB47E4D126FB4FF99BC3F43B71_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.Yes_678F03CB47E4D126FB4FF99BC3F43B71
	 * 		Flags  -> ()
	 */
	void UWND_Trading_Resources_C::Yes_678F03CB47E4D126FB4FF99BC3F43B71()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.Yes_678F03CB47E4D126FB4FF99BC3F43B71");
		
		UWND_Trading_Resources_C_Yes_678F03CB47E4D126FB4FF99BC3F43B71_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_Trading_Resources_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.Construct");
		
		UWND_Trading_Resources_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_Trading_Resources_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.PreConstruct");
		
		UWND_Trading_Resources_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_Resources_C::BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWND_Trading_Resources_C_BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_Resources_C::BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWND_Trading_Resources_C_BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.ClearAll
	 * 		Flags  -> ()
	 */
	void UWND_Trading_Resources_C::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.ClearAll");
		
		UWND_Trading_Resources_C_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.OnCreditsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_Resources_C::OnCreditsChanged(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.OnCreditsChanged");
		
		UWND_Trading_Resources_C_OnCreditsChanged_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Trading_Resources.WND_Trading_Resources_C.ExecuteUbergraph_WND_Trading_Resources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Trading_Resources_C::ExecuteUbergraph_WND_Trading_Resources(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Trading_Resources.WND_Trading_Resources_C.ExecuteUbergraph_WND_Trading_Resources");
		
		UWND_Trading_Resources_C_ExecuteUbergraph_WND_Trading_Resources_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_Trading_Resources_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_Trading_Resources_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_Trading_Resources.WND_Trading_Resources_C");
		return ptr;
	}

}


