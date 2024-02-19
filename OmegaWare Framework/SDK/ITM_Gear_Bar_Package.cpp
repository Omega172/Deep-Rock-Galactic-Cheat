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
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_DeepDive_StageIcon_C*                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               claimed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Gear_Bar_C::SetStageStatus(class UITM_DeepDive_StageIcon_C* Target, bool claimed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus");
		
		UITM_Gear_Bar_C_SetStageStatus_Params params {};
		params.Target = Target;
		params.claimed = claimed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   DeepDive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Gear_Bar_C::SetDeepDiveProgress(class UDeepDive* DeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress");
		
		UITM_Gear_Bar_C_SetDeepDiveProgress_Params params {};
		params.DeepDive = DeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
	 * 		Flags  -> ()
	 */
	void UITM_Gear_Bar_C::SetActiveProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress");
		
		UITM_Gear_Bar_C_SetActiveProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Stage1Complete                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Stage2Complete                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Stage3Complete                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Gear_Bar_C::SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress");
		
		UITM_Gear_Bar_C_SetCustomProgress_Params params {};
		params.Stage1Complete = Stage1Complete;
		params.Stage2Complete = Stage2Complete;
		params.Stage3Complete = Stage3Complete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Gear_Bar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct");
		
		UITM_Gear_Bar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Gear_Bar_C::ExecuteUbergraph_ITM_Gear_Bar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar");
		
		UITM_Gear_Bar_C_ExecuteUbergraph_ITM_Gear_Bar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Gear_Bar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Gear_Bar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Gear_Bar.ITM_Gear_Bar_C");
		return ptr;
	}

}


