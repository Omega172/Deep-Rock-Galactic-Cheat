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
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_ResourceCounter_C::SetIconSize(int32_t InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize");
		
		UITM_UpgGear_ResourceCounter_C_SetIconSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAffordable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_ResourceCounter_C::SetCanAfford(bool IsAffordable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford");
		
		UITM_UpgGear_ResourceCounter_C_SetCanAfford_Params params {};
		params.IsAffordable = IsAffordable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRequiredAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InShowRequiredAmount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_ResourceCounter_C::SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData");
		
		UITM_UpgGear_ResourceCounter_C_SetResourceData_Params params {};
		params.InResource = InResource;
		params.InAmount = InAmount;
		params.InRequiredAmount = InRequiredAmount;
		params.InShowRequiredAmount = InShowRequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_ResourceCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct");
		
		UITM_UpgGear_ResourceCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_ResourceCounter_C::UpdateAmount(float InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount");
		
		UITM_UpgGear_ResourceCounter_C_UpdateAmount_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_ResourceCounter_C::ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter");
		
		UITM_UpgGear_ResourceCounter_C_ExecuteUbergraph_ITM_UpgGear_ResourceCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_ResourceCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_ResourceCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C");
		return ptr;
	}

}


