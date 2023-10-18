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
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRequiredAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_ResourceCounter_C::SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData");
		
		UITM_TopBar_ResourceCounter_C_SetResourceData_Params params {};
		params.InResource = InResource;
		params.InAmount = InAmount;
		params.InRequiredAmount = InRequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_TopBar_ResourceCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct");
		
		UITM_TopBar_ResourceCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_ResourceCounter_C::UpdateAmount(float InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount");
		
		UITM_TopBar_ResourceCounter_C_UpdateAmount_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_TopBar_ResourceCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct");
		
		UITM_TopBar_ResourceCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currentAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_ResourceCounter_C::OnResourceAmountChanged_Event(class UResourceData* Resource, float currentAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event");
		
		UITM_TopBar_ResourceCounter_C_OnResourceAmountChanged_Event_Params params {};
		params.Resource = Resource;
		params.currentAmount = currentAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave
	 * 		Flags  -> ()
	 */
	void UITM_TopBar_ResourceCounter_C::UpdateFromSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave");
		
		UITM_TopBar_ResourceCounter_C_UpdateFromSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateResourceBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideWhenZero                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoCountAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_TopBar_ResourceCounter_C::UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateResourceBehavior");
		
		UITM_TopBar_ResourceCounter_C_UpdateResourceBehavior_Params params {};
		params.HideWhenZero = HideWhenZero;
		params.DoCountAnim = DoCountAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_ResourceCounter_C::ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter");
		
		UITM_TopBar_ResourceCounter_C_ExecuteUbergraph_ITM_TopBar_ResourceCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_TopBar_ResourceCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_TopBar_ResourceCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C");
		return ptr;
	}

}


