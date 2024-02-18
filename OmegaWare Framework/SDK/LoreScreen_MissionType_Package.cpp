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
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionStepDescription                     step                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepsInRow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_MissionType_C::StepHovered(const struct FMissionStepDescription& step, int32_t StepIndex, int32_t StepsInRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered");
		
		ULoreScreen_MissionType_C_StepHovered_Params params {};
		params.step = step;
		params.StepIndex = StepIndex;
		params.StepsInRow = StepsInRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoreScreen_MissionType_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct");
		
		ULoreScreen_MissionType_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent
	 * 		Flags  -> ()
	 */
	void ULoreScreen_MissionType_C::RefreshContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent");
		
		ULoreScreen_MissionType_C_RefreshContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered
	 * 		Flags  -> ()
	 */
	void ULoreScreen_MissionType_C::StepUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered");
		
		ULoreScreen_MissionType_C_StepUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoreScreen_MissionType_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct");
		
		ULoreScreen_MissionType_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_MissionType_C::ExecuteUbergraph_LoreScreen_MissionType(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType");
		
		ULoreScreen_MissionType_C_ExecuteUbergraph_LoreScreen_MissionType_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoreScreen_MissionType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoreScreen_MissionType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoreScreen_MissionType.LoreScreen_MissionType_C");
		return ptr;
	}

}


