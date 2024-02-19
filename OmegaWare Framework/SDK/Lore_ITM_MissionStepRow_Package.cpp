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
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionStepDescription                     step                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            StepNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepsInRow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULore_ITM_MissionStep_C*                     StepWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_ITM_MissionStepRow_C::AddStep(const struct FMissionStepDescription& step, int32_t StepNumber, int32_t StepsInRow, class ULore_ITM_MissionStep_C** StepWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep");
		
		ULore_ITM_MissionStepRow_C_AddStep_Params params {};
		params.step = step;
		params.StepNumber = StepNumber;
		params.StepsInRow = StepsInRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StepWidget != nullptr)
			*StepWidget = params.StepWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow
	 * 		Flags  -> ()
	 */
	void ULore_ITM_MissionStepRow_C::ClearRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow");
		
		ULore_ITM_MissionStepRow_C_ClearRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_ITM_MissionStepRow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct");
		
		ULore_ITM_MissionStepRow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_ITM_MissionStepRow_C::ExecuteUbergraph_Lore_ITM_MissionStepRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow");
		
		ULore_ITM_MissionStepRow_C_ExecuteUbergraph_Lore_ITM_MissionStepRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULore_ITM_MissionStepRow_C::OnStepUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature");
		
		ULore_ITM_MissionStepRow_C_OnStepUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionStepDescription                     step                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_ITM_MissionStepRow_C::OnStepHovered__DelegateSignature(const struct FMissionStepDescription& step)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature");
		
		ULore_ITM_MissionStepRow_C_OnStepHovered__DelegateSignature_Params params {};
		params.step = step;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_ITM_MissionStepRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_ITM_MissionStepRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C");
		return ptr;
	}

}


